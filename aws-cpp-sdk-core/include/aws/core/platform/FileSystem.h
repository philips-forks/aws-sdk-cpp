/*
  * Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  *
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  *
  *  http://aws.amazon.com/apache2.0
  *
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <functional>

namespace Aws
{

namespace FileSystem
{
    struct DirectoryEntry;
    class Directory;

    #ifdef _WIN32
        static const char PATH_DELIM = '\\';
    #else
        static const char PATH_DELIM = '/';
    #endif

    /**
    * Returns the directory path for the home dir env variable
    */
    AWS_CORE_API Aws::String GetHomeDirectory();

    /**
    * Creates directory if it doesn't exist. Returns true if the directory was created
    * or already exists. False for failure.
    */
    AWS_CORE_API bool CreateDirectoryIfNotExists(const char* path);

    /**
    * Creates directory if it doesn't exist. Returns true if the directory was created
    * or already exists. False for failure.
    */
    AWS_CORE_API bool RemoveDirectoryIfExists(const char* path);

    /**
    * Deletes file if it exists. Returns true if file doesn't exist or on success.
    */
    AWS_CORE_API bool RemoveFileIfExists(const char* fileName);

    /**
    * Moves the file. Returns true on success
    */
    AWS_CORE_API bool RelocateFileOrDirectory(const char* from, const char* to);

    /**
    * Computes a unique tmp file path
    */
    AWS_CORE_API Aws::String CreateTempFilePath();

    /**
     * Opens a directory for traversal.
     * User is responsible for the returned allocated memory. Call Aws::Delete();
     */
    AWS_CORE_API Directory* OpenDirectory(const Aws::String& path, const Aws::String& relativePath = "");

    /**
     * Type of directory entry encountered.
     */
    enum class FileType
    {
        None,
        File,
        Symlink,
        Directory
    };

    struct DirectoryEntry
    {
        DirectoryEntry() : fileType(FileType::None), fileSize(0) {}

        operator bool() const { return !path.empty() && fileType != FileType::None; }

        Aws::String path;
        Aws::String relativePath;
        FileType fileType;
        int64_t fileSize;
    };

    /**
     * Base level representation of a directory. Provides the ability to iterate all entries in a directory and to descend into directories.
     * We don't recommend you use this class directly. Instead see DirectoryTree.
     */
    class AWS_CORE_API Directory
    {
    public:
        /**
         * Initialize a directory with it's absolute path. If the path is invalid, the bool operator will return false.
         */
        Directory(const Aws::String& path, const Aws::String& relativePath);
        virtual ~Directory();

        /**
         * If this directory is valid for use.
         */
        operator bool() const { return m_directoryEntry.operator bool(); }

        /**
         * Get the entry representing this current directory object.
         */
        const DirectoryEntry GetDirectoryEntry() const { return m_directoryEntry; }

        /**
         * Get the current path of this directory object.
         */
        const Aws::String GetPath() const { return m_directoryEntry.path; }

        /**
         * Get the next entry inside this directory.
         */
        virtual DirectoryEntry Next() = 0;

        /**
         * Descend into a directory if it is a directory. Returns a reference to a Directory object which you can then call Next() and Descend on.
         * The original Directory object you use is responsible for the memory this method allocates, so do not attempt to delete the return value.
         */
        Directory& Descend(const DirectoryEntry& directoryEntry);

    protected:
        DirectoryEntry m_directoryEntry;

    private:
        Aws::Vector<Directory*> m_openDirectories;
    };

    class AWS_CORE_API DirectoryTree;

    /**
     * Visitor for a Directory Tree traversal. Return true to continue the traversal, false to exit the traversal immediately.
     */
    typedef std::function<bool(const DirectoryTree*, const DirectoryEntry&)> DirectoryEntryVisitor;

    /**
     * Wrapper around directory. Currently provides a Depth-first and Breadth-first traversal of the provided path. This is most likely the class you are 
     * looking for.
     */
    class DirectoryTree
    {
    public:
        /**
         * Create a directory object for use with traversal using the provided path.
         */
        DirectoryTree(const Aws::String& path);
        ~DirectoryTree();

        /**
         * If the object is valid for use: true. Otherwise: false.
         */
        operator bool() const;

        /**
         * Performs a depth-first traversal of the directory tree. Upon encountering an entry, visitor will be invoked.
         */
        void TraverseDepthFirst(const DirectoryEntryVisitor& visitor);

        /**
         * Performs a breadth-first traversal of the directory tree. Upon encountering an entry, visitor will be invoked.
         */
        void TraverseBreadthFirst(const DirectoryEntryVisitor& visitor);

    private:
        bool TraverseDepthFirst(Directory& dir, const DirectoryEntryVisitor& visitor);
        void TraverseBreadthFirst(Directory& dir, const DirectoryEntryVisitor& visitor);

        Directory* m_dir;
    };

} // namespace FileSystem
} // namespace Aws

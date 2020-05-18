﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/CustomDataIdentifiers.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/ClassificationResultStatus.h>
#include <aws/macie2/model/SensitiveDataItem.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides detailed information about a sensitive data finding, including the
   * types and number of occurrences of the data that was found.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ClassificationResult">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API ClassificationResult
  {
  public:
    ClassificationResult();
    ClassificationResult(Aws::Utils::Json::JsonView jsonValue);
    ClassificationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of occurrences of the data that produced the finding, and the
     * custom data identifiers that detected the data.</p>
     */
    inline const CustomDataIdentifiers& GetCustomDataIdentifiers() const{ return m_customDataIdentifiers; }

    /**
     * <p>The number of occurrences of the data that produced the finding, and the
     * custom data identifiers that detected the data.</p>
     */
    inline bool CustomDataIdentifiersHasBeenSet() const { return m_customDataIdentifiersHasBeenSet; }

    /**
     * <p>The number of occurrences of the data that produced the finding, and the
     * custom data identifiers that detected the data.</p>
     */
    inline void SetCustomDataIdentifiers(const CustomDataIdentifiers& value) { m_customDataIdentifiersHasBeenSet = true; m_customDataIdentifiers = value; }

    /**
     * <p>The number of occurrences of the data that produced the finding, and the
     * custom data identifiers that detected the data.</p>
     */
    inline void SetCustomDataIdentifiers(CustomDataIdentifiers&& value) { m_customDataIdentifiersHasBeenSet = true; m_customDataIdentifiers = std::move(value); }

    /**
     * <p>The number of occurrences of the data that produced the finding, and the
     * custom data identifiers that detected the data.</p>
     */
    inline ClassificationResult& WithCustomDataIdentifiers(const CustomDataIdentifiers& value) { SetCustomDataIdentifiers(value); return *this;}

    /**
     * <p>The number of occurrences of the data that produced the finding, and the
     * custom data identifiers that detected the data.</p>
     */
    inline ClassificationResult& WithCustomDataIdentifiers(CustomDataIdentifiers&& value) { SetCustomDataIdentifiers(std::move(value)); return *this;}


    /**
     * <p>The type of content, expressed as a MIME type, that the finding applies to.
     * For example, application/gzip, for a GNU Gzip compressed archive file, or
     * application/pdf, for an Adobe PDF file.</p>
     */
    inline const Aws::String& GetMimeType() const{ return m_mimeType; }

    /**
     * <p>The type of content, expressed as a MIME type, that the finding applies to.
     * For example, application/gzip, for a GNU Gzip compressed archive file, or
     * application/pdf, for an Adobe PDF file.</p>
     */
    inline bool MimeTypeHasBeenSet() const { return m_mimeTypeHasBeenSet; }

    /**
     * <p>The type of content, expressed as a MIME type, that the finding applies to.
     * For example, application/gzip, for a GNU Gzip compressed archive file, or
     * application/pdf, for an Adobe PDF file.</p>
     */
    inline void SetMimeType(const Aws::String& value) { m_mimeTypeHasBeenSet = true; m_mimeType = value; }

    /**
     * <p>The type of content, expressed as a MIME type, that the finding applies to.
     * For example, application/gzip, for a GNU Gzip compressed archive file, or
     * application/pdf, for an Adobe PDF file.</p>
     */
    inline void SetMimeType(Aws::String&& value) { m_mimeTypeHasBeenSet = true; m_mimeType = std::move(value); }

    /**
     * <p>The type of content, expressed as a MIME type, that the finding applies to.
     * For example, application/gzip, for a GNU Gzip compressed archive file, or
     * application/pdf, for an Adobe PDF file.</p>
     */
    inline void SetMimeType(const char* value) { m_mimeTypeHasBeenSet = true; m_mimeType.assign(value); }

    /**
     * <p>The type of content, expressed as a MIME type, that the finding applies to.
     * For example, application/gzip, for a GNU Gzip compressed archive file, or
     * application/pdf, for an Adobe PDF file.</p>
     */
    inline ClassificationResult& WithMimeType(const Aws::String& value) { SetMimeType(value); return *this;}

    /**
     * <p>The type of content, expressed as a MIME type, that the finding applies to.
     * For example, application/gzip, for a GNU Gzip compressed archive file, or
     * application/pdf, for an Adobe PDF file.</p>
     */
    inline ClassificationResult& WithMimeType(Aws::String&& value) { SetMimeType(std::move(value)); return *this;}

    /**
     * <p>The type of content, expressed as a MIME type, that the finding applies to.
     * For example, application/gzip, for a GNU Gzip compressed archive file, or
     * application/pdf, for an Adobe PDF file.</p>
     */
    inline ClassificationResult& WithMimeType(const char* value) { SetMimeType(value); return *this;}


    /**
     * <p>The category and number of occurrences of the sensitive data that produced
     * the finding.</p>
     */
    inline const Aws::Vector<SensitiveDataItem>& GetSensitiveData() const{ return m_sensitiveData; }

    /**
     * <p>The category and number of occurrences of the sensitive data that produced
     * the finding.</p>
     */
    inline bool SensitiveDataHasBeenSet() const { return m_sensitiveDataHasBeenSet; }

    /**
     * <p>The category and number of occurrences of the sensitive data that produced
     * the finding.</p>
     */
    inline void SetSensitiveData(const Aws::Vector<SensitiveDataItem>& value) { m_sensitiveDataHasBeenSet = true; m_sensitiveData = value; }

    /**
     * <p>The category and number of occurrences of the sensitive data that produced
     * the finding.</p>
     */
    inline void SetSensitiveData(Aws::Vector<SensitiveDataItem>&& value) { m_sensitiveDataHasBeenSet = true; m_sensitiveData = std::move(value); }

    /**
     * <p>The category and number of occurrences of the sensitive data that produced
     * the finding.</p>
     */
    inline ClassificationResult& WithSensitiveData(const Aws::Vector<SensitiveDataItem>& value) { SetSensitiveData(value); return *this;}

    /**
     * <p>The category and number of occurrences of the sensitive data that produced
     * the finding.</p>
     */
    inline ClassificationResult& WithSensitiveData(Aws::Vector<SensitiveDataItem>&& value) { SetSensitiveData(std::move(value)); return *this;}

    /**
     * <p>The category and number of occurrences of the sensitive data that produced
     * the finding.</p>
     */
    inline ClassificationResult& AddSensitiveData(const SensitiveDataItem& value) { m_sensitiveDataHasBeenSet = true; m_sensitiveData.push_back(value); return *this; }

    /**
     * <p>The category and number of occurrences of the sensitive data that produced
     * the finding.</p>
     */
    inline ClassificationResult& AddSensitiveData(SensitiveDataItem&& value) { m_sensitiveDataHasBeenSet = true; m_sensitiveData.push_back(std::move(value)); return *this; }


    /**
     * <p>The total size, in bytes, of the data that the finding applies to.</p>
     */
    inline long long GetSizeClassified() const{ return m_sizeClassified; }

    /**
     * <p>The total size, in bytes, of the data that the finding applies to.</p>
     */
    inline bool SizeClassifiedHasBeenSet() const { return m_sizeClassifiedHasBeenSet; }

    /**
     * <p>The total size, in bytes, of the data that the finding applies to.</p>
     */
    inline void SetSizeClassified(long long value) { m_sizeClassifiedHasBeenSet = true; m_sizeClassified = value; }

    /**
     * <p>The total size, in bytes, of the data that the finding applies to.</p>
     */
    inline ClassificationResult& WithSizeClassified(long long value) { SetSizeClassified(value); return *this;}


    /**
     * <p>The status of the finding.</p>
     */
    inline const ClassificationResultStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the finding.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the finding.</p>
     */
    inline void SetStatus(const ClassificationResultStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the finding.</p>
     */
    inline void SetStatus(ClassificationResultStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the finding.</p>
     */
    inline ClassificationResult& WithStatus(const ClassificationResultStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the finding.</p>
     */
    inline ClassificationResult& WithStatus(ClassificationResultStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    CustomDataIdentifiers m_customDataIdentifiers;
    bool m_customDataIdentifiersHasBeenSet;

    Aws::String m_mimeType;
    bool m_mimeTypeHasBeenSet;

    Aws::Vector<SensitiveDataItem> m_sensitiveData;
    bool m_sensitiveDataHasBeenSet;

    long long m_sizeClassified;
    bool m_sizeClassifiedHasBeenSet;

    ClassificationResultStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws

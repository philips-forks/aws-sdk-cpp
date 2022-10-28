﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/cloudformation/CloudFormationServiceClientModel.h>

namespace Aws
{
namespace CloudFormation
{
  /**
   * <fullname>CloudFormation</fullname> <p>CloudFormation allows you to create and
   * manage Amazon Web Services infrastructure deployments predictably and
   * repeatedly. You can use CloudFormation to leverage Amazon Web Services products,
   * such as Amazon Elastic Compute Cloud, Amazon Elastic Block Store, Amazon Simple
   * Notification Service, Elastic Load Balancing, and Auto Scaling to build highly
   * reliable, highly scalable, cost-effective applications without creating or
   * configuring the underlying Amazon Web Services infrastructure.</p> <p>With
   * CloudFormation, you declare all your resources and dependencies in a template
   * file. The template defines a collection of resources as a single unit called a
   * stack. CloudFormation creates and deletes all member resources of the stack
   * together and manages all dependencies between the resources for you.</p> <p>For
   * more information about CloudFormation, see the <a
   * href="http://aws.amazon.com/cloudformation/">CloudFormation product
   * page</a>.</p> <p>CloudFormation makes use of other Amazon Web Services products.
   * If you need additional technical information about a specific Amazon Web
   * Services product, you can find the product's technical documentation at <a
   * href="https://docs.aws.amazon.com/"> <code>docs.aws.amazon.com</code> </a>.</p>
   */
  class AWS_CLOUDFORMATION_API CloudFormationClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFormationClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFormationClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudFormationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudFormationClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Activates a public third-party extension, making it available for use in
         * stack templates. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html">Using
         * public extensions</a> in the <i>CloudFormation User Guide</i>.</p> <p>Once you
         * have activated a public third-party extension in your account and region, use <a
         * href="AWSCloudFormation/latest/APIReference/API_SetTypeConfiguration.html">SetTypeConfiguration</a>
         * to specify configuration properties for the extension. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
         * extensions at the account level</a> in the <i>CloudFormation User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ActivateType">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateTypeOutcome ActivateType(const Model::ActivateTypeRequest& request) const;

        /**
         * A Callable wrapper for ActivateType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateTypeOutcomeCallable ActivateTypeCallable(const Model::ActivateTypeRequest& request) const;

        /**
         * An Async wrapper for ActivateType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ActivateTypeAsync(const Model::ActivateTypeRequest& request, const ActivateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns configuration data for the specified CloudFormation extensions, from
         * the CloudFormation registry for the account and region.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
         * extensions at the account level</a> in the <i>CloudFormation User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/BatchDescribeTypeConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDescribeTypeConfigurationsOutcome BatchDescribeTypeConfigurations(const Model::BatchDescribeTypeConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for BatchDescribeTypeConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDescribeTypeConfigurationsOutcomeCallable BatchDescribeTypeConfigurationsCallable(const Model::BatchDescribeTypeConfigurationsRequest& request) const;

        /**
         * An Async wrapper for BatchDescribeTypeConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDescribeTypeConfigurationsAsync(const Model::BatchDescribeTypeConfigurationsRequest& request, const BatchDescribeTypeConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an update on the specified stack. If the call completes successfully,
         * the stack rolls back the update and reverts to the previous stack
         * configuration.</p>  <p>You can cancel only stacks that are in the
         * <code>UPDATE_IN_PROGRESS</code> state.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CancelUpdateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelUpdateStackOutcome CancelUpdateStack(const Model::CancelUpdateStackRequest& request) const;

        /**
         * A Callable wrapper for CancelUpdateStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelUpdateStackOutcomeCallable CancelUpdateStackCallable(const Model::CancelUpdateStackRequest& request) const;

        /**
         * An Async wrapper for CancelUpdateStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelUpdateStackAsync(const Model::CancelUpdateStackRequest& request, const CancelUpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For a specified stack that's in the <code>UPDATE_ROLLBACK_FAILED</code>
         * state, continues rolling it back to the <code>UPDATE_ROLLBACK_COMPLETE</code>
         * state. Depending on the cause of the failure, you can manually <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
         * fix the error</a> and continue the rollback. By continuing the rollback, you can
         * return your stack to a working state (the <code>UPDATE_ROLLBACK_COMPLETE</code>
         * state), and then try to update the stack again.</p> <p>A stack goes into the
         * <code>UPDATE_ROLLBACK_FAILED</code> state when CloudFormation can't roll back
         * all changes after a failed stack update. For example, you might have a stack
         * that's rolling back to an old database instance that was deleted outside of
         * CloudFormation. Because CloudFormation doesn't know the database was deleted, it
         * assumes that the database instance still exists and attempts to roll back to it,
         * causing the update rollback to fail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ContinueUpdateRollback">AWS
         * API Reference</a></p>
         */
        virtual Model::ContinueUpdateRollbackOutcome ContinueUpdateRollback(const Model::ContinueUpdateRollbackRequest& request) const;

        /**
         * A Callable wrapper for ContinueUpdateRollback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ContinueUpdateRollbackOutcomeCallable ContinueUpdateRollbackCallable(const Model::ContinueUpdateRollbackRequest& request) const;

        /**
         * An Async wrapper for ContinueUpdateRollback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ContinueUpdateRollbackAsync(const Model::ContinueUpdateRollbackRequest& request, const ContinueUpdateRollbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a list of changes that will be applied to a stack so that you can
         * review the changes before executing them. You can create a change set for a
         * stack that doesn't exist or an existing stack. If you create a change set for a
         * stack that doesn't exist, the change set shows all of the resources that
         * CloudFormation will create. If you create a change set for an existing stack,
         * CloudFormation compares the stack's information with the information that you
         * submit in the change set and lists the differences. Use change sets to
         * understand which resources CloudFormation will create or change, and how it will
         * change resources in an existing stack, before you create or update a stack.</p>
         * <p>To create a change set for a stack that doesn't exist, for the
         * <code>ChangeSetType</code> parameter, specify <code>CREATE</code>. To create a
         * change set for an existing stack, specify <code>UPDATE</code> for the
         * <code>ChangeSetType</code> parameter. To create a change set for an import
         * operation, specify <code>IMPORT</code> for the <code>ChangeSetType</code>
         * parameter. After the <code>CreateChangeSet</code> call successfully completes,
         * CloudFormation starts creating the change set. To check the status of the change
         * set or to review it, use the <a>DescribeChangeSet</a> action.</p> <p>When you
         * are satisfied with the changes the change set will make, execute the change set
         * by using the <a>ExecuteChangeSet</a> action. CloudFormation doesn't make changes
         * until you execute the change set.</p> <p>To create a change set for the entire
         * stack hierarchy, set <code>IncludeNestedStacks</code> to
         * <code>True</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChangeSetOutcome CreateChangeSet(const Model::CreateChangeSetRequest& request) const;

        /**
         * A Callable wrapper for CreateChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChangeSetOutcomeCallable CreateChangeSetCallable(const Model::CreateChangeSetRequest& request) const;

        /**
         * An Async wrapper for CreateChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChangeSetAsync(const Model::CreateChangeSetRequest& request, const CreateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a stack as specified in the template. After the call completes
         * successfully, the stack creation starts. You can check the status of the stack
         * through the <a>DescribeStacks</a>operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStackOutcome CreateStack(const Model::CreateStackRequest& request) const;

        /**
         * A Callable wrapper for CreateStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStackOutcomeCallable CreateStackCallable(const Model::CreateStackRequest& request) const;

        /**
         * An Async wrapper for CreateStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStackAsync(const Model::CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates stack instances for the specified accounts, within the specified
         * Amazon Web Services Regions. A stack instance refers to a stack in a specific
         * account and Region. You must specify at least one value for either
         * <code>Accounts</code> or <code>DeploymentTargets</code>, and you must specify at
         * least one value for <code>Regions</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStackInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStackInstancesOutcome CreateStackInstances(const Model::CreateStackInstancesRequest& request) const;

        /**
         * A Callable wrapper for CreateStackInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStackInstancesOutcomeCallable CreateStackInstancesCallable(const Model::CreateStackInstancesRequest& request) const;

        /**
         * An Async wrapper for CreateStackInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStackInstancesAsync(const Model::CreateStackInstancesRequest& request, const CreateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a stack set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStackSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStackSetOutcome CreateStackSet(const Model::CreateStackSetRequest& request) const;

        /**
         * A Callable wrapper for CreateStackSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStackSetOutcomeCallable CreateStackSetCallable(const Model::CreateStackSetRequest& request) const;

        /**
         * An Async wrapper for CreateStackSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStackSetAsync(const Model::CreateStackSetRequest& request, const CreateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deactivates a public extension that was previously activated in this account
         * and region.</p> <p>Once deactivated, an extension can't be used in any
         * CloudFormation operation. This includes stack update operations where the stack
         * template includes the extension, even if no updates are being made to the
         * extension. In addition, deactivated extensions aren't automatically updated if a
         * new version of the extension is released.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeactivateType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateTypeOutcome DeactivateType(const Model::DeactivateTypeRequest& request) const;

        /**
         * A Callable wrapper for DeactivateType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivateTypeOutcomeCallable DeactivateTypeCallable(const Model::DeactivateTypeRequest& request) const;

        /**
         * An Async wrapper for DeactivateType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeactivateTypeAsync(const Model::DeactivateTypeRequest& request, const DeactivateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified change set. Deleting change sets ensures that no one
         * executes the wrong change set.</p> <p>If the call successfully completes,
         * CloudFormation successfully deleted the change set.</p> <p>If
         * <code>IncludeNestedStacks</code> specifies <code>True</code> during the creation
         * of the nested change set, then <code>DeleteChangeSet</code> will delete all
         * change sets that belong to the stacks hierarchy and will also delete all change
         * sets for nested stacks with the status of
         * <code>REVIEW_IN_PROGRESS</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChangeSetOutcome DeleteChangeSet(const Model::DeleteChangeSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChangeSetOutcomeCallable DeleteChangeSetCallable(const Model::DeleteChangeSetRequest& request) const;

        /**
         * An Async wrapper for DeleteChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChangeSetAsync(const Model::DeleteChangeSetRequest& request, const DeleteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified stack. Once the call completes successfully, stack
         * deletion starts. Deleted stacks don't show up in the <a>DescribeStacks</a>
         * operation if the deletion has been completed successfully.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStack">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStackOutcome DeleteStack(const Model::DeleteStackRequest& request) const;

        /**
         * A Callable wrapper for DeleteStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStackOutcomeCallable DeleteStackCallable(const Model::DeleteStackRequest& request) const;

        /**
         * An Async wrapper for DeleteStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStackAsync(const Model::DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes stack instances for the specified accounts, in the specified Amazon
         * Web Services Regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStackInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStackInstancesOutcome DeleteStackInstances(const Model::DeleteStackInstancesRequest& request) const;

        /**
         * A Callable wrapper for DeleteStackInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStackInstancesOutcomeCallable DeleteStackInstancesCallable(const Model::DeleteStackInstancesRequest& request) const;

        /**
         * An Async wrapper for DeleteStackInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStackInstancesAsync(const Model::DeleteStackInstancesRequest& request, const DeleteStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a stack set. Before you can delete a stack set, all its member stack
         * instances must be deleted. For more information about how to complete this, see
         * <a>DeleteStackInstances</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeleteStackSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStackSetOutcome DeleteStackSet(const Model::DeleteStackSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteStackSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStackSetOutcomeCallable DeleteStackSetCallable(const Model::DeleteStackSetRequest& request) const;

        /**
         * An Async wrapper for DeleteStackSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStackSetAsync(const Model::DeleteStackSetRequest& request, const DeleteStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Marks an extension or extension version as <code>DEPRECATED</code> in the
         * CloudFormation registry, removing it from active use. Deprecated extensions or
         * extension versions cannot be used in CloudFormation operations.</p> <p>To
         * deregister an entire extension, you must individually deregister all active
         * versions of that extension. If an extension has only a single active version,
         * deregistering that version results in the extension itself being deregistered
         * and marked as deprecated in the registry.</p> <p>You can't deregister the
         * default version of an extension if there are other active version of that
         * extension. If you do deregister the default version of an extension, the
         * extension type itself is deregistered as well and marked as deprecated.</p>
         * <p>To view the deprecation status of an extension or extension version, use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeregisterType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTypeOutcome DeregisterType(const Model::DeregisterTypeRequest& request) const;

        /**
         * A Callable wrapper for DeregisterType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterTypeOutcomeCallable DeregisterTypeCallable(const Model::DeregisterTypeRequest& request) const;

        /**
         * An Async wrapper for DeregisterType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTypeAsync(const Model::DeregisterTypeRequest& request, const DeregisterTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves your account's CloudFormation limits, such as the maximum number of
         * stacks that you can create in your account. For more information about account
         * limits, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/cloudformation-limits.html">CloudFormation
         * Quotas</a> in the <i>CloudFormation User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeAccountLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the inputs for the change set and a list of changes that
         * CloudFormation will make if you execute the change set. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-changesets.html">Updating
         * Stacks Using Change Sets</a> in the CloudFormation User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChangeSetOutcome DescribeChangeSet(const Model::DescribeChangeSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChangeSetOutcomeCallable DescribeChangeSetCallable(const Model::DescribeChangeSetRequest& request) const;

        /**
         * An Async wrapper for DescribeChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChangeSetAsync(const Model::DescribeChangeSetRequest& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns hook-related information for the change set and a list of changes
         * that CloudFormation makes when you run the change set.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeChangeSetHooks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChangeSetHooksOutcome DescribeChangeSetHooks(const Model::DescribeChangeSetHooksRequest& request) const;

        /**
         * A Callable wrapper for DescribeChangeSetHooks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChangeSetHooksOutcomeCallable DescribeChangeSetHooksCallable(const Model::DescribeChangeSetHooksRequest& request) const;

        /**
         * An Async wrapper for DescribeChangeSetHooks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChangeSetHooksAsync(const Model::DescribeChangeSetHooksRequest& request, const DescribeChangeSetHooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a CloudFormation extension publisher.</p> <p>If you
         * don't supply a <code>PublisherId</code>, and you have registered as an extension
         * publisher, <code>DescribePublisher</code> returns information about your own
         * publisher account.</p> <p>For more information about registering as a publisher,
         * see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterPublisher.html">RegisterPublisher</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html">Publishing
         * extensions to make them available for public use</a> in the <i>CloudFormation
         * CLI User Guide</i> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribePublisher">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePublisherOutcome DescribePublisher(const Model::DescribePublisherRequest& request) const;

        /**
         * A Callable wrapper for DescribePublisher that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePublisherOutcomeCallable DescribePublisherCallable(const Model::DescribePublisherRequest& request) const;

        /**
         * An Async wrapper for DescribePublisher that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePublisherAsync(const Model::DescribePublisherRequest& request, const DescribePublisherResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a stack drift detection operation. A stack drift
         * detection operation detects whether a stack's actual configuration differs, or
         * has <i>drifted</i>, from it's expected configuration, as defined in the stack
         * template and any values specified as template parameters. A stack is considered
         * to have drifted if one or more of its resources have drifted. For more
         * information about stack and resource drift, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
         * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Use
         * <a>DetectStackDrift</a> to initiate a stack drift detection operation.
         * <code>DetectStackDrift</code> returns a <code>StackDriftDetectionId</code> you
         * can use to monitor the progress of the operation using
         * <code>DescribeStackDriftDetectionStatus</code>. Once the drift detection
         * operation has completed, use <a>DescribeStackResourceDrifts</a> to return drift
         * information about the stack and its resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackDriftDetectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackDriftDetectionStatusOutcome DescribeStackDriftDetectionStatus(const Model::DescribeStackDriftDetectionStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeStackDriftDetectionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackDriftDetectionStatusOutcomeCallable DescribeStackDriftDetectionStatusCallable(const Model::DescribeStackDriftDetectionStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeStackDriftDetectionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackDriftDetectionStatusAsync(const Model::DescribeStackDriftDetectionStatusRequest& request, const DescribeStackDriftDetectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all stack related events for a specified stack in reverse
         * chronological order. For more information about a stack's event history, go to
         * <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/concept-stack.html">Stacks</a>
         * in the CloudFormation User Guide.</p>  <p>You can list events for stacks
         * that have failed to create or have been deleted by specifying the unique stack
         * identifier (stack ID).</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackEventsOutcome DescribeStackEvents(const Model::DescribeStackEventsRequest& request) const;

        /**
         * A Callable wrapper for DescribeStackEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackEventsOutcomeCallable DescribeStackEventsCallable(const Model::DescribeStackEventsRequest& request) const;

        /**
         * An Async wrapper for DescribeStackEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackEventsAsync(const Model::DescribeStackEventsRequest& request, const DescribeStackEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the stack instance that's associated with the specified stack set,
         * Amazon Web Services account, and Region.</p> <p>For a list of stack instances
         * that are associated with a specific stack set, use
         * <a>ListStackInstances</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackInstanceOutcome DescribeStackInstance(const Model::DescribeStackInstanceRequest& request) const;

        /**
         * A Callable wrapper for DescribeStackInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackInstanceOutcomeCallable DescribeStackInstanceCallable(const Model::DescribeStackInstanceRequest& request) const;

        /**
         * An Async wrapper for DescribeStackInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackInstanceAsync(const Model::DescribeStackInstanceRequest& request, const DescribeStackInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the specified resource in the specified stack.</p>
         * <p>For deleted stacks, DescribeStackResource returns resource information for up
         * to 90 days after the stack has been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackResourceOutcome DescribeStackResource(const Model::DescribeStackResourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeStackResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackResourceOutcomeCallable DescribeStackResourceCallable(const Model::DescribeStackResourceRequest& request) const;

        /**
         * An Async wrapper for DescribeStackResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackResourceAsync(const Model::DescribeStackResourceRequest& request, const DescribeStackResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns drift information for the resources that have been checked for drift
         * in the specified stack. This includes actual and expected configuration values
         * for resources where CloudFormation detects configuration drift.</p> <p>For a
         * given stack, there will be one <code>StackResourceDrift</code> for each stack
         * resource that has been checked for drift. Resources that haven't yet been
         * checked for drift aren't included. Resources that don't currently support drift
         * detection aren't checked, and so not included. For a list of resources that
         * support drift detection, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
         * that Support Drift Detection</a>.</p> <p>Use <a>DetectStackResourceDrift</a> to
         * detect drift on individual resources, or <a>DetectStackDrift</a> to detect drift
         * on all supported resources for a given stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResourceDrifts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackResourceDriftsOutcome DescribeStackResourceDrifts(const Model::DescribeStackResourceDriftsRequest& request) const;

        /**
         * A Callable wrapper for DescribeStackResourceDrifts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackResourceDriftsOutcomeCallable DescribeStackResourceDriftsCallable(const Model::DescribeStackResourceDriftsRequest& request) const;

        /**
         * An Async wrapper for DescribeStackResourceDrifts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackResourceDriftsAsync(const Model::DescribeStackResourceDriftsRequest& request, const DescribeStackResourceDriftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns Amazon Web Services resource descriptions for running and deleted
         * stacks. If <code>StackName</code> is specified, all the associated resources
         * that are part of the stack are returned. If <code>PhysicalResourceId</code> is
         * specified, the associated resources of the stack that the resource belongs to
         * are returned.</p>  <p>Only the first 100 resources will be returned. If
         * your stack has more resources than this, you should use
         * <code>ListStackResources</code> instead.</p>  <p>For deleted stacks,
         * <code>DescribeStackResources</code> returns resource information for up to 90
         * days after the stack has been deleted.</p> <p>You must specify either
         * <code>StackName</code> or <code>PhysicalResourceId</code>, but not both. In
         * addition, you can specify <code>LogicalResourceId</code> to filter the returned
         * result. For more information about resources, the <code>LogicalResourceId</code>
         * and <code>PhysicalResourceId</code>, go to the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/">CloudFormation
         * User Guide</a>.</p>  <p>A <code>ValidationError</code> is returned if you
         * specify both <code>StackName</code> and <code>PhysicalResourceId</code> in the
         * same request.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResources">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackResourcesOutcome DescribeStackResources(const Model::DescribeStackResourcesRequest& request) const;

        /**
         * A Callable wrapper for DescribeStackResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackResourcesOutcomeCallable DescribeStackResourcesCallable(const Model::DescribeStackResourcesRequest& request) const;

        /**
         * An Async wrapper for DescribeStackResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackResourcesAsync(const Model::DescribeStackResourcesRequest& request, const DescribeStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of the specified stack set.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackSetOutcome DescribeStackSet(const Model::DescribeStackSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeStackSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackSetOutcomeCallable DescribeStackSetCallable(const Model::DescribeStackSetRequest& request) const;

        /**
         * An Async wrapper for DescribeStackSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackSetAsync(const Model::DescribeStackSetRequest& request, const DescribeStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of the specified stack set operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackSetOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackSetOperationOutcome DescribeStackSetOperation(const Model::DescribeStackSetOperationRequest& request) const;

        /**
         * A Callable wrapper for DescribeStackSetOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackSetOperationOutcomeCallable DescribeStackSetOperationCallable(const Model::DescribeStackSetOperationRequest& request) const;

        /**
         * An Async wrapper for DescribeStackSetOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackSetOperationAsync(const Model::DescribeStackSetOperationRequest& request, const DescribeStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description for the specified stack; if no stack name was
         * specified, then it returns the description for all the stacks created.</p>
         *  <p>If the stack doesn't exist, an <code>ValidationError</code> is
         * returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStacksOutcome DescribeStacks(const Model::DescribeStacksRequest& request) const;

        /**
         * A Callable wrapper for DescribeStacks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStacksOutcomeCallable DescribeStacksCallable(const Model::DescribeStacksRequest& request) const;

        /**
         * An Async wrapper for DescribeStacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStacksAsync(const Model::DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about an extension that has been registered.</p>
         * <p>If you specify a <code>VersionId</code>, <code>DescribeType</code> returns
         * information about that specific extension version. Otherwise, it returns
         * information about the default extension version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeType">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTypeOutcome DescribeType(const Model::DescribeTypeRequest& request) const;

        /**
         * A Callable wrapper for DescribeType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTypeOutcomeCallable DescribeTypeCallable(const Model::DescribeTypeRequest& request) const;

        /**
         * An Async wrapper for DescribeType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTypeAsync(const Model::DescribeTypeRequest& request, const DescribeTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an extension's registration, including its current
         * status and type and version identifiers.</p> <p>When you initiate a registration
         * request using <code> <a>RegisterType</a> </code>, you can then use <code>
         * <a>DescribeTypeRegistration</a> </code> to monitor the progress of that
         * registration request.</p> <p>Once the registration request has completed, use
         * <code> <a>DescribeType</a> </code> to return detailed information about an
         * extension.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeTypeRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTypeRegistrationOutcome DescribeTypeRegistration(const Model::DescribeTypeRegistrationRequest& request) const;

        /**
         * A Callable wrapper for DescribeTypeRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTypeRegistrationOutcomeCallable DescribeTypeRegistrationCallable(const Model::DescribeTypeRegistrationRequest& request) const;

        /**
         * An Async wrapper for DescribeTypeRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTypeRegistrationAsync(const Model::DescribeTypeRegistrationRequest& request, const DescribeTypeRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detects whether a stack's actual configuration differs, or has
         * <i>drifted</i>, from it's expected configuration, as defined in the stack
         * template and any values specified as template parameters. For each resource in
         * the stack that supports drift detection, CloudFormation compares the actual
         * configuration of the resource with its expected template configuration. Only
         * resource properties explicitly defined in the stack template are checked for
         * drift. A stack is considered to have drifted if one or more of its resources
         * differ from their expected template configurations. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
         * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Use
         * <code>DetectStackDrift</code> to detect drift on all supported resources for a
         * given stack, or <a>DetectStackResourceDrift</a> to detect drift on individual
         * resources.</p> <p>For a list of stack resources that currently support drift
         * detection, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
         * that Support Drift Detection</a>.</p> <p> <code>DetectStackDrift</code> can take
         * up to several minutes, depending on the number of resources contained within the
         * stack. Use <a>DescribeStackDriftDetectionStatus</a> to monitor the progress of a
         * detect stack drift operation. Once the drift detection operation has completed,
         * use <a>DescribeStackResourceDrifts</a> to return drift information about the
         * stack and its resources.</p> <p>When detecting drift on a stack, CloudFormation
         * doesn't detect drift on any nested stacks belonging to that stack. Perform
         * <code>DetectStackDrift</code> directly on the nested stack itself.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DetectStackDrift">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectStackDriftOutcome DetectStackDrift(const Model::DetectStackDriftRequest& request) const;

        /**
         * A Callable wrapper for DetectStackDrift that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectStackDriftOutcomeCallable DetectStackDriftCallable(const Model::DetectStackDriftRequest& request) const;

        /**
         * An Async wrapper for DetectStackDrift that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectStackDriftAsync(const Model::DetectStackDriftRequest& request, const DetectStackDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about whether a resource's actual configuration differs,
         * or has <i>drifted</i>, from it's expected configuration, as defined in the stack
         * template and any values specified as template parameters. This information
         * includes actual and expected property values for resources in which
         * CloudFormation detects drift. Only resource properties explicitly defined in the
         * stack template are checked for drift. For more information about stack and
         * resource drift, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
         * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Use
         * <code>DetectStackResourceDrift</code> to detect drift on individual resources,
         * or <a>DetectStackDrift</a> to detect drift on all resources in a given stack
         * that support drift detection.</p> <p>Resources that don't currently support
         * drift detection can't be checked. For a list of resources that support drift
         * detection, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
         * that Support Drift Detection</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DetectStackResourceDrift">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectStackResourceDriftOutcome DetectStackResourceDrift(const Model::DetectStackResourceDriftRequest& request) const;

        /**
         * A Callable wrapper for DetectStackResourceDrift that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectStackResourceDriftOutcomeCallable DetectStackResourceDriftCallable(const Model::DetectStackResourceDriftRequest& request) const;

        /**
         * An Async wrapper for DetectStackResourceDrift that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectStackResourceDriftAsync(const Model::DetectStackResourceDriftRequest& request, const DetectStackResourceDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detect drift on a stack set. When CloudFormation performs drift detection on
         * a stack set, it performs drift detection on the stack associated with each stack
         * instance in the stack set. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-drift.html">How
         * CloudFormation performs drift detection on a stack set</a>.</p> <p>
         * <code>DetectStackSetDrift</code> returns the <code>OperationId</code> of the
         * stack set drift detection operation. Use this operation id with <code>
         * <a>DescribeStackSetOperation</a> </code> to monitor the progress of the drift
         * detection operation. The drift detection operation may take some time, depending
         * on the number of stack instances included in the stack set, in addition to the
         * number of resources included in each stack.</p> <p>Once the operation has
         * completed, use the following actions to return drift information:</p> <ul> <li>
         * <p>Use <code> <a>DescribeStackSet</a> </code> to return detailed information
         * about the stack set, including detailed information about the last
         * <i>completed</i> drift operation performed on the stack set. (Information about
         * drift operations that are in progress isn't included.)</p> </li> <li> <p>Use
         * <code> <a>ListStackInstances</a> </code> to return a list of stack instances
         * belonging to the stack set, including the drift status and last drift time
         * checked of each instance.</p> </li> <li> <p>Use <code>
         * <a>DescribeStackInstance</a> </code> to return detailed information about a
         * specific stack instance, including its drift status and last drift time
         * checked.</p> </li> </ul> <p>For more information about performing a drift
         * detection operation on a stack set, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-drift.html">Detecting
         * unmanaged changes in stack sets</a>.</p> <p>You can only run a single drift
         * detection operation on a given stack set at one time.</p> <p>To stop a drift
         * detection stack set operation, use <code> <a>StopStackSetOperation</a>
         * </code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DetectStackSetDrift">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectStackSetDriftOutcome DetectStackSetDrift(const Model::DetectStackSetDriftRequest& request) const;

        /**
         * A Callable wrapper for DetectStackSetDrift that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectStackSetDriftOutcomeCallable DetectStackSetDriftCallable(const Model::DetectStackSetDriftRequest& request) const;

        /**
         * An Async wrapper for DetectStackSetDrift that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectStackSetDriftAsync(const Model::DetectStackSetDriftRequest& request, const DetectStackSetDriftResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the estimated monthly cost of a template. The return value is an
         * Amazon Web Services Simple Monthly Calculator URL with a query string that
         * describes the resources required to run the template.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/EstimateTemplateCost">AWS
         * API Reference</a></p>
         */
        virtual Model::EstimateTemplateCostOutcome EstimateTemplateCost(const Model::EstimateTemplateCostRequest& request) const;

        /**
         * A Callable wrapper for EstimateTemplateCost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EstimateTemplateCostOutcomeCallable EstimateTemplateCostCallable(const Model::EstimateTemplateCostRequest& request) const;

        /**
         * An Async wrapper for EstimateTemplateCost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EstimateTemplateCostAsync(const Model::EstimateTemplateCostRequest& request, const EstimateTemplateCostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a stack using the input information that was provided when the
         * specified change set was created. After the call successfully completes,
         * CloudFormation starts updating the stack. Use the <a>DescribeStacks</a> action
         * to view the status of the update.</p> <p>When you execute a change set,
         * CloudFormation deletes all other change sets associated with the stack because
         * they aren't valid for the updated stack.</p> <p>If a stack policy is associated
         * with the stack, CloudFormation enforces the policy during the update. You can't
         * specify a temporary stack policy that overrides the current policy.</p> <p>To
         * create a change set for the entire stack hierarchy,
         * <code>IncludeNestedStacks</code> must have been set to
         * <code>True</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ExecuteChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteChangeSetOutcome ExecuteChangeSet(const Model::ExecuteChangeSetRequest& request) const;

        /**
         * A Callable wrapper for ExecuteChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteChangeSetOutcomeCallable ExecuteChangeSetCallable(const Model::ExecuteChangeSetRequest& request) const;

        /**
         * An Async wrapper for ExecuteChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecuteChangeSetAsync(const Model::ExecuteChangeSetRequest& request, const ExecuteChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the stack policy for a specified stack. If a stack doesn't have a
         * policy, a null value is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetStackPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStackPolicyOutcome GetStackPolicy(const Model::GetStackPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetStackPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStackPolicyOutcomeCallable GetStackPolicyCallable(const Model::GetStackPolicyRequest& request) const;

        /**
         * An Async wrapper for GetStackPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStackPolicyAsync(const Model::GetStackPolicyRequest& request, const GetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the template body for a specified stack. You can get the template for
         * running or deleted stacks.</p> <p>For deleted stacks, <code>GetTemplate</code>
         * returns the template for up to 90 days after the stack has been deleted.</p>
         *  <p>If the template doesn't exist, a <code>ValidationError</code> is
         * returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateOutcomeCallable GetTemplateCallable(const Model::GetTemplateRequest& request) const;

        /**
         * An Async wrapper for GetTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateAsync(const Model::GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a new or existing template. The
         * <code>GetTemplateSummary</code> action is useful for viewing parameter
         * information, such as default parameter values and parameter types, before you
         * create or update a stack or stack set.</p> <p>You can use the
         * <code>GetTemplateSummary</code> action when you submit a template, or you can
         * get template information for a stack set, or a running or deleted stack.</p>
         * <p>For deleted stacks, <code>GetTemplateSummary</code> returns the template
         * information for up to 90 days after the stack has been deleted. If the template
         * doesn't exist, a <code>ValidationError</code> is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplateSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateSummaryOutcome GetTemplateSummary(const Model::GetTemplateSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetTemplateSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateSummaryOutcomeCallable GetTemplateSummaryCallable(const Model::GetTemplateSummaryRequest& request) const;

        /**
         * An Async wrapper for GetTemplateSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateSummaryAsync(const Model::GetTemplateSummaryRequest& request, const GetTemplateSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Import existing stacks into a new stack sets. Use the stack import operation
         * to import up to 10 stacks into a new stack set in the same account as the source
         * stack or in a different administrator account and Region, by specifying the
         * stack ID of the stack you intend to import.</p>  <p>
         * <code>ImportStacksToStackSet</code> is only supported by self-managed
         * permissions.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ImportStacksToStackSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportStacksToStackSetOutcome ImportStacksToStackSet(const Model::ImportStacksToStackSetRequest& request) const;

        /**
         * A Callable wrapper for ImportStacksToStackSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportStacksToStackSetOutcomeCallable ImportStacksToStackSetCallable(const Model::ImportStacksToStackSetRequest& request) const;

        /**
         * An Async wrapper for ImportStacksToStackSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportStacksToStackSetAsync(const Model::ImportStacksToStackSetRequest& request, const ImportStacksToStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the ID and status of each active change set for a stack. For example,
         * CloudFormation lists change sets that are in the <code>CREATE_IN_PROGRESS</code>
         * or <code>CREATE_PENDING</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListChangeSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChangeSetsOutcome ListChangeSets(const Model::ListChangeSetsRequest& request) const;

        /**
         * A Callable wrapper for ListChangeSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChangeSetsOutcomeCallable ListChangeSetsCallable(const Model::ListChangeSetsRequest& request) const;

        /**
         * An Async wrapper for ListChangeSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChangeSetsAsync(const Model::ListChangeSetsRequest& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all exported output values in the account and Region in which you call
         * this action. Use this action to see the exported output values that you can
         * import into other stacks. To import values, use the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
         * <code>Fn::ImportValue</code> </a> function.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-exports.html">
         * CloudFormation export stack output values</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListExports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExportsOutcome ListExports(const Model::ListExportsRequest& request) const;

        /**
         * A Callable wrapper for ListExports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExportsOutcomeCallable ListExportsCallable(const Model::ListExportsRequest& request) const;

        /**
         * An Async wrapper for ListExports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExportsAsync(const Model::ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all stacks that are importing an exported output value. To modify or
         * remove an exported output value, first use this action to see which stacks are
         * using it. To see the exported output values in your account, see
         * <a>ListExports</a>.</p> <p>For more information about importing an exported
         * output value, see the <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
         * <code>Fn::ImportValue</code> </a> function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListImports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportsOutcome ListImports(const Model::ListImportsRequest& request) const;

        /**
         * A Callable wrapper for ListImports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImportsOutcomeCallable ListImportsCallable(const Model::ListImportsRequest& request) const;

        /**
         * An Async wrapper for ListImports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImportsAsync(const Model::ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summary information about stack instances that are associated with
         * the specified stack set. You can filter for stack instances that are associated
         * with a specific Amazon Web Services account name or Region, or that have a
         * specific status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackInstancesOutcome ListStackInstances(const Model::ListStackInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListStackInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackInstancesOutcomeCallable ListStackInstancesCallable(const Model::ListStackInstancesRequest& request) const;

        /**
         * An Async wrapper for ListStackInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStackInstancesAsync(const Model::ListStackInstancesRequest& request, const ListStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptions of all resources of the specified stack.</p> <p>For
         * deleted stacks, ListStackResources returns resource information for up to 90
         * days after the stack has been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackResourcesOutcome ListStackResources(const Model::ListStackResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListStackResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackResourcesOutcomeCallable ListStackResourcesCallable(const Model::ListStackResourcesRequest& request) const;

        /**
         * An Async wrapper for ListStackResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStackResourcesAsync(const Model::ListStackResourcesRequest& request, const ListStackResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summary information about the results of a stack set
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackSetOperationResults">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackSetOperationResultsOutcome ListStackSetOperationResults(const Model::ListStackSetOperationResultsRequest& request) const;

        /**
         * A Callable wrapper for ListStackSetOperationResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackSetOperationResultsOutcomeCallable ListStackSetOperationResultsCallable(const Model::ListStackSetOperationResultsRequest& request) const;

        /**
         * An Async wrapper for ListStackSetOperationResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStackSetOperationResultsAsync(const Model::ListStackSetOperationResultsRequest& request, const ListStackSetOperationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summary information about operations performed on a stack
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackSetOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackSetOperationsOutcome ListStackSetOperations(const Model::ListStackSetOperationsRequest& request) const;

        /**
         * A Callable wrapper for ListStackSetOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackSetOperationsOutcomeCallable ListStackSetOperationsCallable(const Model::ListStackSetOperationsRequest& request) const;

        /**
         * An Async wrapper for ListStackSetOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStackSetOperationsAsync(const Model::ListStackSetOperationsRequest& request, const ListStackSetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summary information about stack sets that are associated with the
         * user.</p> <ul> <li> <p>[Self-managed permissions] If you set the
         * <code>CallAs</code> parameter to <code>SELF</code> while signed in to your
         * Amazon Web Services account, <code>ListStackSets</code> returns all self-managed
         * stack sets in your Amazon Web Services account.</p> </li> <li>
         * <p>[Service-managed permissions] If you set the <code>CallAs</code> parameter to
         * <code>SELF</code> while signed in to the organization's management account,
         * <code>ListStackSets</code> returns all stack sets in the management account.</p>
         * </li> <li> <p>[Service-managed permissions] If you set the <code>CallAs</code>
         * parameter to <code>DELEGATED_ADMIN</code> while signed in to your member
         * account, <code>ListStackSets</code> returns all stack sets with service-managed
         * permissions in the management account.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStackSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackSetsOutcome ListStackSets(const Model::ListStackSetsRequest& request) const;

        /**
         * A Callable wrapper for ListStackSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStackSetsOutcomeCallable ListStackSetsCallable(const Model::ListStackSetsRequest& request) const;

        /**
         * An Async wrapper for ListStackSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStackSetsAsync(const Model::ListStackSetsRequest& request, const ListStackSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the summary information for stacks whose status matches the specified
         * StackStatusFilter. Summary information for stacks that have been deleted is kept
         * for 90 days after the stack is deleted. If no StackStatusFilter is specified,
         * summary information for all stacks is returned (including existing stacks and
         * stacks that have been deleted).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStacksOutcome ListStacks(const Model::ListStacksRequest& request) const;

        /**
         * A Callable wrapper for ListStacks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStacksOutcomeCallable ListStacksCallable(const Model::ListStacksRequest& request) const;

        /**
         * An Async wrapper for ListStacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStacksAsync(const Model::ListStacksRequest& request, const ListStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of registration tokens for the specified
         * extension(s).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListTypeRegistrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTypeRegistrationsOutcome ListTypeRegistrations(const Model::ListTypeRegistrationsRequest& request) const;

        /**
         * A Callable wrapper for ListTypeRegistrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTypeRegistrationsOutcomeCallable ListTypeRegistrationsCallable(const Model::ListTypeRegistrationsRequest& request) const;

        /**
         * An Async wrapper for ListTypeRegistrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTypeRegistrationsAsync(const Model::ListTypeRegistrationsRequest& request, const ListTypeRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summary information about the versions of an extension.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListTypeVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTypeVersionsOutcome ListTypeVersions(const Model::ListTypeVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListTypeVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTypeVersionsOutcomeCallable ListTypeVersionsCallable(const Model::ListTypeVersionsRequest& request) const;

        /**
         * An Async wrapper for ListTypeVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTypeVersionsAsync(const Model::ListTypeVersionsRequest& request, const ListTypeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns summary information about extension that have been registered with
         * CloudFormation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ListTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTypesOutcome ListTypes(const Model::ListTypesRequest& request) const;

        /**
         * A Callable wrapper for ListTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTypesOutcomeCallable ListTypesCallable(const Model::ListTypesRequest& request) const;

        /**
         * An Async wrapper for ListTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTypesAsync(const Model::ListTypesRequest& request, const ListTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Publishes the specified extension to the CloudFormation registry as a public
         * extension in this region. Public extensions are available for use by all
         * CloudFormation users. For more information about publishing extensions, see <a
         * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html">Publishing
         * extensions to make them available for public use</a> in the <i>CloudFormation
         * CLI User Guide</i>.</p> <p>To publish an extension, you must be registered as a
         * publisher with CloudFormation. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterPublisher.html">RegisterPublisher</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/PublishType">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishTypeOutcome PublishType(const Model::PublishTypeRequest& request) const;

        /**
         * A Callable wrapper for PublishType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishTypeOutcomeCallable PublishTypeCallable(const Model::PublishTypeRequest& request) const;

        /**
         * An Async wrapper for PublishType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishTypeAsync(const Model::PublishTypeRequest& request, const PublishTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reports progress of a resource handler to CloudFormation.</p> <p>Reserved for
         * use by the <a
         * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
         * CLI</a>. Don't use this API in your code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RecordHandlerProgress">AWS
         * API Reference</a></p>
         */
        virtual Model::RecordHandlerProgressOutcome RecordHandlerProgress(const Model::RecordHandlerProgressRequest& request) const;

        /**
         * A Callable wrapper for RecordHandlerProgress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RecordHandlerProgressOutcomeCallable RecordHandlerProgressCallable(const Model::RecordHandlerProgressRequest& request) const;

        /**
         * An Async wrapper for RecordHandlerProgress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RecordHandlerProgressAsync(const Model::RecordHandlerProgressRequest& request, const RecordHandlerProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers your account as a publisher of public extensions in the
         * CloudFormation registry. Public extensions are available for use by all
         * CloudFormation users. This publisher ID applies to your account in all Amazon
         * Web Services Regions.</p> <p>For information about requirements for registering
         * as a public extension publisher, see <a
         * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html#publish-extension-prereqs">Registering
         * your account to publish CloudFormation extensions</a> in the <i>CloudFormation
         * CLI User Guide</i>.</p> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RegisterPublisher">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterPublisherOutcome RegisterPublisher(const Model::RegisterPublisherRequest& request) const;

        /**
         * A Callable wrapper for RegisterPublisher that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterPublisherOutcomeCallable RegisterPublisherCallable(const Model::RegisterPublisherRequest& request) const;

        /**
         * An Async wrapper for RegisterPublisher that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterPublisherAsync(const Model::RegisterPublisherRequest& request, const RegisterPublisherResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an extension with the CloudFormation service. Registering an
         * extension makes it available for use in CloudFormation templates in your Amazon
         * Web Services account, and includes:</p> <ul> <li> <p>Validating the extension
         * schema.</p> </li> <li> <p>Determining which handlers, if any, have been
         * specified for the extension.</p> </li> <li> <p>Making the extension available
         * for use in your account.</p> </li> </ul> <p>For more information about how to
         * develop extensions and ready them for registration, see <a
         * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-types.html">Creating
         * Resource Providers</a> in the <i>CloudFormation CLI User Guide</i>.</p> <p>You
         * can have a maximum of 50 resource extension versions registered at a time. This
         * maximum is per account and per region. Use <a
         * href="AWSCloudFormation/latest/APIReference/API_DeregisterType.html">DeregisterType</a>
         * to deregister specific extension versions if necessary.</p> <p>Once you have
         * initiated a registration request using <code> <a>RegisterType</a> </code>, you
         * can use <code> <a>DescribeTypeRegistration</a> </code> to monitor the progress
         * of the registration request.</p> <p>Once you have registered a private extension
         * in your account and region, use <a
         * href="AWSCloudFormation/latest/APIReference/API_SetTypeConfiguration.html">SetTypeConfiguration</a>
         * to specify configuration properties for the extension. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
         * extensions at the account level</a> in the <i>CloudFormation User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RegisterType">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTypeOutcome RegisterType(const Model::RegisterTypeRequest& request) const;

        /**
         * A Callable wrapper for RegisterType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTypeOutcomeCallable RegisterTypeCallable(const Model::RegisterTypeRequest& request) const;

        /**
         * An Async wrapper for RegisterType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTypeAsync(const Model::RegisterTypeRequest& request, const RegisterTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When specifying <code>RollbackStack</code>, you preserve the state of
         * previously provisioned resources when an operation fails. You can check the
         * status of the stack through the <a>DescribeStacks</a> operation.</p> <p>Rolls
         * back the specified stack to the last known stable state from
         * <code>CREATE_FAILED</code> or <code>UPDATE_FAILED</code> stack statuses.</p>
         * <p>This operation will delete a stack if it doesn't contain a last known stable
         * state. A last known stable state includes any status in a
         * <code>*_COMPLETE</code>. This includes the following stack statuses.</p> <ul>
         * <li> <p> <code>CREATE_COMPLETE</code> </p> </li> <li> <p>
         * <code>UPDATE_COMPLETE</code> </p> </li> <li> <p>
         * <code>UPDATE_ROLLBACK_COMPLETE</code> </p> </li> <li> <p>
         * <code>IMPORT_COMPLETE</code> </p> </li> <li> <p>
         * <code>IMPORT_ROLLBACK_COMPLETE</code> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackStack">AWS
         * API Reference</a></p>
         */
        virtual Model::RollbackStackOutcome RollbackStack(const Model::RollbackStackRequest& request) const;

        /**
         * A Callable wrapper for RollbackStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RollbackStackOutcomeCallable RollbackStackCallable(const Model::RollbackStackRequest& request) const;

        /**
         * An Async wrapper for RollbackStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RollbackStackAsync(const Model::RollbackStackRequest& request, const RollbackStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets a stack policy for a specified stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SetStackPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::SetStackPolicyOutcome SetStackPolicy(const Model::SetStackPolicyRequest& request) const;

        /**
         * A Callable wrapper for SetStackPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetStackPolicyOutcomeCallable SetStackPolicyCallable(const Model::SetStackPolicyRequest& request) const;

        /**
         * An Async wrapper for SetStackPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetStackPolicyAsync(const Model::SetStackPolicyRequest& request, const SetStackPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies the configuration data for a registered CloudFormation extension,
         * in the given account and region.</p> <p>To view the current configuration data
         * for an extension, refer to the <code>ConfigurationSchema</code> element of <a
         * href="AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a>.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
         * extensions at the account level</a> in the <i>CloudFormation User Guide</i>.</p>
         *  <p>It's strongly recommended that you use dynamic references to
         * restrict sensitive configuration definitions, such as third-party credentials.
         * For more details on dynamic references, see <a
         * href="https://docs.aws.amazon.com/">Using dynamic references to specify template
         * values</a> in the <i>CloudFormation User Guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SetTypeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTypeConfigurationOutcome SetTypeConfiguration(const Model::SetTypeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for SetTypeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetTypeConfigurationOutcomeCallable SetTypeConfigurationCallable(const Model::SetTypeConfigurationRequest& request) const;

        /**
         * An Async wrapper for SetTypeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetTypeConfigurationAsync(const Model::SetTypeConfigurationRequest& request, const SetTypeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specify the default version of an extension. The default version of an
         * extension will be used in CloudFormation operations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SetTypeDefaultVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTypeDefaultVersionOutcome SetTypeDefaultVersion(const Model::SetTypeDefaultVersionRequest& request) const;

        /**
         * A Callable wrapper for SetTypeDefaultVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetTypeDefaultVersionOutcomeCallable SetTypeDefaultVersionCallable(const Model::SetTypeDefaultVersionRequest& request) const;

        /**
         * An Async wrapper for SetTypeDefaultVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetTypeDefaultVersionAsync(const Model::SetTypeDefaultVersionRequest& request, const SetTypeDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a signal to the specified resource with a success or failure status.
         * You can use the <code>SignalResource</code> operation in conjunction with a
         * creation policy or update policy. CloudFormation doesn't proceed with a stack
         * creation or update until resources receive the required number of signals or the
         * timeout period is exceeded. The <code>SignalResource</code> operation is useful
         * in cases where you want to send signals from anywhere other than an Amazon EC2
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SignalResource">AWS
         * API Reference</a></p>
         */
        virtual Model::SignalResourceOutcome SignalResource(const Model::SignalResourceRequest& request) const;

        /**
         * A Callable wrapper for SignalResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SignalResourceOutcomeCallable SignalResourceCallable(const Model::SignalResourceRequest& request) const;

        /**
         * An Async wrapper for SignalResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SignalResourceAsync(const Model::SignalResourceRequest& request, const SignalResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an in-progress operation on a stack set and its associated stack
         * instances. StackSets will cancel all the unstarted stack instance deployments
         * and wait for those are in-progress to complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StopStackSetOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::StopStackSetOperationOutcome StopStackSetOperation(const Model::StopStackSetOperationRequest& request) const;

        /**
         * A Callable wrapper for StopStackSetOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopStackSetOperationOutcomeCallable StopStackSetOperationCallable(const Model::StopStackSetOperationRequest& request) const;

        /**
         * An Async wrapper for StopStackSetOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopStackSetOperationAsync(const Model::StopStackSetOperationRequest& request, const StopStackSetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests a registered extension to make sure it meets all necessary requirements
         * for being published in the CloudFormation registry.</p> <ul> <li> <p>For
         * resource types, this includes passing all contracts tests defined for the
         * type.</p> </li> <li> <p>For modules, this includes determining if the module's
         * model meets all necessary requirements.</p> </li> </ul> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html#publish-extension-testing">Testing
         * your public extension prior to publishing</a> in the <i>CloudFormation CLI User
         * Guide</i>.</p> <p>If you don't specify a version, CloudFormation uses the
         * default version of the extension in your account and region for testing.</p>
         * <p>To perform testing, CloudFormation assumes the execution role specified when
         * the type was registered. For more information, see <a
         * href="AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>.</p>
         * <p>Once you've initiated testing on an extension using <code>TestType</code>,
         * you can pass the returned <code>TypeVersionArn</code> into <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a>
         * to monitor the current test status and test status description for the
         * extension.</p> <p>An extension must have a test status of <code>PASSED</code>
         * before it can be published. For more information, see <a
         * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-publish.html">Publishing
         * extensions to make them available for public use</a> in the <i>CloudFormation
         * CLI User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TestType">AWS
         * API Reference</a></p>
         */
        virtual Model::TestTypeOutcome TestType(const Model::TestTypeRequest& request) const;

        /**
         * A Callable wrapper for TestType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestTypeOutcomeCallable TestTypeCallable(const Model::TestTypeRequest& request) const;

        /**
         * An Async wrapper for TestType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestTypeAsync(const Model::TestTypeRequest& request, const TestTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a stack as specified in the template. After the call completes
         * successfully, the stack update starts. You can check the status of the stack
         * through the <a>DescribeStacks</a> action.</p> <p>To get a copy of the template
         * for an existing stack, you can use the <a>GetTemplate</a> action.</p> <p>For
         * more information about creating an update template, updating a stack, and
         * monitoring the progress of the update, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks.html">Updating
         * a Stack</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStackOutcome UpdateStack(const Model::UpdateStackRequest& request) const;

        /**
         * A Callable wrapper for UpdateStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStackOutcomeCallable UpdateStackCallable(const Model::UpdateStackRequest& request) const;

        /**
         * An Async wrapper for UpdateStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStackAsync(const Model::UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the parameter values for stack instances for the specified accounts,
         * within the specified Amazon Web Services Regions. A stack instance refers to a
         * stack in a specific account and Region.</p> <p>You can only update stack
         * instances in Amazon Web Services Regions and accounts where they already exist;
         * to create additional stack instances, use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateStackInstances.html">CreateStackInstances</a>.</p>
         * <p>During stack set updates, any parameters overridden for a stack instance
         * aren't updated, but retain their overridden value.</p> <p>You can only update
         * the parameter <i>values</i> that are specified in the stack set; to add or
         * delete a parameter itself, use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
         * to update the stack set template. If you add a parameter to a template, before
         * you can override the parameter value specified in the stack set you must first
         * use <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a>
         * to update all stack instances with the updated template and parameter value
         * specified in the stack set. Once a stack instance has been updated with the new
         * parameter, you can then override the parameter value using
         * <code>UpdateStackInstances</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateStackInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStackInstancesOutcome UpdateStackInstances(const Model::UpdateStackInstancesRequest& request) const;

        /**
         * A Callable wrapper for UpdateStackInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStackInstancesOutcomeCallable UpdateStackInstancesCallable(const Model::UpdateStackInstancesRequest& request) const;

        /**
         * An Async wrapper for UpdateStackInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStackInstancesAsync(const Model::UpdateStackInstancesRequest& request, const UpdateStackInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the stack set, and associated stack instances in the specified
         * accounts and Amazon Web Services Regions.</p> <p>Even if the stack set operation
         * created by updating the stack set fails (completely or partially, below or above
         * a specified failure tolerance), the stack set is updated with your changes.
         * Subsequent <a>CreateStackInstances</a> calls on the specified stack set use the
         * updated stack set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateStackSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStackSetOutcome UpdateStackSet(const Model::UpdateStackSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateStackSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStackSetOutcomeCallable UpdateStackSetCallable(const Model::UpdateStackSetRequest& request) const;

        /**
         * An Async wrapper for UpdateStackSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStackSetAsync(const Model::UpdateStackSetRequest& request, const UpdateStackSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates termination protection for the specified stack. If a user attempts to
         * delete a stack with termination protection enabled, the operation fails and the
         * stack remains unchanged. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protecting
         * a Stack From Being Deleted</a> in the <i>CloudFormation User Guide</i>.</p>
         * <p>For <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested
         * stacks</a>, termination protection is set on the root stack and can't be changed
         * directly on the nested stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/UpdateTerminationProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTerminationProtectionOutcome UpdateTerminationProtection(const Model::UpdateTerminationProtectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateTerminationProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTerminationProtectionOutcomeCallable UpdateTerminationProtectionCallable(const Model::UpdateTerminationProtectionRequest& request) const;

        /**
         * An Async wrapper for UpdateTerminationProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTerminationProtectionAsync(const Model::UpdateTerminationProtectionRequest& request, const UpdateTerminationProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Validates a specified template. CloudFormation first checks if the template
         * is valid JSON. If it isn't, CloudFormation checks if the template is valid YAML.
         * If both these checks fail, CloudFormation returns a template validation
         * error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ValidateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateTemplateOutcome ValidateTemplate(const Model::ValidateTemplateRequest& request) const;

        /**
         * A Callable wrapper for ValidateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidateTemplateOutcomeCallable ValidateTemplateCallable(const Model::ValidateTemplateRequest& request) const;

        /**
         * An Async wrapper for ValidateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateTemplateAsync(const Model::ValidateTemplateRequest& request, const ValidateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudFormation
} // namespace Aws

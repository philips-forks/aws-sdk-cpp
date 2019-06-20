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

#include <aws/core/client/CoreErrors.h>
#include <aws/acm-pca/ACMPCA_EXPORTS.h>

namespace Aws
{
namespace ACMPCA
{
enum class ACMPCAErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,
  
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  CERTIFICATE_MISMATCH= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CONCURRENT_MODIFICATION,
  INVALID_ARGS,
  INVALID_ARN,
  INVALID_NEXT_TOKEN,
  INVALID_POLICY,
  INVALID_REQUEST,
  INVALID_STATE,
  INVALID_TAG,
  LIMIT_EXCEEDED,
  MALFORMED_CERTIFICATE,
  MALFORMED_C_S_R,
  PERMISSION_ALREADY_EXISTS,
  REQUEST_ALREADY_PROCESSED,
  REQUEST_FAILED,
  REQUEST_IN_PROGRESS,
  TOO_MANY_TAGS
};
namespace ACMPCAErrorMapper
{
  AWS_ACMPCA_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace ACMPCA
} // namespace Aws

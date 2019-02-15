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

#include <aws/mediaconvert/model/M2tsForceTsVideoEbpOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace M2tsForceTsVideoEbpOrderMapper
      {

        static const int FORCE_HASH = HashingUtils::HashString("FORCE");
        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");


        M2tsForceTsVideoEbpOrder GetM2tsForceTsVideoEbpOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FORCE_HASH)
          {
            return M2tsForceTsVideoEbpOrder::FORCE;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return M2tsForceTsVideoEbpOrder::DEFAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsForceTsVideoEbpOrder>(hashCode);
          }

          return M2tsForceTsVideoEbpOrder::NOT_SET;
        }

        Aws::String GetNameForM2tsForceTsVideoEbpOrder(M2tsForceTsVideoEbpOrder enumValue)
        {
          switch(enumValue)
          {
          case M2tsForceTsVideoEbpOrder::FORCE:
            return "FORCE";
          case M2tsForceTsVideoEbpOrder::DEFAULT:
            return "DEFAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsForceTsVideoEbpOrderMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
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
#include <aws/macie2/model/SessionContextAttributes.h>
#include <aws/macie2/model/SessionIssuer.h>
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
   * <p>Provides information about a session that was created for an entity who
   * performed an action by using temporary security credentials.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SessionContext">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API SessionContext
  {
  public:
    SessionContext();
    SessionContext(Aws::Utils::Json::JsonView jsonValue);
    SessionContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time when the credentials were issued, and whether the
     * credentials were authenticated with a multi-factor authentication (MFA)
     * device.</p>
     */
    inline const SessionContextAttributes& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The date and time when the credentials were issued, and whether the
     * credentials were authenticated with a multi-factor authentication (MFA)
     * device.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The date and time when the credentials were issued, and whether the
     * credentials were authenticated with a multi-factor authentication (MFA)
     * device.</p>
     */
    inline void SetAttributes(const SessionContextAttributes& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The date and time when the credentials were issued, and whether the
     * credentials were authenticated with a multi-factor authentication (MFA)
     * device.</p>
     */
    inline void SetAttributes(SessionContextAttributes&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The date and time when the credentials were issued, and whether the
     * credentials were authenticated with a multi-factor authentication (MFA)
     * device.</p>
     */
    inline SessionContext& WithAttributes(const SessionContextAttributes& value) { SetAttributes(value); return *this;}

    /**
     * <p>The date and time when the credentials were issued, and whether the
     * credentials were authenticated with a multi-factor authentication (MFA)
     * device.</p>
     */
    inline SessionContext& WithAttributes(SessionContextAttributes&& value) { SetAttributes(std::move(value)); return *this;}


    /**
     * <p>The source and type of credentials that the entity obtained.</p>
     */
    inline const SessionIssuer& GetSessionIssuer() const{ return m_sessionIssuer; }

    /**
     * <p>The source and type of credentials that the entity obtained.</p>
     */
    inline bool SessionIssuerHasBeenSet() const { return m_sessionIssuerHasBeenSet; }

    /**
     * <p>The source and type of credentials that the entity obtained.</p>
     */
    inline void SetSessionIssuer(const SessionIssuer& value) { m_sessionIssuerHasBeenSet = true; m_sessionIssuer = value; }

    /**
     * <p>The source and type of credentials that the entity obtained.</p>
     */
    inline void SetSessionIssuer(SessionIssuer&& value) { m_sessionIssuerHasBeenSet = true; m_sessionIssuer = std::move(value); }

    /**
     * <p>The source and type of credentials that the entity obtained.</p>
     */
    inline SessionContext& WithSessionIssuer(const SessionIssuer& value) { SetSessionIssuer(value); return *this;}

    /**
     * <p>The source and type of credentials that the entity obtained.</p>
     */
    inline SessionContext& WithSessionIssuer(SessionIssuer&& value) { SetSessionIssuer(std::move(value)); return *this;}

  private:

    SessionContextAttributes m_attributes;
    bool m_attributesHasBeenSet;

    SessionIssuer m_sessionIssuer;
    bool m_sessionIssuerHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws

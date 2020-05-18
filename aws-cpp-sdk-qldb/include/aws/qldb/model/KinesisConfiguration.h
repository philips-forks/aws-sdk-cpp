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
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QLDB
{
namespace Model
{

  /**
   * <p>The configuration settings of the Amazon Kinesis Data Streams destination for
   * your Amazon QLDB journal stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/KinesisConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_QLDB_API KinesisConfiguration
  {
  public:
    KinesisConfiguration();
    KinesisConfiguration(Aws::Utils::Json::JsonView jsonValue);
    KinesisConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream resource.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream resource.</p>
     */
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream resource.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream resource.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream resource.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream resource.</p>
     */
    inline KinesisConfiguration& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream resource.</p>
     */
    inline KinesisConfiguration& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream resource.</p>
     */
    inline KinesisConfiguration& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>Enables QLDB to publish multiple stream records in a single Kinesis Data
     * Streams record. To learn more, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/kinesis-kpl-concepts.html">KPL
     * Key Concepts</a> in the <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
     */
    inline bool GetAggregationEnabled() const{ return m_aggregationEnabled; }

    /**
     * <p>Enables QLDB to publish multiple stream records in a single Kinesis Data
     * Streams record. To learn more, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/kinesis-kpl-concepts.html">KPL
     * Key Concepts</a> in the <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
     */
    inline bool AggregationEnabledHasBeenSet() const { return m_aggregationEnabledHasBeenSet; }

    /**
     * <p>Enables QLDB to publish multiple stream records in a single Kinesis Data
     * Streams record. To learn more, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/kinesis-kpl-concepts.html">KPL
     * Key Concepts</a> in the <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
     */
    inline void SetAggregationEnabled(bool value) { m_aggregationEnabledHasBeenSet = true; m_aggregationEnabled = value; }

    /**
     * <p>Enables QLDB to publish multiple stream records in a single Kinesis Data
     * Streams record. To learn more, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/kinesis-kpl-concepts.html">KPL
     * Key Concepts</a> in the <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
     */
    inline KinesisConfiguration& WithAggregationEnabled(bool value) { SetAggregationEnabled(value); return *this;}

  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet;

    bool m_aggregationEnabled;
    bool m_aggregationEnabledHasBeenSet;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws

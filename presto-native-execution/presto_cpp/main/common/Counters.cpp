/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "presto_cpp/main/common/Counters.h"
#include "velox/common/base/StatsReporter.h"

namespace facebook::presto {

void registerPrestoCppCounters() {
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterDriverCPUExecutorQueueSize, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterDriverCPUExecutorLatencyMs, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterHTTPExecutorLatencyMs, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumHTTPRequest, facebook::velox::StatType::COUNT);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumHTTPRequestError, facebook::velox::StatType::COUNT);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterHTTPRequestLatencyMs, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumQueryContexts, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(kCounterNumTasks, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumTasksRunning, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumTasksFinished, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumTasksCancelled, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumTasksAborted, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumTasksFailed, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumZombieTasks, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumZombiePrestoTasks, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumRunningDrivers, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumBlockedDrivers, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMappedMemoryBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterAllocatedMemoryBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterTotalPartitionedOutputBuffer, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterPartitionedOutputBufferGetDataLatencyMs,
      facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterCumulativeUserCpuTimeMicros, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterCumulativeSystemCpuTimeMicros, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumCumulativeSoftPageFaults, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterNumCumulativeHardPageFaults, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMappedMemoryRawAllocBytesSmall, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMappedMemoryRawAllocBytesSizeClass,
      facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMappedMemoryRawAllocBytesLarge, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterExchangeSourceQueuedBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterExchangeSourcePeakQueuedBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumEntries, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumEmptyEntries, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumSharedEntries, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumExclusiveEntries, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumPrefetchedEntries, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheTotalTinyBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheTotalLargeBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheTotalTinyPaddingBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheTotalLargePaddingBytes,
      facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheTotalPrefetchBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheTotalTinyPaddingBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheSumEvictScore, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumCumulativeHit, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumHit, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumCumulativeNew, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumNew, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumCumulativeEvict, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumEvict, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumCumulativeEvictChecks,
      facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumEvictChecks, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumCumulativeWaitExclusive,
      facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumWaitExclusive, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumCumulativeAllocClocks,
      facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterMemoryCacheNumAllocClocks, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterSsdCacheCumulativeReadEntries, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterSsdCacheReadEntries, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterSsdCacheCumulativeReadBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterSsdCacheReadBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterSsdCacheCumulativeWrittenEntries, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterSsdCacheWrittenEntries, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterSsdCacheCumulativeWrittenBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterSsdCacheWrittenBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterSsdCacheCumulativeCachedEntries, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterSsdCacheCachedEntries, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterSsdCacheCumulativeCachedBytes, facebook::velox::StatType::AVG);
  REPORT_ADD_STAT_EXPORT_TYPE(
      kCounterSsdCacheCachedBytes, facebook::velox::StatType::AVG);
  // NOTE: Metrics type exporting for file handle cache counters are in
  // PeriodicTaskManager because they have dynamic names. The following counters
  // have their type exported there:
  // [
  //  kCounterHiveFileHandleCacheNumElementsFormat,
  //  kCounterHiveFileHandleCachePinnedSizeFormat,
  //  kCounterHiveFileHandleCacheCurSizeFormat,
  //  kCounterHiveFileHandleCacheNumAccumulativeHitsFormat,
  //  kCounterHiveFileHandleCacheNumAccumulativeLookupsFormat
  // ]
}

} // namespace facebook::presto

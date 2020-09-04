/**
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifndef CHIP_CLUSTER_ONOFF_H_
#define CHIP_CLUSTER_ONOFF_H_

#include "af-types.h"
#include <clusters/clusters.h>

/* This is duplicated right now, currently all defined in main/gen/cluster-id.h */
static constexpr ClusterId ChipOnOffClusterId = 0x0006;

#ifdef __cplusplus
extern "C" {
#endif

// Cluster: On/off, server
EmberAfStatus OnOffClusterServerCommandParse(EmberAfClusterCommand * cmd);

#ifdef __cplusplus
}
#endif

Cluster ClusterServerOnOff()
{
    return Cluster(ChipOnOffClusterId, OnOffClusterServerCommandParse);
}

Cluster ClusterClientOnOff()
{
    return Cluster(ChipOnOffClusterId);
}

#endif // ! CHIP_CLUSTER_ONOFF_H_

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

#include "af-types.h"
#include <clusters/on-off-server/on-off.h>
#include "util/af.h"
#include "chip-command-handler.h"
#include <stdint.h>

using EndpointId = uint16_t;

struct ClusterDbEntry {
    EndpointId mEndpointId;
    Cluster    mCluster;
};

/* Assume this is auto-generated */
static const ClusterDbEntry gClusterServerDb[] = {
    { 1, ClusterServerOnOff()},
};

/* Assume this is auto-generated */
static const ClusterDbEntry gClusterClientDb[] = {
    { 1, ClusterClientOnOff()},
};

EmberAfStatus ChipClusterCmdParse(EmberAfClusterCommand * cmd)
{
    if (cmd->direction == (uint8_t) ZCL_DIRECTION_SERVER_TO_CLIENT) {
        for (const auto& entry : gClusterClientDb ) {
            /* Handle client command */
        }
    } else if (cmd->direction == (uint8_t) ZCL_DIRECTION_CLIENT_TO_SERVER) {
        for (const auto& entry : gClusterServerDb ) {
            /* - We should also be checking for endpoint-id match here, but the current ZCL code doesn't.
             * - Also it will make syncing between the the endpoint-config.h db and this db stricter, with the
             *   current approach, the db with endpoint-config is really the master. For now, this DB only provides a
             *   cluster-id to function mapping.
             */
            if ((cmd->apsFrame->clusterId == entry.mCluster.mId)) {
                if (entry.mCluster.mCmdParser) {
                    return entry.mCluster.mCmdParser(cmd);
                } else {
                    return EMBER_ZCL_STATUS_UNSUP_CLUSTER_COMMAND;
                }
            }
        }
    }
    return EMBER_ZCL_STATUS_UNSUPPORTED_CLUSTER;
}

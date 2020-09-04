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

#ifndef CHIP_CLUSTERS_H_
#define CHIP_CLUSTERS_H_

#include <stdint.h>

using ClusterId = uint16_t;
using ClusterCmdParser = EmberAfStatus (*)(EmberAfClusterCommand * cmd);

struct Cluster {
    ClusterId        mId;
    ClusterCmdParser mCmdParser;
    Cluster(ClusterId id, ClusterCmdParser parser = nullptr) : mId(id), mCmdParser(parser) {}
};

#endif // ! CHIP_CLUSTERS_H_

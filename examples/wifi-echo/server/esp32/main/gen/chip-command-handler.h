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

#ifndef CHIP_COMMAND_HANDLER_H_
#define CHIP_COMMAND_HANDLER_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Ideally this should move in the clusters/ directory, but this has some deps in main/gen */
EmberAfStatus ChipClusterCmdParse(EmberAfClusterCommand * cmd);

#ifdef __cplusplus
}
#endif

#endif // ! CHIP_COMMAND_HANDLER_H_

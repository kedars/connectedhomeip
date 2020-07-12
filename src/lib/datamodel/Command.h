/*
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

/**
 *    @file
 *      This file contains class for Commands
 *
 */

#ifndef CHIPCOMMAND_H_
#define CHIPCOMMAND_H_

namespace chip {
namespace DataModel {

class Command
{
public:
    uint16_t mId;
    uint8_t  mDirection;
};

} // namespace DataModel
} // namespace chip

#endif /* CHIPCOMMAND_H_ */

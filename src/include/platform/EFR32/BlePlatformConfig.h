/*
 *
 *    <COPYRIGHT>
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
 *          Platform-specific configuration overrides for the OpenChip BLE
 *          Layer on EFR32 platforms using the Silicon Labs SDK.
 *
 */

#ifndef BLE_PLATFORM_CONFIG_H
#define BLE_PLATFORM_CONFIG_H

#include "bg_errorcodes.h"

// ==================== Platform Adaptations ====================

#define BLE_CONNECTION_OBJECT uint8_t
#define BLE_CONNECTION_UNINITIALIZED ((uint8_t)-1)
#define BLE_MAX_RECEIVE_WINDOW_SIZE 5

#define BLE_CONFIG_ERROR_TYPE int32_t
#define BLE_CONFIG_NO_ERROR  0
#define BLE_CONFIG_ERROR_MIN 6000000
#define BLE_CONFIG_ERROR_MAX 6000999
#define _BLE_CONFIG_ERROR(e) (BLE_CONFIG_ERROR_MIN + (e))

// ========== Platform-specific Configuration Overrides =========

/* none so far */

#endif // BLE_PLATFORM_CONFIG_H

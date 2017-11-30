/*
 * Copyright (c) 2017, Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 *
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
#ifndef __MLE_SERVICE_STUB_H__
#define __MLE_SERVICE_STUB_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "inttypes.h"

typedef struct {
    uint16_t msg_id; /*!< Buffer Id what could be used for update or free message */
} mle_service_msg_buf_def;


extern mle_service_msg_buf_def mle_service_msg_buf;

#ifdef __cplusplus
}
#endif

#endif // __MLE_SERVICE_STUB_H__
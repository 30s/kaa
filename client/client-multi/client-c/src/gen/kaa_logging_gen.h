/*
 * Copyright 2014 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef KAA_LOG_GEN_H_
#define KAA_LOG_GEN_H_

#ifdef __cplusplus
extern "C" {
#define CLOSE_EXTERN }
#else
#define CLOSE_EXTERN
#endif

#include "kaa_common_schema.h"
#include "kaa_list.h"

typedef struct kaa_test_log_record_t_ {
    char* data; 

    serialize_fn serialize;
    get_size_fn  get_size;
    destroy_fn   destroy;
} kaa_test_log_record_t;

kaa_test_log_record_t* kaa_create_test_log_record();
kaa_test_log_record_t* kaa_deserialize_test_log_record(avro_reader_t reader);


CLOSE_EXTERN
#endif

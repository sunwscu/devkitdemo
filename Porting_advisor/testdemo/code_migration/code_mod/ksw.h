/*
 * Copyright 2020 Huawei Technologies Co., Ltd
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
#ifndef __DEMO_H_
#define __DEMO_H_
#if defined __x86_64__
    #include <emmintrin.h>
#elif defined __aarch64__
    #include "avx2neon.h"
#endif


__m128i add_epi(unsigned int data1, unsigned int data2);
__m128i max_epi(unsigned int data1, unsigned int data2);

#endif
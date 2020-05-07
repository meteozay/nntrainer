/**
 * Copyright (C) 2020 Samsung Electronics Co., Ltd. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *   http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @file	parse_util.h
 * @date	07 May 2020
 * @brief	This is collection of parse functions.
 * @see		https://github.com/nnstreamer/nntrainer
 * @author	Jijoong Moon <jijoong.moon@samsung.com>
 * @bug		No known bugs except for NYI items
 *
 */

#ifndef __PARSE_UTIL_H__
#define __PARSE_UTIL_H__
#ifdef __cplusplus

#include <iostream>
#include <string>

namespace nntrainer {

/**
 * @brief     Enumeration for input configuration file parsing
 *            0. OPT     ( Optimizer Token )
 *            1. COST    ( Cost Function Token )
 *            2. NET     ( Network Token )
 *            3. ACTI    ( Activation Token )
 *            4. LAYER   ( Layer Token )
 *            5. WEIGHTINI  ( Weight Initialization Token )
 *            7. WEIGHT_DECAY  ( Weight Decay Token )
 *            8. UNKNOWN
 */
typedef enum {
  TOKEN_OPT,
  TOKEN_COST,
  TOKEN_NET,
  TOKEN_ACTI,
  TOKEN_LAYER,
  TOKEN_WEIGHTINI,
  TOKEN_WEIGHT_DECAY,
  TOKEN_UNKNOWN
} InputType;

/**
 * @brief     compare character to remove case sensitivity
 * @param[in] c1 characer #1
 * @param[in] c2 characer #2
 * @retval    boolean true if they are same
 */
bool compareChar(char &c1, char &c2);

/**
 * @brief     compare string with case insensitive
 * @param[in] str1 string #1
 * @param[in] str2 string #2
 * @retval    boolean true if they are same
 */
bool caseInSensitiveCompare(std::string &str1, std::string &str2);

/**
 * @brief     Parsing Configuration Token
 * @param[in] ll string to be parsed
 * @param[in] t  Token type
 * @retval    int enumerated type
 */
unsigned int parseType(std::string ll, InputType t);

} /* namespace nntrainer */

#endif /* __cplusplus */
#endif /* __PARSE_UTIL_H__ */
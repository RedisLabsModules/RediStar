/*
 * keys_reader.h
 *
 *  Created on: 9 Jan 2019
 *      Author: root
 */

#ifndef SRC_KEYS_READER_H_
#define SRC_KEYS_READER_H_

#include "redismodule.h"
#include <stdbool.h>

bool KeysReader_Initialize(RedisModuleCtx* ctx);


#endif /* SRC_KEYS_READER_H_ */

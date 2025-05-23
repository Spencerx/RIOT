/*
 * Copyright (C) 2015 Kaspar Schleiser <kaspar@schleiser.de>
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

#pragma once

/**
 * @addtogroup  posix
 * @{
 */

/**
 * @file
 * @brief   libc header for scatter/gather I/O
 *
 * @author  Kaspar Schleiser <kaspar@schleiser.de>
 */

#include <stdlib.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Structure for scatter/gather I/O.
 */
struct iovec {
    void *iov_base;     /**< Pointer to data.   */
    size_t iov_len;     /**< Length of data.    */
};

#ifdef __cplusplus
}
#endif
/** @} */

/*
 * Copyright (C) 2016 Kees Bakker, SODAQ
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

#pragma once

/**
 * @ingroup     boards_common_sodaq
 * @{
 *
 * @file
 * @brief       Default RTC configuration for SODAQ boards
 *
 * @author      Kees Bakker <kees@sodaq.com>
 */

#include <stdint.h>

#include "cpu.h"
#include "periph_cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name RTC configuration
 * @{
 */
#define RTC_DEV             RTC->MODE2
/** @} */

#ifdef __cplusplus
}
#endif

/** @} */

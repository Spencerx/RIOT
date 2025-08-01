/*
 * SPDX-FileCopyrightText: 2020 Freie Universität Berlin
 * SPDX-FileCopyrightText: 2023 HAW Hamburg
 * SPDX-License-Identifier: LGPL-2.1-only
 */

#pragma once

/**
 * @ingroup     boards_adafruit-feather-nrf52840-sense
 * @{
 *
 * @file
 * @brief       Configuration of SAUL mapped GPIO pins
 *
 * @author      Martine S. Lenders <m.lenders@fu-berlin.de>
 * @author      Michel Rottleuthner <michel.rottleuthner@haw-hamburg.de>
 */

#include "board.h"
#include "saul/periph.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief    LED configuration
 */
static const  saul_gpio_params_t saul_gpio_params[] =
{
    {
        .name  = "LED Red (D13)",
        .pin   = LED0_PIN,
        .mode  = GPIO_OUT,
        .flags = (SAUL_GPIO_INIT_CLEAR),
    },
    {
        .name  = "LED Blue (Conn)",
        .pin   = LED1_PIN,
        .mode  = GPIO_OUT,
        .flags = (SAUL_GPIO_INIT_CLEAR),
    },
    {
        .name  = "UserSw",
        .pin   = BTN0_PIN,
        .mode  = BTN0_MODE,
        .flags = SAUL_GPIO_INVERTED,
    },
};

#ifdef __cplusplus
}
#endif

/** @} */

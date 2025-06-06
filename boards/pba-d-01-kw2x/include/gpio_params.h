/*
 * Copyright (C) 2017   HAW Hamburg
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

#pragma once

/**
 * @ingroup boards_pba-d-01-kw2x
 * @{
 *
 * @file
 * @brief   Board specific configuration of direct mapped GPIOs
 *
 * @author  Sebastian Meiling <s@mlng.net>
 */

#include "board.h"
#include "saul/periph.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   GPIO pin configuration
 */
static const saul_gpio_params_t saul_gpio_params[] =
{
    {
        .name   = "LED(red)",
        .pin    = LED0_PIN,
        .mode   = GPIO_OUT,
        .flags  = (SAUL_GPIO_INVERTED | SAUL_GPIO_INIT_CLEAR)
    },
    {
        .name   = "LED(green)",
        .pin    = LED1_PIN,
        .mode   = GPIO_OUT,
        .flags  = (SAUL_GPIO_INVERTED | SAUL_GPIO_INIT_CLEAR)
    },
    {
        .name   = "LED(blue)",
        .pin    = LED2_PIN,
        .mode   = GPIO_OUT,
        .flags  = (SAUL_GPIO_INVERTED | SAUL_GPIO_INIT_CLEAR)
    },
    {
        .name   = "Button(SW0)",
        .pin    = BTN0_PIN,
        .mode   = BTN0_MODE,
        .flags  = SAUL_GPIO_INVERTED
    },
    {
        .name   = "Button(CS0)",
        .pin    = BTN1_PIN,
        .mode   = BTN1_MODE,
        .flags  = 0x0
    },
};

#ifdef __cplusplus
}
#endif

/** @} */

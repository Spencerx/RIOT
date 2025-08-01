/*
 * SPDX-FileCopyrightText: 2018 Gunar Schorcht
 * SPDX-License-Identifier: LGPL-2.1-only
 */

#pragma once

/**
 * @ingroup     boards_esp32_mh-et-live-minikit
 * @brief       Board specific definitions for MH-ET LIVE MiniKit for ESP32
 * @{
 *
 * The MH-ET LIVE MiniKit for ESP32 uses the ESP32-WROOM-32 module. It is
 * a very interesting development kit as it is available in the stackable
 * Wemos D1 Mini format. Thus, all shields for Wemos D1 mini (ESP8266
 * platform) can also be used with ESP32. All GPIOs are broken out so that
 * it can be configured very flexibly.
 *
 * For detailed information about the configuration of ESP32 boards, see
 * section \ref esp32_peripherals "Common Peripherals".
 *
 * @note
 * Most definitions can be overridden by an \ref esp32_application_specific_configurations
 * "application-specific board configuration".
 *
 * @file
 * @author      Gunar Schorcht <gunar@schorcht.net>
 */

#include <stdint.h>

/**
 * @name    LED (on-board) configuration
 *
 * @{
 */
#define LED0_PIN        GPIO2
#define LED0_ACTIVE     1       /**< LED is high active */

#define LED_BLUE_PIN    GPIO2
/** @} */

/* include common board definitions as last step */
#include "board_common.h"

/* include definitions for optional hardware modules */
#include "board_modules.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* end extern "C" */
#endif

/** @} */

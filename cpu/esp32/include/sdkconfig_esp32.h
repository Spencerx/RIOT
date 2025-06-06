/*
 * Copyright (C) 2022 Gunar Schorcht
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

#pragma once

/**
 * @ingroup     cpu_esp32
 * @{
 *
 * @file
 * @brief       SDK configuration used by the ESP-IDF for ESP32 SoC variant (family)
 *
 * The SDK configuration can be partially overridden by application-specific
 * board configuration.
 *
 * @author      Gunar Schorcht <gunar@schorcht.net>
 */

#ifndef DOXYGEN

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name ESP32 specific clock configuration
 * @{
 */

/* Mapping of Kconfig defines to the respective enumeration values */
#if CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ_2
#  define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ       2
#elif CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ_5
#  define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ       5
#elif CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ_10
#  define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ       10
#elif CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ_20
#  define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ       20
#elif CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ_40
#  define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ       40
#elif CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ_80
#  define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ       80
#elif CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ_160
#  define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ       160
#elif CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ_240
#  define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ       240
#endif

/**
 * @brief Defines the CPU frequency [values = 2, 5, 10, 20, 40, 80, 160, 240]
 */
#ifndef CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ
#  define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ       80
#endif

/** @} */

/**
 * ESP32 specific RTC clock configuration
 */
#define CONFIG_RTC_CLK_CAL_CYCLES                 1024

#ifdef MODULE_ESP_RTC_TIMER_32K
#  define CONFIG_RTC_EXT_CRYST_ADDIT_CURRENT_NONE 1
#  define CONFIG_RTC_XTAL_CAL_RETRY               1
#  define CONFIG_ESP_SYSTEM_RTC_EXT_XTAL_BOOTSTRAP_CYCLES 5
#endif

/**
 * ESP32 specific EFUSE configuration
 */
#define CONFIG_EFUSE_MAX_BLK_LEN                192
#define CONFIG_EFUSE_CODE_SCHEME_COMPAT_3_4     1
#define CONFIG_ESP_EFUSE_BLOCK_REV_MIN_FULL     0
#define CONFIG_ESP_EFUSE_BLOCK_REV_MAX_FULL     99

/**
 * ESP32 specific MAC configuration
 */
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_WIFI_STA   1
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_WIFI_AP    1
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_BT         1
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_ETH        1
#define CONFIG_ESP32_UNIVERSAL_MAC_ADDRESSES    4

/**
 * ESP32 specific system configuration (DO NOT CHANGE)
 */
#define CONFIG_ESP32_REV_MIN                    0
#define CONFIG_ESP32_TRACEMEM_RESERVE_DRAM      0x0

#define CONFIG_ESP_BROWNOUT_DET                 1
#define CONFIG_ESP_BROWNOUT_DET_LVL             0
#define CONFIG_ESP_CONSOLE_MULTIPLE_UART        1
#define CONFIG_ESP_DEBUG_OCDAWARE               1
#define CONFIG_ESP_SLEEP_WAIT_FLASH_READY_EXTRA_DELAY    2000

#define CONFIG_ULP_COPROC_RESERVE_MEM           0

/**
 * ESP32 specific sleep configuration (DO NOT CHANGE)
 */
#define CONFIG_ESP_SLEEP_RTC_BUS_ISO_WORKAROUND         1
#define CONFIG_ESP_SLEEP_WAIT_FLASH_READY_EXTRA_DELAY   2000

/**
 * ESP32 specific ADC calibration
 */
#define CONFIG_ADC_CALI_EFUSE_TP_ENABLE         1
#define CONFIG_ADC_CALI_EFUSE_VREF_ENABLE       1
#define CONFIG_ADC_CALI_LUT_ENABLE              1

/**
 * ESP32 specific PHY configuration
 */
#define CONFIG_ESP_PHY_REDUCE_TX_POWER          1

/**
 * ESP32 specific XTAL configuration
 *
 * Main clock crystal frequency (MHz). Zero means to auto-configure.
 * This is configured at the board level, defaulting to 40.
 */
#ifndef CONFIG_XTAL_FREQ
#  define CONFIG_XTAL_FREQ  0
#endif

/**
 * ESP32 specific SPI RAM configuration
 */
#ifdef  MODULE_ESP_SPI_RAM
#  define CONFIG_D0WD_PSRAM_CLK_IO                      17
#  define CONFIG_D0WD_PSRAM_CS_IO                       16
#  define CONFIG_D2WD_PSRAM_CLK_IO                      9
#  define CONFIG_D2WD_PSRAM_CS_IO                       10
#  define CONFIG_PICO_PSRAM_CS_IO                       10
#  define CONFIG_SPIRAM_BANKSWITCH_ENABLE               1
#  define CONFIG_SPIRAM_BANKSWITCH_RESERVE              8
#  define CONFIG_SPIRAM_CACHE_WORKAROUND                1
#  define CONFIG_SPIRAM_CACHE_WORKAROUND_STRATEGY_MEMW  1
#  define CONFIG_SPIRAM_MODE_QUAD                       1
#  define CONFIG_SPIRAM_SPIWP_SD3_PIN                   7
#endif

/**
 * ESP32 specific ETH configuration
 */
#ifdef MODULE_ESP_ETH
#  define CONFIG_ETH_USE_ESP32_EMAC                     1
#  define CONFIG_ETH_PHY_INTERFACE_RMII                 1
#  define CONFIG_ETH_RMII_CLK_INPUT                     1
#  define CONFIG_ETH_RMII_CLK_IN_GPIO                   0
#  define CONFIG_ETH_DMA_BUFFER_SIZE                    512
#  define CONFIG_ETH_DMA_RX_BUFFER_NUM                  10
#  define CONFIG_ETH_DMA_TX_BUFFER_NUM                  10
#endif

/**
 * ESP32 specific BLE driver configuration (DO NOT CHANGE)
 */
#ifdef MODULE_ESP_BLE
#  define CONFIG_BT_ALARM_MAX_NUM                        50
#  define CONFIG_BTDM_BLE_ADV_REPORT_DISCARD_THRSHOLD    20
#  define CONFIG_BTDM_BLE_ADV_REPORT_FLOW_CTRL_NUM       100
#  define CONFIG_BTDM_BLE_ADV_REPORT_FLOW_CTRL_SUPP      1
#  define CONFIG_BTDM_BLE_CHAN_ASS_EN                    1
#  define CONFIG_BTDM_BLE_DEFAULT_SCA_250PPM             1
#  define CONFIG_BTDM_BLE_PING_EN                        1
#  define CONFIG_BTDM_BLE_SCAN_DUPL                      1
#  define CONFIG_BTDM_BLE_SLEEP_CLOCK_ACCURACY_INDEX_EFF 1
#  define CONFIG_BTDM_CTRL_BLE_MAX_CONN                  3
#  define CONFIG_BTDM_CTRL_BLE_MAX_CONN_EFF              3
#  define CONFIG_BTDM_CTRL_BR_EDR_MAX_ACL_CONN_EFF       0
#  define CONFIG_BTDM_CTRL_BR_EDR_MAX_SYNC_CONN_EFF      0
#  define CONFIG_BTDM_CTRL_BR_EDR_SCO_DATA_PATH_EFF      0
#  define CONFIG_BTDM_CTRL_FULL_SCAN_SUPPORTED           1
#  define CONFIG_BTDM_CTRL_HCI_MODE_VHCI                 1
#  define CONFIG_BTDM_CTRL_HLI                           0   /* ESP-IDF uses 1 by default */
#  define CONFIG_BTDM_CTRL_LPCLK_SEL_MAIN_XTAL           1
#  define CONFIG_BTDM_CTRL_MODE_BLE_ONLY                 1
#  define CONFIG_BTDM_CTRL_MODEM_SLEEP_MODE_ORIG         1
#  define CONFIG_BTDM_CTRL_MODEM_SLEEP                   1
#  define CONFIG_BTDM_CTRL_PCM_FSYNCSHP_EFF              1
#  define CONFIG_BTDM_CTRL_PCM_POLAR_EFF                 0
#  define CONFIG_BTDM_CTRL_PCM_ROLE_EFF                  0
#  define CONFIG_BTDM_CTRL_PINNED_TO_CORE                0
#  define CONFIG_BTDM_CTRL_PINNED_TO_CORE_0              1
#  define CONFIG_BTDM_RESERVE_DRAM                       0xe000 /* at least 0xdb5c, we use 56 kB */
#  define CONFIG_BTDM_SCAN_DUPL_CACHE_REFRESH_PERIOD     0
#  define CONFIG_BTDM_SCAN_DUPL_CACHE_SIZE               200
#  define CONFIG_BTDM_SCAN_DUPL_TYPE                     0
#  define CONFIG_BTDM_SCAN_DUPL_TYPE_DEVICE              1
#else
#  define CONFIG_BTDM_RESERVE_DRAM                       0
#endif

#ifdef __cplusplus
}
#endif

#endif /* DOXYGEN */
/** @} */

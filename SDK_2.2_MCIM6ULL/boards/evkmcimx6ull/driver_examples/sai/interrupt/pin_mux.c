/*
 * Copyright (c) 2015-2016, Freescale Semiconductor, Inc.
 * Copyright 2017 NXP
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v3.0
processor: MCIMX6Y2xxx05
package_id: MCIMX6Y2DVM05
mcu_data: i_mx_1_0
processor_version: 1.1.0
board: MCIMX6ULL-EVK-REV-A
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/*******************************************************************************
 * Code
 ******************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: ca7}
- pin_list:
  - {pin_num: K16, peripheral: UART1, signal: uart_rx, pin_signal: UART1_RX_DATA, PUE: KEEP, PKE: ENABLED, SPEED: MHZ_100_2, DSE: OHM_120}
  - {pin_num: K14, peripheral: UART1, signal: uart_tx, pin_signal: UART1_TX_DATA, PUE: KEEP, PKE: ENABLED, SPEED: MHZ_100_2, DSE: OHM_120}
  - {pin_num: P14, peripheral: SAI2, signal: sai_mclk, pin_signal: JTAG_TMS, PUS: OHM_100K_PD, PUE: KEEP, PKE: DISABLED, DSE: OHM_120, SRE: SLOW}
  - {pin_num: N14, peripheral: SAI2, signal: sai_tx_data, pin_signal: JTAG_TRST_B, PUS: OHM_100K_PD, PUE: KEEP, PKE: DISABLED, DSE: OHM_120, SRE: SLOW}
  - {pin_num: N15, peripheral: SAI2, signal: sai_tx_sync, pin_signal: JTAG_TDO, PUS: OHM_100K_PD, PKE: DISABLED, DSE: OHM_120, SRE: SLOW}
  - {pin_num: N16, peripheral: SAI2, signal: sai_tx_bclk, pin_signal: JTAG_TDI, PUS: OHM_100K_PD, PUE: KEEP, PKE: DISABLED, DSE: OHM_120, SRE: SLOW}
  - {pin_num: F17, peripheral: GPIO1, signal: 'gpio_io, 30', pin_signal: UART5_TX_DATA, PUS: OHM_100K_PD, PUE: KEEP, PKE: DISABLED, DSE: OHM_120}
  - {pin_num: G13, peripheral: GPIO1, signal: 'gpio_io, 31', pin_signal: UART5_RX_DATA, PUS: OHM_100K_PD, PUE: KEEP, PKE: DISABLED, DSE: OHM_120}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-A7[ca7] */
    IOMUXC_SetPinMux(IOMUXC_JTAG_TDI_SAI2_TX_BCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_JTAG_TDI_SAI2_TX_BCLK, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SPEED(2U));
    IOMUXC_SetPinMux(IOMUXC_JTAG_TDO_SAI2_TX_SYNC, 0U);
    IOMUXC_SetPinConfig(IOMUXC_JTAG_TDO_SAI2_TX_SYNC, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SPEED(2U));
    IOMUXC_SetPinMux(IOMUXC_JTAG_TMS_SAI2_MCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_JTAG_TMS_SAI2_MCLK, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SPEED(2U));
    IOMUXC_SetPinMux(IOMUXC_JTAG_TRST_B_SAI2_TX_DATA, 0U);
    IOMUXC_SetPinConfig(IOMUXC_JTAG_TRST_B_SAI2_TX_DATA, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SPEED(2U));
    IOMUXC_SetPinMux(IOMUXC_UART1_RX_DATA_UART1_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART1_RX_DATA_UART1_RX, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SPEED(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_PKE_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART1_TX_DATA_UART1_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART1_TX_DATA_UART1_TX, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SPEED(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_PKE_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART5_RX_DATA_GPIO1_IO31, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART5_RX_DATA_GPIO1_IO31, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SPEED(2U));
    IOMUXC_SetPinMux(IOMUXC_UART5_TX_DATA_GPIO1_IO30, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART5_TX_DATA_GPIO1_IO30, 
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SPEED(2U));
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_I2C_ConfigurePins:
- options: {coreID: ca7}
- pin_list:
  - {pin_num: F17, peripheral: I2C2, signal: i2c_scl, pin_signal: UART5_TX_DATA, SION: ENABLED, PUS: OHM_100K_PU, PUE: PULL, PKE: ENABLED, ODE: ENABLED, DSE: OHM_120,
    SRE: FAST}
  - {pin_num: G13, peripheral: I2C2, signal: i2c_sda, pin_signal: UART5_RX_DATA, SION: ENABLED, PUS: OHM_100K_PU, PUE: PULL, PKE: ENABLED, ODE: ENABLED, DSE: OHM_120,
    SRE: FAST}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_I2C_ConfigurePins
 * Description   : Initialize I2C pins.
 *
 *END**************************************************************************/
void BOARD_I2C_ConfigurePins(void) {                       /*!< Function assigned for the core: Cortex-A7[ca7] */
    IOMUXC_SetPinMux(IOMUXC_UART5_RX_DATA_I2C2_SDA, 1U);
    IOMUXC_SetPinConfig(IOMUXC_UART5_RX_DATA_I2C2_SDA, 
                        IOMUXC_SW_PAD_CTL_PAD_SRE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SPEED(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_ODE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PKE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUS(2U));
    IOMUXC_SetPinMux(IOMUXC_UART5_TX_DATA_I2C2_SCL, 1U);
    IOMUXC_SetPinConfig(IOMUXC_UART5_TX_DATA_I2C2_SCL, 
                        IOMUXC_SW_PAD_CTL_PAD_SRE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_DSE(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_SPEED(2U) |
                        IOMUXC_SW_PAD_CTL_PAD_ODE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PKE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK |
                        IOMUXC_SW_PAD_CTL_PAD_PUS(2U));
}

/*******************************************************************************
 * EOF
 ******************************************************************************/

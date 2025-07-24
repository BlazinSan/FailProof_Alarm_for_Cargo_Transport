#ifndef __STM32F4xx_HAL_CONF_H
#define __STM32F4xx_HAL_CONF_H

#ifdef __cplusplus
 extern "C" {
#endif

/* ########################## Module Selection ############################## */
#define HAL_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_RCC_MODULE_ENABLED
#define HAL_DMA_MODULE_ENABLED
#define HAL_TIM_MODULE_ENABLED
#define HAL_CORTEX_MODULE_ENABLED
#define HAL_PWR_MODULE_ENABLED

/* ########################## Oscillator Values ############################# */
#define HSE_VALUE    ((uint32_t)8000000)
#define HSI_VALUE    ((uint32_t)16000000)
#define LSE_VALUE    ((uint32_t)32768)
#define LSI_VALUE    ((uint32_t)32000)

/* ########################## System Configuration ########################## */
#define VDD_VALUE                      ((uint32_t)3300)
#define TICK_INT_PRIORITY              ((uint32_t)0)
#define USE_RTOS                       0
#define PREFETCH_ENABLE                1
#define INSTRUCTION_CACHE_ENABLE       1
#define DATA_CACHE_ENABLE              1

/* ########################## Assert Selection ############################## */
// #define USE_FULL_ASSERT    1U

#include "stm32f4xx_hal_def.h"

#ifdef __cplusplus
}
#endif

#endif /* __STM32F4xx_HAL_CONF_H */

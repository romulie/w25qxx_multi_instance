#ifndef ASF_DELAY_H
#define ASF_DELAY_H


// delay functions are ASF4 API function
// TODO: replace calls of old delay_init(void) to delay_init(void *const hw) in ASF project
#include <atmel_start.h>


#ifdef __cplusplus
extern "C"{
#endif

/**
 * @brief  delay clock init ASF4 API function
 * @note   none
 */
void delay_init(void *const hw);

/**
 * @brief     delay us ASF4 API function
 * @param[in] us
 * @note      none
 */
void delay_us(const uint16_t us);

/**
 * @brief     delay ms ASF4 API function
 * @param[in] ms
 * @note      none
 */
void delay_ms(const uint16_t ms);

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif

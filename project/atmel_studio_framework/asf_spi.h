#ifndef ASF_SPI_H
#define ASF_SPI_H

#include <atmel_start.h>
#include "asf_w25qxx_custom_descriptor.h"

#ifdef __cplusplus
 extern "C" {
#endif

/**
 * @defgroup spi spi function
 * @brief    spi function modules
 * @{
 */

/**
 * @brief spi mode enumeration definition
 */
typedef enum
{
    SPI_MODE_0 = 0x00,        /**< mode 0 */
    SPI_MODE_1 = 0x01,        /**< mode 1 */
    SPI_MODE_2 = 0x02,        /**< mode 2 */
    SPI_MODE_3 = 0x03,        /**< mode 3 */
} spi_mode_t;

/**
 * @brief     spi bus init
 * @param[in] *descr custom descriptor
 * @param[in] mode is the spi mode
 * @return    status code
 *            - 0 success
 *            - 1 init failed
 * @note      SCLK is PA5, MOSI is PA7 MISO is PA6 and CS is PA4
 */
uint8_t spi_init(void *descr, spi_mode_t mode);

/**
 * @brief  spi bus deinit
 * @param[in] *descr custom descriptor
 * @return status code
 *         - 0 success
 *         - 1 deinit failed
 * @note   none
 */
uint8_t spi_deinit(void *descr, void);

/**
 * @brief      spi bus write read
 * @param[in]  *descr custom descriptor
 * @param[in]  *in_buf points to an input buffer
 * @param[in]  in_len is the input length
 * @param[out] *out_buf points to an output buffer
 * @param[in]  out_len is the output length
 * @return     status code
 *             - 0 success
 *             - 1 write read failed
 * @note       none
 */
uint8_t spi_write_read(void *descr, uint8_t *in_buf, uint32_t in_len, uint8_t *out_buf, uint32_t out_len);

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif

#if 0
/**
 * @brief     spi bus write command
 * @param[in] descr custom descriptor
 * @param[in] *buf points to a data buffer
 * @param[in] len is the length of the data buffer
 * @return    status code
 *            - 0 success
 *            - 1 write failed
 * @note      none
 */
uint8_t spi_write_cmd(void *descr, uint8_t *buf, uint16_t len);

/**
 * @brief     spi bus write
 * @param[in] descr custom descriptor
 * @param[in] addr is the spi register address
 * @param[in] *buf points to a data buffer
 * @param[in] len is the length of the data buffer
 * @return    status code
 *            - 0 success
 *            - 1 write failed
 * @note      none
 */
uint8_t spi_write(void *descr, uint8_t addr, uint8_t *buf, uint16_t len);

/**
 * @brief     spi bus write address 16
 * @param[in] descr custom descriptor
 * @param[in] addr is the spi register address
 * @param[in] *buf points to a data buffer
 * @param[in] len is the length of the data buffer
 * @return    status code
 *            - 0 success
 *            - 1 write failed
 * @note      none
 */
uint8_t spi_write_address16(void *descr, uint16_t addr, uint8_t *buf, uint16_t len);

/**
 * @brief      spi bus read command
 * @param[in] descr custom descriptor
 * @param[out] *buf points to a data buffer
 * @param[in]  len is the length of the data buffer
 * @return     status code
 *             - 0 success
 *             - 1 read failed
 * @note       none
 */
uint8_t spi_read_cmd(void *descr, uint8_t *buf, uint16_t len);

/**
 * @brief      spi bus read
 * @param[in] descr custom descriptor
 * @param[in]  addr is the spi register address
 * @param[out] *buf points to a data buffer
 * @param[in]  len is the length of the data buffer
 * @return     status code
 *             - 0 success
 *             - 1 read failed
 * @note       none
 */
uint8_t spi_read(void *descr, uint8_t addr, uint8_t *buf, uint16_t len);

/**
 * @brief      spi bus read address 16
 * @param[in] descr custom descriptor
 * @param[in]  addr is the spi register address
 * @param[out] *buf points to a data buffer
 * @param[in]  len is the length of the data buffer
 * @return     status code
 *             - 0 success
 *             - 1 read failed
 * @note       none
 */
uint8_t spi_read_address16(void *descr, uint16_t addr, uint8_t *buf, uint16_t len);

/**
 * @brief      spi transmit
 * @param[in] descr custom descriptor
 * @param[in]  *tx points to a tx buffer
 * @param[out] *rx points to a rx buffer
 * @param[in]  len is the length of the data buffer
 * @return     status code
 *             - 0 success
 *             - 1 transmit failed
 * @note       none
 */
uint8_t spi_transmit(void *descr, uint8_t *tx, uint8_t *rx, uint16_t len);

#endif

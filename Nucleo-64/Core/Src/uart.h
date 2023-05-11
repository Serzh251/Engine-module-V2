
#ifndef __UART_H
#define __UART_H

// init uarts
//void UARTs_Init(uint8_t *pData1, uint16_t size1, uint8_t *pData3, uint16_t size3, uint8_t *pData6, uint16_t size6);

//macros UART1
//#define EnTX_UART1 GPIOA->BSRR = (1<<8)  //PA8
//#define EnRX_UART1 GPIOA->BSRR = (1<<24) //PA8
#define BUFFER_SIZE_UART1 256

//int16_t ReceiveUART1(uint32_t timeout);
//int8_t WriteUART1(uint16_t len);


////macros UART3
//#define EnTX_UART3 GPIOE->BSRR = (1<<15)  //PE15
//#define EnRX_UART3 GPIOE->BSRR = (1<<31)  //PE15
//#define BUFFER_SIZE_UART3 256
//
//int16_t ReceiveUART3(uint32_t timeout);
//int8_t WriteUART3(uint16_t len);
//
//
////macros UART6
//#define EnTX_UART6 GPIOG->BSRR = (1<<8)   //PG8
//#define EnRX_UART6 GPIOG->BSRR = (1<<24)  //PG8
//#define BUFFER_SIZE_UART6 256
//
//int16_t ReceiveUART6(uint32_t timeout);
//int8_t WriteUART6(uint16_t len);

#endif /*__UART_H */

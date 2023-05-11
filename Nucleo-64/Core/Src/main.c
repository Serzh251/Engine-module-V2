#include "main.h"
#include "systeminit.h"
#include "string.h"
#include "uart.h"
#include "CoOS.h"

void Uart1GalileoTask(void *pdata); //modbus slave, connect with galileo
OS_STK Uart1GalileoTaskStk[1024];
OS_TID Uart1GalileoTaskId;

static uint8_t arrayUART1[BUFFER_SIZE_UART1]; //buffer for data from uart1 (modbus slave for galileo)

int main(void)
{
  SystemInitHal();

  CoInitOS();
  Uart1GalileoTaskId = CoCreateTask (Uart1GalileoTask, (void *)0, 1, &Uart1GalileoTaskStk[1023], 1024); // create task for uart1

  CoStartOS();

  while (1);
}

void Uart1GalileoTask(void *pdata)
{

  while(1)
  {
//	  USART1->DR = 0x55;
//	  int16_t size = ReceiveUART1(0);
//	  arrayUART1[6] = (uint8_t)size;
//	  WriteUART1(16);
	  CoTickDelay(1000);

  }
}

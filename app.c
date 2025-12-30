#include <stdint.h>
#include <stdio.h>


void app_init(void)
{
  printf("\r\n============================\r\n");
  printf("ZGM UART TEST STARTED\r\n");
  printf("============================\r\n");
}

void app_process_action(void)
{
  for (volatile uint32_t i = 0; i < 800000; i++) {}
  printf("Bohr\r\n");
}

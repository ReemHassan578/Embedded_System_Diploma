#include "Uart.h"

void send(char * string)
{
 while(*string !=0)
{
UARTDR=(unsigned int)(*string) ;
string++;
}

}
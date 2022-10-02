
#include "Dio_Interface.h"
void main()

{
	// make pin0 in portA as output  
	Dio_Configure_Channel(DIO_PORTA,0,DIO_OUTPUT);
	
	// make pin0 in portA HIGH
	Dio_Write_Channel(DIO_PORTA,0);
while(1)
{

}

}

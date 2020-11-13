/*
 * Trial_portOutSeven.c
 *
 * Created: 13/11/2020 14:47:17
 * Author : agusr
 */ 
#define F_CPU 16000000ul 

#include <avr/io.h>
#include <util/delay.h>


void kirimkeDisplay (uint8_t angka);	// subroutine / subbagian

int main(void)
{
	uint8_t counter;
    
	DDRD = 0xFF;
	PORTD = 0xff;

	counter = 0;
		
    while (1) 
    {
		kirimkeDisplay(counter);
		counter++;
		_delay_ms(200);
		
		if (counter > 9)
		{
			counter = 0;
		}
		
    }
}

void kirimkeDisplay (uint8_t angka)
{
	uint8_t	dataSevenOut;		//local variable
	
	dataSevenOut = 0x00;
	
	switch (angka)
	{
	case 0: dataSevenOut = 0b00111111;
		break;
	case 1: dataSevenOut = 0b00000110;
		break;
	case 2: dataSevenOut = 0b01011011;
		break;
	case 3: dataSevenOut = 0b01001111;
		break;
	case 4: dataSevenOut = 0b01100110;
		break;
	case 5: dataSevenOut = 0b01101101;
		break;
	case 6: dataSevenOut = 0b01111101;
		break;
	case 7: dataSevenOut = 0b00000111;
		break;
	case 8: dataSevenOut = 0b01111111;
		break;
	case 9: dataSevenOut = 0b01101111;
		break;
	default: dataSevenOut = 0b10000000;
		break;
	}
	
	PORTD = dataSevenOut;
}


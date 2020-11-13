/*
 * Trial_portOutSeven.c
 *
 * Created: 13/11/2020 14:47:17
 * Author : agusr
 */ 
#define F_CPU 16000000ul 

#include <avr/io.h>
#include <util/delay.h>

void kirimkeDisplay (uint8_t angka);

int main(void)
{
    
	DDRD = 0xFF;
	PORTD = 0xff;
	
    while (1) 
    {
		
    }
}


#include <msp430.h> 


/**
 * main.c
 */

float b = 1.0;


int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	int a = 5; //creates a local integer value

	a+=1; // increments the int a by 1

	b-=1; // decrements the float value by 1

	unsigned char X = 0x0f;
	unsigned char Y = 0x5;

	unsigned char W;
	unsigned char K;

	W = X | Y;
	K = X & Y;








	return 0;
}

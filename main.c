#include <msp430.h> 


int OF(int X, int Y){

        int sum = X + Y;
        return sum;
    }

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer


	    int X = 0b1111111111111111;
	    int Y = 0b1000000000000000;


	    int W;

	    W = OF(X,Y);


	    while(1);

	
	return 0;
}

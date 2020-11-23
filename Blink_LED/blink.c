#include msp430.h
#include stdio.h


  The led will turn on. When the tactile button is pusehd and only when it is pushed the led will turn off.


void main(void)
{	WDTCTL = WDTPW  WDTHOLD;
	P1DIR = BIT0;
	P1DIR &= ~0x02;

	P1REN = 0x02;
	P1OUT = 0x02;

	while(1){
	if(P1IN&0x02){
	    P1OUT = BIT0;
	}else{
	    P1OUT = ~BIT0;
	}

	}
}

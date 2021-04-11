/*	Author: klai022
 *  Partner(s) Name: Kenneth Lai
 *	Lab Section: 023
 *	Assignment: Lab 2  Exercise 4
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */


#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
int main(void) {
DDRA = 0x00; PORTA = 0xFF; // A,B,C are inputs
DDRB = 0X00; PORTB = 0XFF;
DDRC = 0X00; PORTC = 0XFF;
DDRD = 0xFF; PORTD = 0x00;// D is an output

while(1) {
/*
unsigned char tmpA0 = PINA & 0x01;
unsigned char tmpA1 = PINA & 0x02;
unsigned char tmpA2 = PINA & 0x04;
unsigned char tmpA3 = PINA & 0x08;
unsigned char cntavail = 0x00;
*/
unsigned char weight1 = PINA & 0xFF;
unsigned char weight2 = PINB & 0xFF;
unsigned char weight3 = PINC & 0xFF;

unsigned char total_weight = weight1 + weight2 + weight3;

unsigned char D_output = 0x00;



D_output = total_weight << 2;

if(total_weight > 0x8C){
D_output = (D_output & 0xFE) | 0x01;// might change it to + 1
}
if((weight1 - weight3) > 80 || (weight3 - weight1) > 80){
D_output = (D_output & 0xFC) | 0x02;
}




PORTD = D_output;
}
return 0;
}

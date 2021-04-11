/*	Author: klai022
 *  Partner(s) Name: Kenneth Lai
 *	Lab Section: 023
 *	Assignment: Lab 2  Exercise 2
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
DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
DDRC = 0xFF; PORTC = 0x00;

unsigned char tmpA0 = PINA & 0x01;
unsigned char tmpA1 = PINA & 0x02;
unsigned char tmpA2 = PINA & 0x04;
unsigned char tmpA3 = PINA & 0x08;
//unsigned char tmpA = 0x00; // Temporary variable to hold the value of A
//unsigned char cntavail = 0;
while(1) {

unsigned char cntavail = 0x00;

if(!tmpA0){
cntavail = cntavail + 1;
}
if(!tmpA1){
cntavail = cntavail + 1;
}
if(!tmpA2){
cntavail = cntavail + 1;
}
if(!tmpA3){
cntavail = cntavail + 1;
}

PORTC = cntavail;
}
return 0;
}

// Description: This file implements turnOnLED and initLED to control
// the LEDs.
// Qusai Almustafa
//----------------------------------------------------------------------//


#include <avr/io.h>
#include <util/delay.h>
#include "led.h"

/* Initialize PD0, PD1, PD2, and PD3 to outputs
*/
void initLED(){
    DDRD |= (1<<DDD0) | (1<<DDD1) | (1<<DDD2) | (1<<DDD3); //initialize as output PD0-PD3 pin 18 to pin 21
}

/* This must be one line of code.
* In this function you will be giving a number "num" which will be represented
* in binary by four LEDs. You must effectively assign the lowest four bits of
* "num" to the appropriate bits of PORTA.
*/
void turnOnLEDWithChar(unsigned char num){
    PORTD  = (PORTD & 0xF0) | (num & 0x0F); // set the first four bit to zero and setting num to the first 4 bits
}
/* PORTA & 0xF0 bitwise AND oper between the current value of the PORTA register
 and the binary number 11110000 
 
  bitwise AND operation between the variable
   "num" and the binary number 00001111

   setting the first 4 bits to 0 
   and setting the last 4 bits to the value of "num". 
   */
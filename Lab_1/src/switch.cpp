// Author:         
// Net ID:         
// Date:           
// Assignment:     Lab 1
//----------------------------------------------------------------------//
#include <Arduino.h>
#include <avr/io.h>
#include "switch.h"

// initSwitch returns void and takes no parameters
void initSwitch() {
  DDRA &= ~(1 << PORTA0); // sets pin 22 as input, it corrcpand to port A0

  // enable the pullup resistor for stable input
  PORTA |= (1 << PORTA0);

}


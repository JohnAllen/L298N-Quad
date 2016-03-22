/*
*Install wiringPi first: https://projects.drogon.net/raspberry-pi/wiringpi/download-and-install/
*Simple command line command to drive motors forward with the L298N Quadruple H-bridge 
* Compile with: cc -o forward -I/usr/local/include forward.c -L/usr/local/lib -lwiringPi
* Works with a Raspberry Pi 2
 */

#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//pin numbers for wiringPi pin scheme
const int IN1 = 0;  // gpio/bcm 17
const int IN2 = 1;  // gpio/bcm 18
const int IN3 = 2;  // gpio/bcm 27
const int IN4 = 3;  // gpio/bcm 22
const int IN5 = 4;  // gpio/bcm 24
const int IN6 = 5;  // gpio/bcm 24
const int IN7 = 6;  // gpio/bcm 25
const int IN8 = 21; // gpio/bcm 5

int main (void)
{

  if (wiringPiSetup () == -1)
    exit (1) ;

    pinMode (IN1, OUTPUT);
    digitalWrite (IN1, LOW);
    pinMode(IN2, OUTPUT);
    digitalWrite(IN2, HIGH);
    pinMode(IN3, OUTPUT);
    digitalWrite(IN3, LOW);
    pinMode (IN4, OUTPUT);
    digitalWrite (IN4, HIGH);
    pinMode (IN5, OUTPUT);
    digitalWrite (IN5, LOW);
    pinMode (IN6, OUTPUT);
    digitalWrite (IN6, HIGH);
    pinMode (IN7, OUTPUT);
    digitalWrite (IN7, LOW);
    pinMode (IN8, OUTPUT);
    digitalWrite (IN8, HIGH);

  return 0 ;
}

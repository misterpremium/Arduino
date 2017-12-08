//www.elegoo.com
//2016.06.13

/*
Blink
Turns on an LED on for  two second, then off  for  two second, repeatedly.

This  example code is  in  the public  domain.
*/

void setup() {
// initialize  the digital  pin  as an output.
// Pin  13 has an LED connected on most Arduino boards:
pinMode(5, OUTPUT);
}

void loop()  {
  for(val=0; val<255; val++)
  {
digitalWrite(5,  HIGH);  // set  the LED on delay(2000); // wait  for  a second digitalWrite(13,  LOW);  // set  the LED off delay(2000);  // wait  for  a second
}

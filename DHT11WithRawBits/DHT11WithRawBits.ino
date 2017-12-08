//www.elegoo.com
//2016.06.13

#include <SimpleDHT.h>

// for DHT11, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: 2
int pinDHT11 = 5;
SimpleDHT11 dht11;
int redpin = 4; //select the pin for the red LED
int greenpin =3;// select the pin for the green LED
int bluepin =2; // select the pin for the  blue LED
void setup() {
  Serial.begin(9600);
  pinMode(redpin, OUTPUT); 
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT); 
}

void loop() {
  // start working...
  Serial.println("=================================");
  Serial.println("Sample DHT11...");
  
  // read with raw sample data.
  byte temperature = 0;
  byte humidity = 0;
  byte data[40] = {0};
  if (dht11.read(pinDHT11, &temperature, &humidity, data)) {
    Serial.print("Read DHT11 failed");
    return;
  }
  
  Serial.print("Sample RAW Bits: ");
  for (int i = 0; i < 40; i++) {
    Serial.print((int)data[i]);
    if (i > 0 && ((i + 1) % 4) == 0) {
      Serial.print(' ');
    }
  }
  Serial.println("");
  
  Serial.print("Sample OK: ");
  Serial.print((int)temperature); Serial.print(" *C, ");
  Serial.print((int)humidity); Serial.println(" %");
  if ((int)temperature < 25){
    analogWrite(bluepin, 255);
    analogWrite(greenpin, 255);
    analogWrite(redpin, 0);
  }
  if((int)temperature>=25){
    analogWrite(bluepin, 0);
    analogWrite(greenpin, 0);
    analogWrite(redpin, 255);
  }
  // DHT11 sampling rate is 1HZ.
  delay(500);
}





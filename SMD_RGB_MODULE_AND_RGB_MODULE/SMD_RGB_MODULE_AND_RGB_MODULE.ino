//www.elegoo.com
//2016.06.13

int redpin = 5; //select the pin for the red LED
int greenpin =4;// select the pin for the green LED
int bluepin =3; // select the pin for the  blue LED

int val;
void setup() { pinMode(redpin, OUTPUT); pinMode(bluepin, OUTPUT); pinMode(greenpin, OUTPUT); Serial.begin(9600);
}
void loop()
{
for(val=255; val>0; val--)
{
analogWrite(5, val); analogWrite(3, 255-val); analogWrite(4, 128-val); delay(50);
}
for(val=0; val<255; val++)
{
analogWrite(5, val); analogWrite(3, 255-val); analogWrite(4, 128-val); delay(50);
}
Serial.println(val, DEC);
}


/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInput
*/

int readpins[]{A0,A1,A2};
int outpins[]{9,10,11};
int vals[]{0,0,0};
//
//int sensorPin0 = A0;    // select the input pin for the potentiometer
//int sensorPin1 = A1;
//int sensorPin2 = A2;
//int ledPin0 = 9;      // select the pin for the LED
//int ledPin1 = 10;
//int ledPin2 = 11;
//int sensorValue0;  // variable to store the value coming from the sensor
//int sensorValue1;  // variable to store the value coming from the sensor
//int sensorValue2;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  Serial.begin(9600);
//  pinMode(ledPin0, OUTPUT);
//  pinMode(ledPin1, OUTPUT);
//  pinMode(ledPin2, OUTPUT);
  for (int i = 0; i<3; i++){
    pinMode(outpins[i], OUTPUT);
  }
}

void loop() {
//  // read the value from the sensor:
//  sensorValue0 = analogRead(sensorPin0);
//  sensorValue1 = analogRead(sensorPin1);
//  sensorValue2 = analogRead(sensorPin2);
//  // turn the ledPin on
//  //Problem since analogRead is 0-1024, analogWrite is 0-255
//  //Rescale our value with the map function
//  //map(value, fromLow, fromHigh, toLow, toHigh)
//  sensorValue0 = map(sensorValue0 , 0, 1024, 0, 255);
//  sensorValue1 = map(sensorValue1 , 0, 1024, 0, 255);
//  sensorValue2 = map(sensorValue2 , 0, 1024, 0, 255);
//
//  //one serial print statement
//  Serial.print("Value= ");
//  Serial.print(sensorValue0);
//  Serial.print(" ");
//  Serial.print(sensorValue1);
//  Serial.print(" ");
//  Serial.println(sensorValue2);
//  
//  analogWrite(ledPin0, sensorValue0);
//  analogWrite(ledPin1, sensorValue1);
//  analogWrite(ledPin2, sensorValue2);

  for (int i=0; i<3; i++){
    vals[i] = analogRead(readpins[i]);
    vals[i] = map(vals[i] , 0, 1024, 0, 255);
    Serial.println(vals[i]);
    analogWrite(outpins[i],vals[i]);
  }

}

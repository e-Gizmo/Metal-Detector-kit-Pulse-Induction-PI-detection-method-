/*
  e-Gizmo Metal Detector Sample sketch
  This sample codes is for the metal detector kit.
  It can shows you the output on the serial monitor
  "Detect" and "Polarity"  are open collector
  digital output readily. DET is 0 when there is a 
  metallic object detected, then buzzer will sound.
  
  Output connections:
  Metal Detector        Gizduino board
      RST          ---      RESET/Digital or Analog I
      GND          ---      GND
      POL          ---      Digital pin 5
      DET          ---      Digital pin 4      
      
  Note: Polarity output may be used to distinguish if 
  the detected metal has paramagnetic or diamagnetic 
  properties (e.g Iron and Aluminium). This function 
  is not 100% reliable but can be useful in many cases.
  
  This example code is in the public domain.
 
  by
  e-Gizmo Mechatronix Central
  http://www.e-gizmo.com
  August 9, 2014
 
 */

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int DET = digitalRead(4);
  int POL = digitalRead(5);
  
  Serial.print("DETECT: ");
  Serial.print(DET);
  Serial.print("  POL: ");
  Serial.println(POL);


  delay(10);
}

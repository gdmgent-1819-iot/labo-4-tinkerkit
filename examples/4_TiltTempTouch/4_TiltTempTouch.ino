#include <TinkerKit.h>

TKTiltSensor tilt(I0);
TKButton button(I1);
TKTouchSensor touch(I2);
TKThermistor therm(I3);

TKLed ledRed(O0);		//create the "led" object on port O0
TKLed ledOrange(O1);
TKLed ledGreen(O2);

float C, F;          // temperature readings are returned in float format

void setup() {
  // initialize serial communications at 9600 bps
  Serial.begin(9600);
}

void loop() {

  // tilt sensor
  if (tilt.read() == HIGH) {   // if it is, the tilt.state() is HIGH
    ledRed.on();                 // turn LED on
  } 
  else {                    // if it is not, the tilt.state() is LOW
    ledRed.off();                // turn LED off
  }


  // button

  if (button.readSwitch() == HIGH) {    
    ledOrange.on();      
  } 
  else {      
    ledOrange.off();      
  }

  // touch

  if (touch.readSwitch() == HIGH) {      
    ledGreen.on();     // turn LED on 
  } else {
    ledGreen.off();    // turn LED off
  }  


  // thermistor

  C = therm.readCelsius();       // Reading the temperature in Celsius degrees and store in the C variable
  F = therm.readFahrenheit();   // Reading the temperature in Fahrenheit degrees and store in the F variable

  // Print the collected data in a row on the Serial Monitor
  Serial.print("Analog reading: "); // Reading the analog value from the thermistor
  Serial.print(therm.read());
  Serial.print("\tC: ");
  Serial.print(C);
  Serial.print("\tF: ");
  Serial.println(F);  
  

  // 10ms wachten voor de volgend loop
  delay(10);                    
}

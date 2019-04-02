#include <TinkerKit.h>

TKPotentiometer potentiometer(I0);	//potentiometer op poort I0

TKLed led(O0);		//led op poort O0

void setup() {
  // initialize serial communications at 9600 bps
  Serial.begin(9600);
}

void loop() {
  // waarden van de potentiometer in de variabele brightnessValue opslaan
  int brightnessValue = potentiometer.read();        

  // veranderd de lichtintensiteit van de led
  led.brightness(1023 - brightnessValue);

  Serial.print("brightness = " );                      
  Serial.println(brightnessValue);      

  // 10ms wachten voor de volgend loop
  delay(10);                    
}

#include <TinkerKit.h>

TKLightSensor lichtSensor(I0);  //lichtsensor op poort I0

TKLed led(O0);		//led op poort O0

void setup() {
  // initialize serial communications at 9600 bps
  Serial.begin(9600);
}

void loop() {
  // waarden in de variabele brightnessValue opslaan
  int brightnessValue = lichtSensor.read();

  // veranderd de lichtintensiteit van de led
  led.brightness(brightnessValue);

  // 10ms wachten voor de volgend loop
  delay(10);                    
}

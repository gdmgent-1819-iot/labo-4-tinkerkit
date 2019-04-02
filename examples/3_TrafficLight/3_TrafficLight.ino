#include <TinkerKit.h>

TKPotentiometer pot(I0);	//create the "ldr" object on port I0
TKPotentiometer pot2(I1);

TKLed ledRed(O0);		//create the "led" object on port O0
TKLed ledOrange(O1);
TKLed ledGreen(O2);

void setup() {
  // initialize serial communications at 9600 bps
  Serial.begin(9600);
}

void loop() {
  // waarden van de lineaire potentiometer in de variabele brightnessValue opslaan
  // waarden van de draaipotentiometer in de variabele brightnessValue opslaan
  int potentiometerValue = pot.read();
  int brightnessValue = 1023 - pot2.read();        

  // set the led brightness
  if (potentiometerValue < 1020/3) {
    
    // zet rode led aan
    
    ledRed.brightness(brightnessValue); 
    ledOrange.brightness(0); 
    ledGreen.brightness(0);
  }
  else if (potentiometerValue >= 1020/3 && potentiometerValue < (1020/3) * 2) {
    
    // zet oranje led aan
    
    ledRed.brightness(0); 
    ledOrange.brightness(brightnessValue); 
    ledGreen.brightness(0);
  }
  else {
    
    // set groene led aan
    
    ledRed.brightness(0);
    ledOrange.brightness(0); 
    ledGreen.brightness(brightnessValue); 
  }

  // 10ms wachten voor de volgend loop
  delay(10);                    
}

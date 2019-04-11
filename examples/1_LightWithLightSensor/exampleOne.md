## Example One
 
### Lampje laten branden

We connecteren de lichtsensort met de inputpoort en het LED-lampje met de outputpoort.
Hierdoor krijgen we een gesloten circuit.

Om het lampje te doen branden hebben we een bijpassende code nodig.
Deze code moeten we schrijven binnen een Arduino-vriendelijke IDE.
De software installeren is relatief makkelijk, maar de bijpassende voorbeeld codes zijn iets minder makkelijk te vinden.
De website waarvan we deze moeten halen is niet toegankelijk. Gelukkig is er een github repo met de codes.

Hierbij kiezen we voor de LightWithLightSensor. Deze maakt het mogelijk om de lamp te laten branden.
Het lampje zal nu reageren op het omgevingslicht door deze sensor. We testen dit uit door de sensor te bedekken en daarna weer vrij te geven. Het lampje gaat dimmen zodra er minder licht binnenvalt.

Bij elke verandering aan de code moeten we dit opnieuw doorsturen naar het Arduino-board.

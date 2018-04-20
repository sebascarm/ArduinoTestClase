/*
 Name:		Prueba1.ino
 Created:	11/04/2018 10:09:16
 Author:	Sebastian Carmona
*/

#include "Variables_MCP_LED.h"
#include "Variables_MCP_OUT.h"
#include "Inicializacion_MCP_OUT.h"
//

void setup() {
	Inicializacion_MCP_OUT();
	
	Serial.begin(19200);
	Serial.print("[A00]>MENC_RESET=1<");
	

}

// the loop function runs over and over again until power down or reset
void loop() {
	
	

	
}

#include "C_GrupoChip.h"


C_GrupoChip::C_GrupoChip() {
}

void C_GrupoChip::CargarChips() {
	digitalWrite(PinLatch, 1);
	delayMicroseconds(10); /*Pasar a 20 si no se reciben bien los datos */
	digitalWrite(PinLatch, 0);
	if (Cant_Chips > 22) { Chip23 = shiftIn(PinData, PinClock, 0); } // revisar el parametro 0 en google
	if (Cant_Chips > 21) { Chip22 = shiftIn(PinData, PinClock, 0); } 
	if (Cant_Chips > 20) { Chip21 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 19) { Chip20 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 18) { Chip19 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 17) { Chip18 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 16) { Chip17 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 15) { Chip16 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 14) { Chip15 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 13) { Chip14 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 12) { Chip13 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 11) { Chip12 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 10) { Chip11 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 9) { Chip10 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 8) { Chip9 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 7) { Chip8 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 6) { Chip7 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 5) { Chip6 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 4) { Chip5 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 3) { Chip4 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 2) { Chip3 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 1) { Chip2 = shiftIn(PinData, PinClock, 0); }
	if (Cant_Chips > 0) { Chip1 = shiftIn(PinData, PinClock, 0); }
}


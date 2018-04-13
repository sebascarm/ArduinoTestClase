// C_Pote.h

#ifndef _C_POTE_h
#define _C_POTE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class C_Pote {
	private:
		//int V_Pin;
		int V_ValAnt;  //revisar valor inicial
		int V_PoteSube;
		int VF_Valor;		//Valor del promedio
		int VF_ValorTotal	//Valor Final
	public:
		//Parametros
		int PinPote;
		//Funciones
		int Valor();	//Devuelve el valor del pote

	void init();
};



#endif


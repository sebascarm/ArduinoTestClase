// C_Control.h

#ifndef _C_CONTROL_h
#define _C_CONTROL_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
enum TipoControl {Switch, Pulsador, PoteAnalogo, PoteDigital, Input};
class C_Control {
	private:
		TipoControl V_Tipo;
		int V_Valor		= -1;
		int V_ValorAnt	= -1;
		byte V_Chip;
		byte V_Posicion;
		String V_Comando;
	public:
		//Parametros
		C_Control(TipoControl Tipo);
		void Valor(int Valor);
		//void ValorAnt();
		void AsignarChip(byte Chip, byte Posicion);
		void ComandoSerie(String Comando);
		// Acciones
		// Acciones de output - (Carga datos del chip y lo envia via serie)
		void EnviarComando();
		// Acciones de input - (Busca y carga el comando)
		void CargarComando();
				
};



#endif


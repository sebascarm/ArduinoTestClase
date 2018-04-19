// C_Control.h

#ifndef _C_CONTROL_h
#define _C_CONTROL_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

enum TipoControl {Switch, Pulsador, Llave, PoteAnalogo, PoteDigital, Input};
//Clase Control

class C_Control {
	private:
		TipoControl V_Tipo;
		int V_Valor		= -1;
		int V_ValorAnt	= -1;
		byte V_Chip;
		byte V_Posicion;
		String V_Comando;
		C_Comunicacion Comunicacion;
	public:
		/// <summary>Constructor de la clase</summary> 
		/// <param name = "Tipo">Tipo de Control (Switch, Pulsador, Llave, PoteAnalogo, PoteDigital, Input)</param>
		C_Control(TipoControl Tipo); 
		/// <summary>No utilizado por el momento</summary> 
		void Valor(int Valor);
		/// <summary>Asignacion de Integrado</summary> 
		/// <param name = "Chip">Chip individual asignado</param>
		/// <param name = "Posicion">Posicion del Chip a leer</param>
		void AsignarChip(byte Chip, byte Posicion);
		/// <summary>Asignacion de Comando via Serie</summary> 
		/// <param name = "Comando">Comando de envio via Serie</param>
		void ComandoSerie(String Comando);
		// Acciones-
		// Acciones de output - (Carga datos del chip y lo envia via serie)
		void EnviarComando();
		// Acciones de input - (Busca y carga el comando)
		void CargarComando();
				
};



#endif


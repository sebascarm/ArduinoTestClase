// 
// 
// 

#include "C_Control.h"

C_Control::C_Control(TipoControl Tipo) {
	V_Tipo = Tipo;
}
void C_Control::Valor(int Valor) {
	V_ValorAnt = V_Valor;
	V_Valor = Valor;
}
void C_Control::AsignarChip(byte Chip, byte Posicion) {
	V_Chip = Chip;
	V_Posicion = Posicion;
}
void C_Control::ComandoSerie(String Comando) {
	V_Comando = Comando;
}
// Acciones
void C_Control::EnviarComando() {
	// Cargar variable
	V_Valor = bitRead(V_Chip, V_Posicion);
	// Enviar solo para switch si es distinto
	if (V_Valor != V_ValorAnt) {
		// Enviar(V_Comando, V_Valor);
		V_ValorAnt = V_Valor;
	}

}
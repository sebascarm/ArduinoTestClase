// C_GrupoChip.h
class C_GrupoChip {
	private:

	public:
		//inicializacion
		C_GrupoChip();
		
		//Parametros
		int PinData;
		int PinLatch;
		int PinClock;
		int Cant_Chips = 2;
		//Valores Devueltos
		int Chip1; int Chip2; int Chip3; int Chip4; int Chip5;
		int Chip6; int Chip7; int Chip8; int Chip9; int Chip10;
		int Chip11; int Chip12; int Chip13; int Chip14; int Chip15;
		int Chip16; int Chip17; int Chip18; int Chip19; int Chip20;
		int Chip21; int Chip22; int Chip23; 
		//Acciones
		void CargarChips();
};

// *******************************************************************************************
// ****                                                                                   ****
// ****        DECLARACION DE VARIABLES                                                   ****
// ****                                                                                   ****
// *******************************************************************************************

// ***********************************************************************************
// ****        DECLARACION DE VARIABLES - MATRIZ DE RECEPCION (MCP) PINES - LEDS  ****
// ***********************************************************************************

// ***********************************************************************************
// ****        DECLARACION DE VARIABLES - MATRIZ DE ENVIO (MCP) PINES - INTERRUPT ****
// ***********************************************************************************
#include "Global.h"

void Variables_MCP() {
		
	GrupoChipIN_MCP.Cant_Chips	= 3;
	GrupoChipIN_MCP.PinData		= 23;
	GrupoChipIN_MCP.PinClock	= 25;
	GrupoChipIN_MCP.PinLatch	= 27;

	// ***********************************************************************************
	// ****        DECLARACION DE VARIABLES - VARIABLES DE SWITCH (VALORES)           ****
	// ***********************************************************************************
	
	SwitchAT.AsignarChip(GrupoChipIN_MCP.Chip2, 5);
	SwitchFD1.AsignarChip(GrupoChipIN_MCP.Chip2, 4);
	SwitchDIS.AsignarChip(GrupoChipIN_MCP.Chip1, 0);
	SwitchFD2.AsignarChip(GrupoChipIN_MCP.Chip1, 6);

	SwitchAT.ComandoSerie (">SMCP_SATAR=");
	SwitchFD1.ComandoSerie(">SMCP_SFD1_=");
	SwitchDIS.ComandoSerie(">SMCP_SDISE=");
	SwitchFD2.ComandoSerie(">SMCP_SFD2_=");
		
	// **********************************************************************************
	// ****        DECLARACION DE VARIABLES - VARIABLES DE BOTONES (VALORES)         ****
	// **********************************************************************************

	BotonN1.AsignarChip		(GrupoChipIN_MCP.Chip2, 6);
	BotonSpeed.AsignarChip	(GrupoChipIN_MCP.Chip3, 5);
	BotonVNAV.AsignarChip	(GrupoChipIN_MCP.Chip3, 7);
	BotonLVLCHG.AsignarChip	(GrupoChipIN_MCP.Chip3, 3);
	BotonHDGSEL.AsignarChip	(GrupoChipIN_MCP.Chip2, 7);
	BotonLNAV.AsignarChip	(GrupoChipIN_MCP.Chip2, 3);
	BotonVORLOC.AsignarChip	(GrupoChipIN_MCP.Chip2, 2);
	BotonAPP.AsignarChip	(GrupoChipIN_MCP.Chip2, 1);
	BotonALTHLD.AsignarChip	(GrupoChipIN_MCP.Chip2, 0);
	BotonVS.AsignarChip		(GrupoChipIN_MCP.Chip1, 7);
	BotonCMDA.AsignarChip	(GrupoChipIN_MCP.Chip1, 2);
	BotonCWSA.AsignarChip	(GrupoChipIN_MCP.Chip1, 1);
	BotonCMDB.AsignarChip	(GrupoChipIN_MCP.Chip1, 4);
	BotonCWSB.AsignarChip	(GrupoChipIN_MCP.Chip1, 5);
	
	BotonN1.ComandoSerie	(">SMCP_BN1__=");
	BotonSpeed.ComandoSerie	(">SMCP_BSPEE=");
	BotonVNAV.ComandoSerie	(">SMCP_BVNAV=");
	BotonLVLCHG.ComandoSerie(">SMCP_BLVLC=");
	BotonHDGSEL.ComandoSerie(">SMCP_BHDGS=");
	BotonLNAV.ComandoSerie	(">SMCP_BLNAV=");
	BotonVORLOC.ComandoSerie(">SMCP_BVORL=");
	BotonAPP.ComandoSerie	(">SMCP_BAPP_=");
	BotonALTHLD.ComandoSerie(">SMCP_BALTH=");
	BotonVS.ComandoSerie	(">SMCP_BVS__=");
	BotonCMDA.ComandoSerie	(">SMCP_BCMDA=");
	BotonCWSA.ComandoSerie	(">SMCP_BCWSA=");
	BotonCMDB.ComandoSerie(	">SMCP_BCMDB=");
	BotonCWSB.ComandoSerie	(">SMCP_BCWSB=");
	
	// **********************************************************************************
	// ****        DECLARACION DE VARIABLES - VARIABLES DE PULSADORES (VALORES)      ****
	// **********************************************************************************

	PulsadorCO.AsignarChip(GrupoChipIN_MCP.Chip3, 4);
	PulsadorSP.AsignarChip(GrupoChipIN_MCP.Chip3, 6);
	PulsadorAL.AsignarChip(GrupoChipIN_MCP.Chip1, 3);
	
	PulsadorCO.ComandoSerie(">SMCP_PCO__=");
	PulsadorSP.ComandoSerie(">SMCP_PSPEE=");
	PulsadorAL.ComandoSerie(">SMCP_PALTI=");

	// ***********************************************************************************
	// ****        DECLARACION DE VARIABLES - VARIABLES DE POTENCIOMETROS (VALORES)   ****
	// ***********************************************************************************
	PoteCourse1.ComandoSerie(">SMCP_PCOU1=");
	PoteIASMach.ComandoSerie(">SMCP_PIASM=");
	PoteHeading.ComandoSerie(">SMCP_PHEAD=");
	PoteAltitud.ComandoSerie(">SMCP_PALTI=");
	PoteVS.ComandoSerie		(">SMCP_PVERS=");
	PoteCourse2.ComandoSerie(">SMCP_PCOU2=");


	
}













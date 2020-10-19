#include "VPant.h"

VPant::VPant(){}

void VPant::ImprimirReporte(vector <string> np, vector <int> c){
	ImprimirStringJustificado("\nNombre del Pantalon", 15);
	ImprimirStringJustificado("\nCantidad vendida", 15);
	ImprimirLineasBlanco(2);
	
	for(unsigned int i=0; i<np.size();i++){
		ImprimirStringJustificado(np[i], 15);
		ImprimirNroJustificado(c[i], 15);
		ImprimirLineasBlanco(1);
	}
	ImprimirLineasBlanco(2);
	Pausa();
}

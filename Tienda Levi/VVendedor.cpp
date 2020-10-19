#include "VVendedor.h"

Vvendedor::Vvendedor(){}

void Vvendedor::ImprimirVendedor(string n, string c, vector <string> ndias, vector <float> bsdia, float t){
	ImprimirString("\nNombre: ", n);
	ImprimirString("\nCedula: ", c);
	ImprimirStringJustificado("\nDia", 15);
	ImprimirStringJustificado("\nMonto Vendido", 20);
	ImprimirLineasBlanco(2);
	
	for(unsigned int i=0; i<bsdia.size();i++){
		ImprimirStringJustificado(ndias[i], 15);
		ImprimirNroDecimalJustificado(bsdia[i], 20);
		ImprimirLineasBlanco(1);
	}
	ImprimirNroDecimal("\nTotal remuneracion obtenida: ",t);
	ImprimirLineasBlanco(1);
	Pausa();
}

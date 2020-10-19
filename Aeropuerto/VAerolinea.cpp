#include "VAerolinea.h"

VAerolinea::VAerolinea(){}

void VAerolinea::ImprimirReporte(string r, string n, vector <int> c, vector <string> d, vector <float> t, float tt){
	ImprimirLineasBlanco(1);
	ImprimirString("\nRif: ", r);
	ImprimirString("\nNombre: ", n);
	ImprimirLineasBlanco(1);
	ImprimirStringJustificado("CODIGO", 6);
	ImprimirStringJustificado("DESCRIPCION DESTINO", 25);
	ImprimirStringJustificado("MONTO TASA", 15);
	ImprimirLineasBlanco(1);
	
	for(unsigned int i=0; i<c.size(); i++){
		ImprimirNroJustificado(c[i], 6);
		ImprimirStringJustificado(d[i],25);
		ImprimirNroDecimalJustificado(t[i], 15);
		ImprimirLineasBlanco(1);
	}
	ImprimirLineasBlanco(2);
	ImprimirNroDecimal("Monto total tasa: ", tt);
	ImprimirLineasBlanco(1);
	Pausa();
}

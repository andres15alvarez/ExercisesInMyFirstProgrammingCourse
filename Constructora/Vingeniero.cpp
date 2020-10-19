#include "Vingeniero.h"

Vingeniero::Vingeniero(){}

void Vingeniero::ImprimirIngeniero(string c, float m){
	Limpiar();
	ImprimirString("\nCedula: ", c);
	ImprimirNroDecimal("\nMonto total: ", m);
	ImprimirLineasBlanco(1);
	Pausa();
}

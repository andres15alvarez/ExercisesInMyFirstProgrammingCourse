#ifndef IVENDEDOR_H_
#define IVENDEDOR_H_
#include <string>
#include <iostream>
#include <stdio.h>
#include "Vendedor.h"
using namespace std;

class Ivendedor{
public:
	Ivendedor();
	string leerNombre();
	string leerCedula();
	float leerVentas();
	float leerSueldo();
	void reporte(string n, string c, float v, float s);
};
#endif /*IVENDEDOR_H_*/

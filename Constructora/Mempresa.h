#ifndef MEMPRESA_H_
#define MEMPRESA_H_
#include "Mingeniero.h"
#include <vector>
#include <algorithm>

class Empresa{
private:
	vector<Ingeniero> vingeniero;
public:
	Empresa();
	void SetIngeniero(int posicion, Ingeniero ing);
	Ingeniero GetIngeniero(int posicion);
	void IncluirIngeniero(Ingeniero ing);
	void OrdenarIng();
	int CantIng();
	int BuscarIng(string c);
	float Total();
	void GenerarVectores(vector<string> &auxced,
	                     vector<string> &auxnombre,
						 vector<int> &auxbobra,
						 vector<float> &auxbproduc,
						 vector<float> &auxmontototal);
};
#endif /*MEMPRESA_H_*/

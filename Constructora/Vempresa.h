#ifndef VEMPRESA_H_
#define VEMPRESA_H_
#include <vector>
#include "VGeneral.h"

class Vempresa:public VGeneral{
public:
	Vempresa();
	void ImprimirReporte(vector<string> &auxced,
	                     vector<string> &auxnombre,
						 vector<int> &auxbobra,
						 vector<float> &auxbproduc,
						 vector<float> &auxmontototal, float t);
};
#endif /*VEMPRESA_H_*/

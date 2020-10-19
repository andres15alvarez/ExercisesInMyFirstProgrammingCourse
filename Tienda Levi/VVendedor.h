#ifndef VVENDEDOR_H_
#define VVENDEDOR_H_
#include <vector>
#include "VGeneral.h"

class Vvendedor:public VGeneral{
public:
	Vvendedor();
	void ImprimirVendedor(string n, string c, vector<string> ndias, vector <float> bsdia, float t);
};
#endif /*VVENDEDOR_H_*/

#ifndef VPANTVENDIDO_H_
#define VPANTVENDIDO_H_
#include <vector>
#include "VGeneral.h"

class VPant:public VGeneral{
public:
	VPant();
	void ImprimirReporte(vector<string> np, vector <int> c);
};
#endif /*VPANTVENDIDO_H_*/

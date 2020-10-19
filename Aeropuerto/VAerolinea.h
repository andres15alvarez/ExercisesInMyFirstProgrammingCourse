#ifndef VAEROLINEA_H_
#define VAEROLINEA_H_
#include <vector>
#include "VGeneral.h"

class VAerolinea:public VGeneral{
public:
	VAerolinea();
	void ImprimirReporte(string r, string n, vector <int> c, vector <string> d, vector <float> t, float tt);
};
#endif /*VAEROLINEA_H_*/

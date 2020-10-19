#ifndef MVENDEDOR_H_
#define MVENDEDOR_H_
#include "MPersona.h"
#include <vector>

class MVendedor:public MPersona{
private:
	vector<float> bsdia;
public:
	MVendedor();
	void SetBsdia(int d, float bs);
	float GetBsdia(int d);
	vector <float> GetBscadadia();
	int CantDias();
	void ActualizarBs(int d, float bs);
	void InsertarBs(float bs);
	float TotalBs();
	float Comision();
};
#endif /*MVENDEDOR_H_*/

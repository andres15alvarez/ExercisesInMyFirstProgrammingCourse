#ifndef MINGENIERO_H_
#define MINGENIERO_H_
#include "MPersona.h"
#include "Mobra.h"

class Ingeniero:public MPersona{
private:
	int ncolegio, cant, bobra;
	float bproduc, porc;
	
public:
	Ingeniero();
	void SetNcolegio(int n);
	int GetNcolegio();
	void SetCant(int n);
	int GetCant();
	void SetBproduc(float n);
	float GetBproduc();
	void SetBobra(int n);
	int GetBobra();
	void SetPorc(float n);
	float GetPorc();
	void Procesar(Obra obr);
	float MontoTotal();
};
#endif /*MINGENIERO_H_*/

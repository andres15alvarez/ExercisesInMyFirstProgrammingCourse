#ifndef MDESTINO_H_
#define MDESTINO_H_
#include <string>
using namespace std;

class MDestino{
private:
	int codigo, tipo;
	string desc;
	float precio;
public:
	MDestino();
	void SetCodigo(int n);
	int GetCodigo();
	void SetTipo(int n);
	int GetTipo();
	void SetDesc(string n);
	string GetDesc();
	void SetPrecio(float n);
	float GetPrecio();
};
#endif /*MDESTINO_H_*/

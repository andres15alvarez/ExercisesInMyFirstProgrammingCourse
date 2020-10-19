#ifndef MOBRA_H_
#define MOBRA_H_
#include <string>
using namespace std;

class Obra{
private:
	string ubicacion;
	int tipo, testimado, tculminacion, status;
	float monto;
public:
	Obra();
	void SetUbicacion(string n);
	string GetUbicacion();
	void SetTipo(int n);
	int GetTipo();
	void SetTestimado(int n);
	int GetTestimado();
	void SetTculminacion(int n);
	int GetTculminacion();
	void SetStatus(int n);
	int GetStatus();
	void SetMonto(float n);
	float GetMonto();
	float Porcentaje();
	float Produccion();
	int Ejecutada();
};
#endif /*MOBRA_H_*/

#ifndef VENDEDOR_H_	
#define VENDEDOR_H_
#include <string>
#include <iomanip>
using namespace std;

class Vendedor{
private:

	string nombre, cedula;
	float ventas;
    float sueldo;
public:
	Vendedor();
	void setNombre(string c);
	string getNombre();
	void setCedula(string c);
	string getCedula();
	void setSueldo(float c);
	float getSueldo();
	void setVentas(float c);
	float getVentas();
	float Comi();
	float SueldoT();
};
#endif /*VENDEDOR_H_*/

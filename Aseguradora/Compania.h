#ifndef COMPANIA_H_
#define COMPANIA_H_
#include "Vendedor.h"

class Compania{
private:
	float monto;
	float ventasT;
public:
	Compania();
	void setVentasT(float c);
	float getVentasT();
	void setMonto(float c);
	float getMonto();
	void Procesar(Vendedor ven);
};
#endif /*COMPANIA_H_*/

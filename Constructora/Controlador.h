#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "Mempresa.h"
#include "Vingeniero.h"
#include "Vempresa.h"

class Controlador{
private:
	Empresa emp;
	Vempresa vemp;
public:
	Controlador();
	void ProcesarIngeniero();
	void ReportarEmpresa();
};
#endif /*CONTROLADOR_H_*/

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MTienda.h"
#include "VVendedor.h"
#include "VPant.h"
#include "VTienda.h"

class Controlador{
private:
	bool chequeocarga;
	bool chequeoproceso;
	MTienda mt;
	VTienda vt;
	Vvendedor vv;
public:
	Controlador();
	void CargarArchivos();
	void ProcesarVendedores();
	void ReportePantalones();
	void ReporteVendedores();
};
#endif /*CONTROLADOR_H_*/

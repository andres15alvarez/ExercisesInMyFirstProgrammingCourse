#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MAeropuerto.h"
#include "VAerolinea.h"
#include "VAeropuerto.h"

class Controlador{
private:
	VAeropuerto va;
	MAeropuerto mae;
	bool chequeocarga;
	bool chequeoproceso;
public:
	Controlador();
	void CargarArchivos();
	void ProcesarViaje();
	void Reportar();
};
#endif /*CONTROLADOR_H_*/

#ifndef MAEROPUERTO_H_
#define MAEROPUERTO_H_
#include <vector>
#include "MAerolinea.h"
#include "MDestino.h"
#include "MVRealizado.h"

class MAeropuerto{
private:
	vector <MDestino> vdestino;
	vector <MAerolinea> vaerolinea;
public:
	MAeropuerto();
	void SetMDestino(MDestino md, int p);
	MDestino GetMDestino(int p);
	void IncluirDestino(MDestino md);
	int CantDestino();
	
	void SetMAerolinea(MAerolinea ma, int p);
	MAerolinea GetMAerolinea(int p);
	int BuscarAerolinea(string r);
	void IncluirAerolinea(MAerolinea ma);
	int CantAerolinea();
	
	float Tasa(MVRealizado mv);
	void ProcesarViajes(MVRealizado mv, int pv);
	void GenerarVectores(vector <int> &auxcode, vector <string> &auxdesc);
	float TasaAeropuerto();
};
#endif /*MAEROPUERTO_H_*/

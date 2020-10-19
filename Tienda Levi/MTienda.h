#ifndef MTIENDA_H_
#define MTIENDA_H_
#include <vector>
#include "MPantVendido.h"
#include "MArticulo.h"
#include "MVendedor.h"

class MTienda{
private:
	vector <MVendedor> VecVendedor;
	vector <MArticulo> VPantalon;
public:
	MTienda();
	
	void SetVecVendedor(MVendedor mv, int p);
	MVendedor GetVecVendedor(int p);
	void IncluirVendedor(MVendedor mv);
	int CantVendedores();
	int BuscarVendedores(string c);
	
	void SetVPantalon(MArticulo mp, int p);
	MArticulo GetVPantalon(int p);
	void IncluirPantalon(MArticulo mp);
	int CantPantalon();
	
	float TotalBsSemana();
	string DiaSemana(int d);
	vector <string> GenerarVector();
	void ProcesarPant(MPantVendido mpv, int pv);
};
#endif /*MTIENDA_H_*/

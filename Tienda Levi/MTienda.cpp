#include "MTienda.h"

MTienda::MTienda(){}

void MTienda::SetVecVendedor(MVendedor mv, int p){
	VecVendedor[p]=mv;
}
MVendedor MTienda::GetVecVendedor(int p){
	return VecVendedor[p];
}
void MTienda::IncluirVendedor(MVendedor mv){
	VecVendedor.push_back(mv);
}
int MTienda::CantVendedores(){
	return VecVendedor.size();
}
int MTienda::BuscarVendedores(string c){
	for(int i=0;i<CantVendedores();i++){
		if(VecVendedor[i].GetCedula()==c)
			return i;
	return -1;
	}
}
void MTienda::SetVPantalon(MArticulo mp,int p){
	VPantalon[p]=mp;
}
MArticulo MTienda::GetVPantalon(int p){
	return VPantalon[p];
}
void MTienda::IncluirPantalon(MArticulo mp){
	VPantalon.push_back(mp);
}
int MTienda::CantPantalon(){
	return VPantalon.size();
}
float MTienda::TotalBsSemana(){
	float t=0;
	for(int i=0;i<CantVendedores();i++)
	    t += VecVendedor[i].TotalBs();
	return t;
}
string MTienda::DiaSemana(int d){
	switch(d){
		case 1: return "Lunes";
		case 2: return "Martes";
		case 3: return "Miercoles";
		case 4: return "Jueves";
		case 5: return "Viernes";
		case 6: return "Sabado";
	}
}
vector <string> MTienda::GenerarVector(){
	vector <string> aux;
	for(int i=1; i<7; i++)
		aux.push_back(DiaSemana(i));
	return aux;
}
void MTienda::ProcesarPant(MPantVendido mpv, int pv){
	VecVendedor[pv].ActualizarBs(mpv.GetDia()-1, VPantalon[mpv.GetCodigo()-1].GetPvp());
}

#include "MAeropuerto.h"

MAeropuerto::MAeropuerto(){}

void MAeropuerto::SetMDestino(MDestino md, int p){
	vdestino[p] =md;
}
MDestino MAeropuerto::GetMDestino(int p){
	return vdestino[p];
}
void MAeropuerto::IncluirDestino(MDestino md){
	vdestino.push_back(md);
}
int MAeropuerto::CantDestino(){
	return vdestino.size();
}
void MAeropuerto::SetMAerolinea(MAerolinea ma, int p){
	vaerolinea[p]=ma;
}
MAerolinea MAeropuerto::GetMAerolinea(int p){
	return vaerolinea[p];
}
int MAeropuerto::CantAerolinea(){
	return vaerolinea.size();
}
int MAeropuerto::BuscarAerolinea(string r){
	for(int i=0;i<CantAerolinea();i++)
		if(vaerolinea[i].GetRif()==r)
			return i;
	return -1;		
}
void MAeropuerto::IncluirAerolinea(MAerolinea ma){
	vaerolinea.push_back(ma);
}
float MAeropuerto::Tasa(MVRealizado mv){
	if(vdestino[mv.GetCode()-1].GetTipo()==1)
		return mv.GetCantPasajeros()*0.001*vdestino[mv.GetCode()-1].GetPrecio();
	else
		return mv.GetCantPasajeros()*0.005*vdestino[mv.GetCode()-1].GetPrecio();
}
void MAeropuerto::ProcesarViajes(MVRealizado mv, int pv){
	vaerolinea[pv].ActualizarTasa(mv.GetCode()-1, Tasa(mv));
}
void MAeropuerto::GenerarVectores(vector <int> &auxcode, vector <string> &auxdesc){
	for(int i=0; i<CantDestino(); i++){
		auxcode.push_back(vdestino[i].GetCodigo());
		auxdesc.push_back(vdestino[i].GetDesc());
	}
}
float MAeropuerto::TasaAeropuerto(){
	float ac=0;
	for(int i=0; i<CantAerolinea(); i++)
		ac+=vaerolinea[i].TasaTotal();
	return ac;
}


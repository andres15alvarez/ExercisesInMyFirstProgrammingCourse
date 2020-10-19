#include "Mingeniero.h"

Ingeniero::Ingeniero(){
	bproduc=0;
	bobra=0;
	porc=0;
}
void Ingeniero::SetBobra(int n){
	bobra=n;
}
int Ingeniero::GetBobra(){
	return bobra;
}
void Ingeniero::SetBproduc(float n){
	bproduc=n;
}
float Ingeniero::GetBproduc(){
	return bproduc;
}
void Ingeniero::SetCant(int n){
	cant=n;
}
int Ingeniero::GetCant(){
	return cant;
}
void Ingeniero::SetNcolegio(int n){
	ncolegio=n;
}
int Ingeniero::GetNcolegio(){
	return ncolegio;
}
void Ingeniero::SetPorc(float n){
	porc=n;
}
float Ingeniero::GetPorc(){
	return porc;
}
void Ingeniero::Procesar(Obra obr){
	if(cant>=2 && obr.GetStatus()==1)
		bobra+=obr.Ejecutada();
	bproduc+=obr.Produccion();
	porc+=obr.Porcentaje();
}
float Ingeniero::MontoTotal(){
	return porc+bobra+bproduc;
}

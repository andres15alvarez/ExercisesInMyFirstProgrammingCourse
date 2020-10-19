#include "Mobra.h"

Obra::Obra(){}

void Obra::SetUbicacion(string n){
	ubicacion=n;
}
string Obra::GetUbicacion(){
	return ubicacion;
}
void Obra::SetStatus(int n){
	status=n;
}
int Obra::GetStatus(){
	return status;
}
void Obra::SetTipo(int n){
	tipo=n;
}
int Obra::GetTipo(){
	return tipo;
}
void Obra::SetTculminacion(int n){
	tculminacion=n;
}
int Obra::GetTculminacion(){
	return tculminacion;
}
void Obra::SetTestimado(int n){
	testimado=n;
}
int Obra::GetTestimado(){
	return testimado;
}
void Obra::SetMonto(float n){
	monto=n;
}
float Obra::GetMonto(){
	return monto;
}
float Obra::Porcentaje(){
	if(tipo==1)
		return monto*0.035;
	else if(tipo==2)
		return monto*0.045;
	else if(tipo==3)
		return monto*0.025;
	else
		return monto*0.05;
}
float Obra::Produccion(){
	int aux=testimado-tculminacion;
	if(aux>0)
		return monto*0.005;
	else return 0;
}
int Obra::Ejecutada(){
	if(status==1)
		return 45000;
	else return 0;
}

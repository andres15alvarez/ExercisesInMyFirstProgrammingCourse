#include "MDestino.h"

MDestino::MDestino(){}

void MDestino::SetCodigo(int n){
	codigo=n;
}
int MDestino::GetCodigo(){
	return codigo;
}
void MDestino::SetDesc(string n){
	desc=n;
}
string MDestino::GetDesc(){
	return desc;
}
void MDestino::SetPrecio(float n){
	precio=n;
}
float MDestino::GetPrecio(){
	return precio;
}
void MDestino::SetTipo(int n){
	tipo=n;
}
int MDestino::GetTipo(){
	return tipo;
}

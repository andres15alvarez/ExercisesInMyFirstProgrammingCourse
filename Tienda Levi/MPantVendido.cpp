#include "MPantVendido.h"

MPantVendido::MPantVendido(){}

void MPantVendido::SetCodigo(int n){
	codigo=n;
}
int MPantVendido::GetCodigo(){
	return codigo;
}
void MPantVendido::SetCant(int n){
	cant=n;
}
int MPantVendido::GetCant(){
	return cant;
}
void MPantVendido::SetDia(int n){
	dia=n;
}
int MPantVendido::GetDia(){
	return dia;
}

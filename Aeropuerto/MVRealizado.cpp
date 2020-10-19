#include "MVRealizado.h"

MVRealizado::MVRealizado(){}

void MVRealizado::SetCantPasajeros(int n){
	cantpasajeros=n;
}
	
void MVRealizado::SetCode(int n){
	code=n;
}
	
void MVRealizado::SetNro(int n){
	nro=n;
}
int MVRealizado::GetCantPasajeros(){
	return cantpasajeros;
}
int MVRealizado::GetCode(){
	return code;
}
int MVRealizado::GetNro(){
	return nro;
}	

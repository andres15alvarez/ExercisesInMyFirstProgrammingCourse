#include "Vendedor.h"

Vendedor::Vendedor(){}

void Vendedor::setNombre(string c){
	nombre=c;
}
string Vendedor::getNombre(){
	return nombre;
}
void Vendedor::setCedula(string c){
	cedula=c;
}
string Vendedor::getCedula(){
	return cedula;
}
void Vendedor::setSueldo(float c){
	sueldo=c;
}
float Vendedor::getSueldo(){
	return sueldo;
}
void Vendedor::setVentas(float c){
	ventas=c;
}
float Vendedor::getVentas(){
	return ventas;
}
float Vendedor::Comi(){
	if(ventas<=1000000)
		return ventas*5/100;
	else if(ventas>1000000 && ventas<5000000)
		return ventas*7/100;
	else
		return ventas*10/100;
}
float Vendedor::SueldoT(){
	return sueldo+Comi();
}

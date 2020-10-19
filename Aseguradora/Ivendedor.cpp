#include "Ivendedor.h"

Ivendedor::Ivendedor(){}

string Ivendedor::leerNombre(){
	string c;
	cout <<"Ingrese su nombre: ";
	cin.ignore();
	getline(cin, c);
	return c;
}
string Ivendedor::leerCedula(){
	string c;
	cout <<"Ingrese su cedula: ";
	cin >> c;
	return c;
}
float Ivendedor::leerSueldo(){
	float c;
	cout <<"Ingrese su sueldo base: ";
	cin >> c;
	return c;
}
float Ivendedor::leerVentas(){
	float c;
	cout <<"Ingrese sus ventas: ";
	cin >> c;
	return c;
}
void Ivendedor::reporte(string n, string c, float v, float s){
	cout <<"Reporte Vendedor";
	cout <<"\nNombre: "<<n;
	cout <<"\nCedula: "<<c;
	cout <<setiosflags(ios::fixed)<<setprecision(2)<<"\nVentas: "<<v;
	cout <<"\nSueldo neto: "<<s;
}

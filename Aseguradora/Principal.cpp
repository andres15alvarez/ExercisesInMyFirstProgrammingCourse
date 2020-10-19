#include "Vendedor.h"
#include "Compania.h"
#include "Ivendedor.h"
#include "Icompania.h"

int main(){ 
	Vendedor ven;
	Compania com;
	Ivendedor iven;
	Icompania icom;
	
	string nombre, cedula;
	float ventas, sueldo;
	int resp;
	
	cout <<"Hay datos si.1 no.2 : ";
	cin >> resp;
	while(resp==1){
		nombre=iven.leerNombre();
		cedula=iven.leerCedula();
		ventas=iven.leerVentas();
		sueldo=iven.leerSueldo();
		ven.setNombre(nombre);
		ven.setCedula(cedula);
		ven.setVentas(ventas);
		ven.setSueldo(sueldo);
		com.Procesar(ven);
		iven.reporte(ven.getNombre(), ven.getCedula(), ven.getVentas(), ven.SueldoT());
		cout <<"\nHay mas datos si.1 no.2 : ";
		cin >> resp;
	}
	
	icom.reportec(com.getVentasT(), com.getMonto());
	system("PAUSE");
	return 0;
		
}

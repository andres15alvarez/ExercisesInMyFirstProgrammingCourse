#include "Icompania.h"

Icompania::Icompania(){}

void Icompania::reportec(float v, float m){
	cout <<"Reporte Aseguradora";
	cout <<setiosflags(ios::fixed)<<setprecision(2)<<"\nVentas totales: "<<v;
	cout <<setiosflags(ios::fixed)<<setprecision(2)<<"\nMonto de la nomina: "<<m;
	cout <<"\n";
}

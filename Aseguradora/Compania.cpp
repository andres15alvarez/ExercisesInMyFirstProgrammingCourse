#include "Compania.h"

Compania::Compania(){
	ventasT=0.0;
	monto=0.0;
}
void Compania::setVentasT(float c){
	ventasT=c;
}
float Compania::getVentasT(){
	return ventasT;
}
void Compania::setMonto(float c){
	monto=c;
}
float Compania::getMonto(){
	return monto;
}
void Compania::Procesar(Vendedor ven){
	ventasT+=ven.getVentas();
	monto+=ven.SueldoT();
}

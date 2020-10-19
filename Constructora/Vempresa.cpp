#include "Vempresa.h"

Vempresa::Vempresa(){}

void Vempresa::ImprimirReporte(vector<string> &auxced,
	                     vector<string> &auxnombre,
						 vector<int> &auxbobra,
						 vector<float> &auxbproduc,
						 vector<float> &auxmontototal, float t){
						 	Limpiar();
						 	ImprimirEncabezado("\nCONSTRUCTORA CONCEMEX \n BARQUISIMETO ","======================");
						 	ImprimirStringJustificado("CEDULA",8);
						 	ImprimirStringJustificado("NOMBRE",20);
						 	ImprimirStringJustificado("BONO OBRA",12);
						 	ImprimirStringJustificado("BONO PRODUCCION",16);
						 	ImprimirStringJustificado("MONTO TOTAL",18);
						 	ImprimirLineasBlanco(1);
						 	
						 	for(int i=0;i<auxced.size();i++){
						 		ImprimirStringJustificado(auxced[i],8);
						 		ImprimirStringJustificado(auxnombre[i],20);
						 		ImprimirNroJustificado(auxbobra[i],12);
						 		ImprimirNroDecimalJustificado(auxbproduc[i],16);
						 		ImprimirNroDecimalJustificado(auxmontototal[i],18);
						 		ImprimirLineasBlanco(1);
							 }
							 ImprimirNroDecimal("\nTotal de remuneracion: ",t);
							 ImprimirLineasBlanco(1);
							 Pausa();
						 }

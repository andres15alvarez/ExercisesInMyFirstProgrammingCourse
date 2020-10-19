#include "Controlador.h"

int main(){
	int opc;
	VGeneral vg;
	Controlador c;
	do{
		vg.Limpiar();
		vg.ImprimirLineasBlanco(3);
		vg.ImprimirMensaje("\nTIENDA DE PANTALONES LEVI");
		vg.ImprimirEncabezado("MENU  OPCIONES",
		                      "===============");
		vg.ImprimirMensaje("\n1.CARGAR ARCHIVOS");
		vg.ImprimirMensaje("\n2.PROCESAR VENDEDORES");
		vg.ImprimirMensaje("\n3.REPORTE PANTALONES VENDIDOS");
		vg.ImprimirMensaje("\n4.REPORTE VENDEDORES");
		vg.ImprimirMensaje("\n5.SALIR");
		opc=vg.LeerValidarNro("\n\nIngrese su opcion: ",1,5);
		switch(opc){
			case 1: c.CargarArchivos();
					break;
			case 2: c.ProcesarVendedores();
					break;
			case 3: c.ReportePantalones();
					break;
			case 4: c.ReporteVendedores();
					break;	
		}
	}while(opc!=5);
	return 0;
}

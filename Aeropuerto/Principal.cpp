#include "Controlador.h"

int main(){
	Controlador c;
	VGeneral vg;
	int opc;
	do{
		vg.Limpiar();
		vg.ImprimirLineasBlanco(3);
		vg.ImprimirMensaje("\nAEROPUERTO INTERNACIONAL JACINTO LARA");
		vg.ImprimirEncabezado("\nMENU  OPCIONES",
		                      "===============");
		vg.ImprimirMensaje("\n1.CARGAR ARCHIVOS");
		vg.ImprimirMensaje("\n2.PROCESAR AEROLINEAS");
		vg.ImprimirMensaje("\n3.REPORTE AEROLINEAS");
		vg.ImprimirMensaje("\n4.SALIR");
		opc=vg.LeerValidarNro("\n\nIngrese su opcion: ",1,4);
		switch(opc){
			case 1: c.CargarArchivos();
					break;
			case 2: c.ProcesarViaje();
					break;
			case 3: c.Reportar();
					break;
		}
	}while(opc!=4);
	return 0;
}

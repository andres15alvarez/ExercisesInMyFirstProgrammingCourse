#include "Controlador.h"
int main(){
	int opc;
	Controlador c;
	VGeneral vg;
	
	do{
		vg.Limpiar();
		vg.ImprimirEncabezado("\nMENU OPCIONES \n CONCEMEX","===============");
		vg.ImprimirMensaje("\n1.Procesar Ingeniero");
		vg.ImprimirMensaje("\n2.Reportar Empresa");
		vg.ImprimirMensaje("\n3.Salir");
		opc = vg.LeerValidarNro("\nIngrese su opcion : ",1,3);
     switch (opc)
    {   case 1: c.ProcesarIngeniero();
                  break;
        case 2: c.ReportarEmpresa();
                  break;
     }
	}
	while(opc!=3);
	return 0;
}

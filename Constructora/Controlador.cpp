#include "Controlador.h"

Controlador::Controlador(){}

void Controlador::ProcesarIngeniero(){
	Obra obr;
	Vingeniero ving;
	Ingeniero ing;
	vemp.Limpiar();
	vemp.ImprimirEncabezado("\nDATOS DEL INGENIERO","================");
	string c=vemp.LeerString("\n Cedula : ");
	ing.SetCedula(c);
	int posicion=emp.BuscarIng(c);
	if(posicion!=-1){
		vemp.ImprimirMensaje("Ya existe el ingeniero\n");
		vemp.Pausa();
		return;}
	string nombre=vemp.LeerString("\nNombre: ");
	int nrocolegio=vemp.LeerNro("\nNumero colegio de ingenieros: ");
	int cant=vemp.LeerNro("\nCantidad de obras: ");
	ing.SetNombre(nombre);
	ing.SetNcolegio(nrocolegio);
	ing.SetCant(cant);
	for(int i=0;i<ing.GetCant();i++){
		ving.Limpiar();
		string ubi=ving.LeerString("\nUbicacion de la obra: ");
		int tipo=ving.LeerValidarNro("\n1.Via terrestre de comnicacion \n2.Edificacion \n3.Obra sanitaria \n4.Obra hidraulica \nIngrese tipo de obra: ",1,4);
		int status=ving.LeerValidarNro("\n1.Ejecutada \n2.En ejecucion \nIngrese status: ",1,2);
		int test=ving.LeerValidarNroValorInicial("\nIngrese tiempo estimado en dias: ",1);
		if(status!=2)
			int tcul=ving.LeerValidarNroValorInicial("\nIngrese tiempo de culminacion en dias: ",1);
		int tcul=0;
		float monto=ving.LeerNroDecimal("\nIngrese monto de la obra: ");
		obr.SetUbicacion(ubi);
		obr.SetTipo(tipo);
		obr.SetStatus(status);
		obr.SetTestimado(test);
		obr.SetTculminacion(tcul);
		obr.SetMonto(monto);
		ing.Procesar(obr);
	}
	emp.IncluirIngeniero(ing);
	ving.ImprimirIngeniero(ing.GetCedula(), ing.MontoTotal());
}

void Controlador::ReportarEmpresa(){
	if(emp.CantIng()==0){
		vemp.Limpiar();
		vemp.ImprimirMensaje("\nNo hay ingenieros...");
		vemp.Pausa();
		return;
	}
	emp.OrdenarIng();
	vector<string> auxced;
	vector<string> auxnombre;
	vector<int> auxbobra;
	vector<float> auxbproduc;
	vector<float> auxmontototal;
	emp.GenerarVectores(auxced, auxnombre, auxbobra, auxbproduc, auxmontototal);
	vemp.ImprimirReporte(auxced, auxnombre, auxbobra, auxbproduc, auxmontototal, emp.Total());
}

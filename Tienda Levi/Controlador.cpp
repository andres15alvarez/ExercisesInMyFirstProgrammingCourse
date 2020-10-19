#include "Controlador.h"

Controlador::Controlador(){
	chequeocarga=false;
	chequeoproceso = false;
}

void Controlador::CargarArchivos(){
	string nombre;
	float precio;
	ifstream archpant;
	MArticulo mp;
	char narchivo[128];
	vt.Limpiar();
	vt.LeerNombreArchivo("\nIngrese el nombre del archivo con datos de los Pantalones (EJ: pantalones.txt): ", narchivo);
	
	if(!vt.AbrirArchivoEntrada(archpant, narchivo)){
		vt.ImprimirMensaje("\nERROR: No existe el archivo");
		vt.Pausa();
		return;
	}
	
	nombre= vt.LeerLineaArchivo(archpant);
	if(vt.FinArchivo(archpant)){
		vt.ImprimirMensaje("\nERROR: No hay datos en el archivo");
		vt.Pausa();
		return;
	}
	
	while(!vt.FinArchivo(archpant)){
		precio= vt.LeerDatoNroDecimalArchivo(archpant);
		mp.SetCodigo(nombre);
		mp.SetPvp(precio);
		mt.IncluirPantalon(mp);
		nombre=vt.LeerLineaArchivo(archpant);
	}
	vt.CerrarArchivoEntrada(archpant);
	vt.ImprimirMensaje("\nArchivos cargados exitosamente...");
	vt.Pausa();
	
	string cedula, name;
	ifstream archvend;
	MVendedor mv;
	vt.Limpiar();
	vt.LeerNombreArchivo("\nIngrese el nombre del archivo con datos de los Vendedores (EJ: vendedores.txt): ", narchivo);
	
	if(!vt.AbrirArchivoEntrada(archvend, narchivo)){
		vt.ImprimirMensaje("\nERROR: No existe el archivo");
		vt.Pausa();
		return;
	}
	
	cedula=vt.LeerLineaArchivo(archvend);
	if(vt.FinArchivo(archvend)){
		vt.ImprimirMensaje("\nERROR: No hay datos en el archivo");
		vt.Pausa();
		return;
	}
	
	while(!vt.FinArchivo(archvend)){
		name=vt.LeerLineaArchivo(archvend);
		mv.SetCedula(cedula);
		mv.SetNombre(name);
		mt.IncluirVendedor(mv);
		cedula=vt.LeerLineaArchivo(archvend);
	}
	vt.CerrarArchivoEntrada(archvend);
	vt.ImprimirMensaje("\nArchivos cargados exitosamente...");
	vt.Pausa();
	chequeocarga=true;
}

void Controlador::ProcesarVendedores(){
	string cedula, nombre;
	int dia, codigo, cant;
	MPantVendido mpv;
	MVendedor mv;
	VPant vp;
	vt.Limpiar();
	
	if(!chequeocarga){
		vt.ImprimirMensaje("\nNo hay datos cargados");
		vt.Pausa();
		return;
	}
	do{
		vt.Limpiar();
		vt.ImprimirEncabezado("DATOS DEL VENDEDOR",
								"===================");
		cedula= vv.LeerString("\nCedula: ");
		int p= mt.BuscarVendedores(cedula);
		if(p==-1){
			vt.Limpiar();
			vt.ImprimirMensaje("\nEl vendedor no esta registrado");
			vt.Pausa();
		} 
		else{
			int res=vt.LeerValidarNro("\nHay Pantalones vendido? 1.SI 2.NO",1,2);
			while(res==1){
				vt.Limpiar();
				vt.ImprimirEncabezado("DATOS DE LA VENTA",
				                      "==================");
				codigo= vt.LeerValidarNro("\nIngrese el codigo del Pantalon (1 al 14): ",1,14);
				cant= vt.LeerValidarNroValorInicial("\nIngrese la cantidad vendida: ",1);
				dia = vt.LeerValidarNro("\nIngrese el dia (1 al 6): ",1,6);
				mpv.SetCodigo(codigo);
				mpv.SetCant(cant);
				mpv.SetDia(dia);
				
				mt.ProcesarPant(mpv, p);
				res=vt.LeerValidarNro("\nHay Pantalones vendido? 1.SI 2.NO",1,2);
			}
		}
		int resp = vt.LeerValidarNro("\nHay mas vendedores? 1.SI 2.NO",1,2);
	}
	while(resp==1);
	chequeoproceso=true;
}

void Controlador::ReportePantalones(){
	if(!chequeocarga){
		vt.ImprimirMensaje("\nNo hay datos cargados");
		vt.Pausa();
		return
	}
	vt.Limpiar();
	vt.ImprimirEncabezado("\nREPORTE DE PANTALONES VENDIDOS",
	                      "================================");
	for(int i=0; i<13; i++){
		MArticulo mp = mt.GetVPantalon(i);
		vp.ImprimirReporte(mp.GetCodigo(), mpv.GetCant());
	}
	vt.ImprimirLineasBlanco(1);
	vt.Pausa();
}
void Controlador::ReporteVendedores(){
	if(!chequeocarga){
		vt.ImprimirMensaje("\nNo hay datos cargados");
		vt.Pausa();
		return
	}
	vt.Limpiar();
	vt.ImprimirEncabezado("\nREPORTE DE VENDEDORES",
	                      "=======================");
	for(int i=0; i<mt.CantVendedores(); i++){
		MVendedor mv = mt.GetVecVendedor(i);
		vv.ImprimirVendedor(mv.GetNombre(), mv.GetCedula(), mt.GenerarVector(), mv.GetBscadadia(), mv.Comision());
	}
	vt.ImprimirLineasBlanco(1);
	vt.ImprimirMensaje("\nREPORTE TIENDA");
	vt.ImprimirNroDecimal("\nTotal vendido en la semana: ", mt.TotalBsSemana());
}


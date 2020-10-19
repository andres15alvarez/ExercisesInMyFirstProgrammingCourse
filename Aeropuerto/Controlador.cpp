#include "Controlador.h"

Controlador::Controlador(){
	chequeocarga=false;
	chequeoproceso=false;
}

void Controlador::CargarArchivos(){
	string desc;
	int codigo, tipo;
	float precio;
	ifstream archdest;
	MDestino md;
	char narchivo[128];
	va.Limpiar();
	va.LeerNombreArchivo("\nIngrese el nombre del archivo con datos de los Destinos (EJ: destino.txt): ", narchivo);
	
	if(!va.AbrirArchivoEntrada(archdest, narchivo)){
		va.ImprimirMensaje("\nERROR: No existe el archivo\n");
		va.Pausa();
		return;
	}
	
	codigo= va.LeerDatoNroArchivo(archdest);
	if(va.FinArchivo(archdest)){
		va.ImprimirMensaje("\nERROR: No hay datos en el archivo\n");
		va.Pausa();
		return;
	}
	
	while(!va.FinArchivo(archdest)){
		desc= va.LeerLineaArchivo(archdest);
		precio=va.LeerDatoNroDecimalArchivo(archdest);
		tipo=va.LeerDatoNroArchivo(archdest);
		md.SetCodigo(codigo);
		md.SetDesc(desc);
		md.SetPrecio(precio);
		md.SetTipo(tipo);
		mae.IncluirDestino(md);
		codigo=va.LeerDatoNroArchivo(archdest);
	}
	va.CerrarArchivoEntrada(archdest);
	va.ImprimirMensaje("\nArchivos cargados exitosamente...\n");
	va.Pausa();
	
	string rif, name;
	ifstream archaero;
	MAerolinea ma;
	va.Limpiar();
	va.LeerNombreArchivo("\nIngrese el nombre del archivo con datos de las Aerolineas (EJ: aerolineas.txt): ", narchivo);
	
	if(!va.AbrirArchivoEntrada(archaero, narchivo)){
		va.ImprimirMensaje("\nERROR: No existe el archivo\n");
		va.Pausa();
		return;
	}
	
	rif=va.LeerLineaArchivo(archaero);
	if(va.FinArchivo(archaero)){
		va.ImprimirMensaje("\nERROR: No hay datos en el archivo\n");
		va.Pausa();
		return;
	}
	
	while(!va.FinArchivo(archaero)){
		name=va.LeerLineaArchivo(archaero);
		ma.SetRif(rif);
		ma.SetNombre(name);
		mae.IncluirAerolinea(ma);
		rif=va.LeerLineaArchivo(archaero);
	}
	va.CerrarArchivoEntrada(archaero);
	va.ImprimirMensaje("\nArchivos cargados exitosamente...\n");
	va.Pausa();
	chequeocarga=true;	
}
void Controlador::ProcesarViaje(){
	string rif;
	int cantp, codigo, nro, resp, p;
	MVRealizado mv;
	MDestino md;
	MAerolinea ma;
	
	if(!chequeocarga){
		va.ImprimirMensaje("\nNo hay datos cargados\n");
		va.Pausa();
		return;
	}
	do{
		va.Limpiar();
		va.ImprimirEncabezado("DATOS DE LA AEROLINEA",
								"===================");
		rif= va.LeerString("\nRIF: ");
		p= mae.BuscarAerolinea(rif);
		if(p==-1){
			va.ImprimirMensaje("\nLa aerolinea no esta registrada\n");
			va.Pausa();
		} 
		else{
			if(mae.GetMAerolinea(p).TasaTotal()!=0){
			va.ImprimirMensaje("\nLa aerolinea ya se proceso");
			}
			else{
			int res=va.LeerValidarNro("\nHay Viajes realizados? 1.SI 2.NO: ",1,2);
			while(res==1){
				va.Limpiar();
				va.ImprimirEncabezado("DATOS DEL VIAJE",
				                      "==================");
				codigo= va.LeerValidarNro("\nIngrese el codigo del Viaje (1 al 6): ",1,6);
				cantp= va.LeerValidarNroValorInicial("\nIngrese la cantidad de pasajeros: ",1);
				nro= va.LeerNro("\nIngrese el numero del viaje: ");
				mv.SetCode(codigo);
				mv.SetCantPasajeros(cantp);
				mv.SetNro(nro);
				
				mae.ProcesarViajes(mv, p);
				res=va.LeerValidarNro("\nHay Viajes realizados? 1.SI 2.NO: ",1,2);
			}
			}
		}
		resp = va.LeerValidarNro("\nHay mas Aerolineas? 1.SI 2.NO: ",1,2);
	}
	while(resp==1);
	chequeoproceso=true;
}
void Controlador::Reportar(){
	if(!chequeocarga){
		va.ImprimirMensaje("\nNo hay datos cargados\n");
		va.Pausa();
		return;
	}
	VAerolinea vae;
	vector <int> auxcode;
	vector <string> auxdesc;
	mae.GenerarVectores(auxcode, auxdesc);
	va.Limpiar();
	for(int i=0; i<mae.CantAerolinea(); i++){
		MAerolinea ma=mae.GetMAerolinea(i);
		vae.ImprimirReporte(ma.GetRif(), ma.GetNombre(), auxcode, auxdesc, ma.GetCodeTasa(), ma.TasaTotal());
	}
	va.ImprimirLineasBlanco(1);
	va.ImprimirNroDecimal("\nTasa total aeropuerto: ", mae.TasaAeropuerto());
	va.ImprimirLineasBlanco(1);
	va.Pausa();
}

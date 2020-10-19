#include "Mempresa.h"

Empresa::Empresa(){}

void Empresa::SetIngeniero(int posicion, Ingeniero ing){
	vingeniero[posicion]=ing;
}
Ingeniero Empresa::GetIngeniero(int posicion){
	return vingeniero[posicion];
}
int Empresa::CantIng(){
	return vingeniero.size();
}
void Empresa::IncluirIngeniero(Ingeniero ing){
	vingeniero.push_back(ing);
}
bool Ordced(Ingeniero a, Ingeniero b){
	return a.GetCedula()<b.GetCedula();
}
void Empresa::OrdenarIng(){
	if(CantIng()>0)
		sort(vingeniero.begin(),vingeniero.end(), Ordced);
}
int Empresa::BuscarIng(string c){
	for (int i=0; i < CantIng(); ++i)
       if (vingeniero[i].GetCedula() == c)
          return i;
       return -1;
}
float Empresa::Total(){
	float total=0;
	for(int i=0;i<CantIng();i++)
		total+=GetIngeniero(i).MontoTotal();
	return total;
}
void Empresa::GenerarVectores(vector<string> &auxced,
	                     vector<string> &auxnombre,
						 vector<int> &auxbobra,
						 vector<float> &auxbproduc,
						 vector<float> &auxmontototal){
				         for(int i=0;i<CantIng();i++){
				         	auxced.push_back(GetIngeniero(i).GetCedula());
				         	auxnombre.push_back(GetIngeniero(i).GetNombre());
							auxbobra.push_back(GetIngeniero(i).GetBobra());
							auxbproduc.push_back(GetIngeniero(i).GetBproduc());
							auxmontototal.push_back(GetIngeniero(i).MontoTotal());
						 }
						 }

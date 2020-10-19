#include "MAerolinea.h"

MAerolinea::MAerolinea(){
	for(int i=0; i<6; i++)
		vtasa.push_back(0);
}

void MAerolinea::SetNombre(string n){
	nombre=n;
}
string MAerolinea::GetNombre(){
	return nombre;
}
void MAerolinea::SetRif(string n){
	rif=n;
}
string MAerolinea::GetRif(){
	return rif;
}
void MAerolinea::SetVtasa(int c, float bs){
	vtasa[c]=bs;
}
float MAerolinea::GetVtasa(int c){
	return vtasa[c];
}
void MAerolinea::IncluirTasa(float bs){
	vtasa.push_back(bs);
}
int MAerolinea::CantTasa(){
	return vtasa.size();
}
void MAerolinea::ActualizarTasa(int c, float t){
	vtasa[c]+=t;
}
vector <float> MAerolinea::GetCodeTasa(){
	return vtasa;
}
float MAerolinea::TasaTotal(){
	float ac=0;
	for(int i=0; i<CantTasa(); i++)
		ac+=vtasa[i];
	return ac;
}

#include "MVendedor.h"

MVendedor::MVendedor(){
	for(int i=0;i<6;i++){
		bsdia.push_back(0);
	}
}
void MVendedor::SetBsdia(int d, float bs){
	bsdia[d]=bs;
}
float MVendedor::GetBsdia(int d){
	return bsdia[d];
}
vector <float> MVendedor::GetBscadadia(){
	return bsdia;
}
int MVendedor::CantDias(){
	return bsdia.size();
}
void MVendedor::ActualizarBs(int d, float bs){
	bsdia[d] +=bs;
}
void MVendedor::InsertarBs(float bs){
	bsdia.push_back(bs);
}
float MVendedor::TotalBs(){
	float ac=0;
	for(int i=0;i<CantDias();i++)
		ac += bsdia[i];
	return ac;
}
float MVendedor::Comision(){
	return TotalBs()*0.00075;
}

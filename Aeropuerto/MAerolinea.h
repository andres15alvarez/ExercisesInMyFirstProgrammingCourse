#ifndef MAEROLINEA_H_
#define MAEROLINEA_H_
#include <string>
#include <vector>
using namespace std;

class MAerolinea{
private:
	string rif, nombre;
	vector <float> vtasa;
public:
	MAerolinea();
	void SetRif(string n);
	string GetRif();
	void SetNombre(string n);
	string GetNombre();
	void SetVtasa(int c, float bs);
	float GetVtasa(int c);
	void IncluirTasa(float bs);
	int CantTasa();
	void ActualizarTasa(int c, float t);
	vector <float> GetCodeTasa();
	float TasaTotal();
};
#endif /*MAEROLINEA_H_*/

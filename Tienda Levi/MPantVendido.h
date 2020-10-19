#ifndef MPANTVENDIDO_H_
#define MPANTVENDIDO_H_


class MPantVendido{
private:
	int dia, codigo, cant;
public:
	MPantVendido();
	void SetDia(int n);
	int GetDia();
	void SetCodigo(int n);
	int GetCodigo();
	void SetCant(int n);
	int GetCant();
	
};
#endif /*MPANTVENDIDO_H_*/

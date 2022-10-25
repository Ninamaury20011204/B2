#include <iostream>
using namespace std;
int main ()
{
	float NMAT_x,NMAT_s=0;
	int NMAT_i=0,NMAT_l;
	cout<<"Ingrese cantidad de egresos  ";cin>>NMAT_l;
	cout<<"Ingrese saldo inicial : ";cin>>NMAT_s;
	
	do{
	cout<<"Ingrese egreso(x): ";cin>>NMAT_x;
	NMAT_i=NMAT_i+1;
	NMAT_s=NMAT_s-NMAT_x;

	}while(NMAT_i<NMAT_l);
	cout<<"El saldo final es: "<<NMAT_s<<endl;
	return 0;
}
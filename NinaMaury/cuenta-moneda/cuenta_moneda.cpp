#include <iostream>
using namespace std;
int main ()
{
	float NMAT_x,NMAT_s=0,NMAT_s1=0,NMAT_s5=0;
	int NMAT_i=0,NMAT_l,NMAT_i1=0,NMAT_i5=0;
	cout<<"Ingrese l: ";cin>>NMAT_l;
	do{

	cout<<"Ingrese x: ";cin>>NMAT_x;
	NMAT_i=NMAT_i+1;
	NMAT_s=NMAT_s+NMAT_x;
	if(NMAT_x==1){
		NMAT_i1=NMAT_i1+1;
		NMAT_s1=NMAT_s1+NMAT_x;
	}else{

		NMAT_i5=NMAT_i5+1;
		NMAT_s5=NMAT_s5+NMAT_x;
	}

	}while(NMAT_i<NMAT_l);
	cout<<"La cantidad de monedas es: "<<NMAT_i<<endl;
	cout<<"El valor es: "<<NMAT_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<NMAT_i1<<endl;
	cout<<"El valor es: "<<NMAT_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<NMAT_i5<<endl;
	cout<<"La cantidad de moneda es: "<<NMAT_s5<<endl;
	return 0;
}
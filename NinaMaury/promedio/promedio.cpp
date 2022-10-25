#include <iostream>
using namespace std;
int main ()
{
	float NMAT_x,NMAT_pm=0;
	int NMAT_i=0,NMAT_l;
	cout<<"Ingrese l: ";cin>>NMAT_l;
	do{
	
	cout<<"Ingrese x: ";cin>>NMAT_x;
	NMAT_i=NMAT_i+1;
	if(NMAT_x>NMAT_pm){
		NMAT_pm=NMAT_x;
	}
	
	}while(NMAT_i<NMAT_l);
	cout<<"El promedio maximo del curso es: "<<NMAT_pm<<endl;
	return 0;
}
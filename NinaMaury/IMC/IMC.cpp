#include <iostream>
using namespace std;
int main () 
{
	float NMAT_imc,NMAT_peso,NMAT_altura;
	cout<<"Ingrese el peso (kg): ";cin>>NMAT_peso;
	cout<<"Ingrese la altura (metros): ";cin>>NMAT_altura;
	NMAT_imc=NMAT_peso/(NMAT_altura*NMAT_altura)
		;
	if(NMAT_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(NMAT_imc>=18.5 && NMAT_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(NMAT_imc>=25 && NMAT_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(NMAT_imc>=27 && NMAT_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(NMAT_imc>=30 && NMAT_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(NMAT_imc>=35 && NMAT_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(NMAT_imc>=40 && NMAT_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(NMAT_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}
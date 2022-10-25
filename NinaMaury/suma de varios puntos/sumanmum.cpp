#include<iostream>
using namespace std;

int main () {
    float NMAT_x,NMAT_s=0.0;
    int NMAT_i=0, NMAT_l;
    cout<<"Ingrese el valor de NMAT_l: ";
    cin>>NMAT_l;
    do{
        cout<<"Ingrese el valor de NMAT_x: ";
        cin>>NMAT_x;
        NMAT_i=NMAT_i+1;
        NMAT_s=NMAT_s+NMAT_x;
    }while(NMAT_i<NMAT_l);

    cout <<"La suma de los numeros fue: "<<NMAT_s<<endl;
    return 0;

}
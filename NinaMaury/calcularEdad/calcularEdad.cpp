#include <iostream>
using namespace std;
int main()
{
    int NMAT_aa, NMAT_ma, NMAT_da, NMAT_an, NMAT_mn, NMAT_dn, NMAT_a, NMAT_m, NMAT_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> NMAT_aa >> NMAT_ma >> NMAT_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> NMAT_an >> NMAT_mn >> NMAT_dn;

    if (NMAT_da > NMAT_dn)
    {

        NMAT_d = NMAT_da - NMAT_dn;
    }
    else
    {
        NMAT_da = NMAT_da + 30;
        NMAT_ma = NMAT_ma - 1;
        NMAT_d = NMAT_da - NMAT_dn;
    }

    if (NMAT_ma > NMAT_mn)
    {

        NMAT_m = NMAT_ma - NMAT_mn;
    }
    else
    {

        NMAT_ma = NMAT_ma + 12;
        NMAT_aa = NMAT_aa - 1;
        NMAT_m = NMAT_ma - NMAT_mn;
    }
    NMAT_a = NMAT_aa - NMAT_an;

    cout << "Usted tiene " << NMAT_a << " años, " << NMAT_m << " meses," << NMAT_d << " dias" << endl;
    return 0;
}
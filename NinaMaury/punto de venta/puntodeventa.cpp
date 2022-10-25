
#include <iostream>
using namespace std;
int main()
{
    float NMAT_x, NMAT_s = 0, NMAT_vb, NMAT_piva = 12, NMAT_viva, NMAT_pdesc = 10, NMAT_vdesc, NMAT_vn;
    int NMAT_i = 0, NMAT_l;
    cout << "Ingrese l: ";
    cin >> NMAT_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> NMAT_x;
        NMAT_i = NMAT_i + 1;
        NMAT_s = NMAT_s + NMAT_x;
    } while (NMAT_i < NMAT_l);
    NMAT_vb = NMAT_s;
    NMAT_viva = NMAT_vb * NMAT_piva / 100;
    NMAT_vdesc = NMAT_vb * NMAT_pdesc / 100;
    NMAT_vn = NMAT_vb + NMAT_viva - NMAT_vdesc;
    cout << "El valor a pagar es de: " << NMAT_vn << endl;
    return 0;
}
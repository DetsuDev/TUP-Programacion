#include <iostream>
using namespace std;

int main()
{
    int num_mov, dia, importe;
    int may = -999;
    int may_dia, may_mov;
    int c_mov = 0;
    int total = 0;
    float ext = 0;
    float dep = 0;
     char tipo;
    for (int i = 0; i < 14; i++)
    {
        cout << "Ingrese numero de movimiento: ";
        cin >> num_mov;
        cout << "Ingrese Dia: ";
        cin >> dia;
        cout << "Ingrese Tipo: ";
        cin >> tipo;
        cout << "Ingrese importe: ";
        cin >> importe;

        if (tipo == 'E')
        {
            ext++;
            total = total - importe;
        }
        else if (tipo == 'D')
        {
            if (importe > may) 
            {
                may_dia = dia;
                may_mov = num_mov;
                may_dia = importe;
            }
            dep++;
            total = total + importe;
        }

        if (dia == 10) 
        {
            c_mov++;
        }

    }

    ext = (ext/14)*100;
    dep = 100-ext;

    cout << "Saldo final de la cuenta: " << total << endl;
    cout << "Porcentaje de extraccion: " << ext << ", porcentaje de deposito: " << dep << endl;
    cout << "Deposito de mayor porcentaje: " << may << ", dia: " << may_dia << ", mov: " << may_mov << endl;
    cout << "Cantidad de movimientos del dia 10: " << c_mov;

}
#include <iostream>
using namespace std;

int main()
{
    int promedio = 0;
    int sueldo_min = 999999999;
    int sueldo_max = 0;
    int sueldo_50 = 0;
    int sueldo;
	for (int i = 0; i < 10; i++)
	{
        cout << "Ingrese sueldo: ";
        cin >> sueldo;

        if (sueldo > 50000) sueldo_50++;
        
        if (sueldo > sueldo_max) {
            sueldo_max = sueldo;
        } else if (sueldo < sueldo_min){
            sueldo_min = sueldo;
        }
        promedio = promedio + sueldo;
    }

    promedio = promedio / 10;

    cout << "Sueldo maximo: " << sueldo_max << endl;
    cout << "Sueldo minimo: " << sueldo_min << endl;
    cout << "Sueldo promedio: " << promedio << endl;
    cout << "Cantidad de sueldos mayores a $50000: " << sueldo_50;
}
#include <iostream>
using namespace std;

int main()
{
    int sueldo_max = 0;
    int sueldo, legajo;
    int legajo_max = 0;
	for (int i = 0; i < 10; i++)
	{
        cout << "Ingrese sueldo: ";
        cin >> sueldo;
        cout << "Ingrese legajo: ";
        cin >> legajo;

        if (sueldo > sueldo_max) {
            sueldo_max = sueldo;
            legajo_max = legajo;
        } 
    }


    cout << "Legajo del empleado con mayor sueldo: " << legajo_max << endl;
}
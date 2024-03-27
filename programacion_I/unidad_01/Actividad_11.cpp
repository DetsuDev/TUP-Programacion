#include <iostream>
using namespace std;

int main () {
    int rHrs, rDias, minutos, horas;
    float dias;

    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;

    rDias = minutos%1440;
    dias = minutos/1440;

    rHrs = minutos%60;
    horas = minutos/60-dias*24;

    cout << "Equivalen a: " << dias << " dias, " << horas << " horas, y " << rHrs << " minutos.";

    return 0;
}

// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
    float horas;
    int minutos, resto;

    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;

    resto = (minutos%60);
    horas = (minutos/60)-(resto/60);
    minutos = minutos-(horas*60);

    cout << "Equivalen a: " << horas << " horas y " << minutos << " minutos";
return 0;
}

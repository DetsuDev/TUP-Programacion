// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
    int horas, resto;
    float dias;

    cout << "Ingrese la cantidad de horas: ";
    cin >> horas;

    resto = (horas%24);
    dias = (horas/24)-(resto/24);
    horas = horas-(dias*24);

    cout << "Equivalen a: " << dias << " dias y " << horas << " horas";

    return 0;
}

#include <iostream>
using namespace std;

int main () {
    int pCajas = 1000;
    int pHuevos = 120;
    int resto, cajas, huevos, total;

    cout << "Ingrese la cantidad de huevos: ";
    cin >> huevos;

    resto = huevos%12;
    cajas = (huevos-resto)/12;

    pCajas = cajas*pCajas;
    pHuevos = resto*pHuevos;
    total = pCajas + pHuevos;

    cout << "Equivalen a " << cajas << " caja/s y " << resto << " huevo/s, en total: " << total << "$.";

    return 0;
}

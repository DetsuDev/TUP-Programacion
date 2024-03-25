// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
    float importe, descuento, tDesc, tImpor;

    cout << "Ingrese el importe: ";
    cin >> importe;

    cout << "Ingrese el descuento a aplicar: ";
    cin >> descuento;

    tDesc = importe*(descuento/100);
    tImpor = importe - tDesc;

    cout << "Importe: " << importe << ", descuento: " << tDesc << ", total: " << tImpor;

    return 0;
}

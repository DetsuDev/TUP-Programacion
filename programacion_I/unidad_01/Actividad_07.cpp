// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
    float importe, descuento, total;

    cout << "Ingrese el importe de la venta: ";
    cin >> importe;

    cout << "Ingrese el descuento de la venta: ";
    cin >> descuento;

    total = importe - (importe*(descuento/100));

    cout << "El total es de: " << total;

    return 0;
}

#include <iostream>
using namespace std;

int main () {
float importe, impDesc, descuento;

cout << "Ingrese el importe de la venta: ";
cin >> importe;

cout << "Ingrese el importe con descuento de la venta: ";
cin >> impDesc;


descuento = 100 - (impDesc/importe)*100);

cout << "El descuento es de: " << descuento << "%.";

return 0;
}

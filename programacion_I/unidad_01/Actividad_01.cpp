#include <iostream>
using namespace std;

int main () {
    int horas, pago, total;

    cout << "Ingrese horas trabajadas: ";
    cin >> horas;

    cout << "Ingrese pago por hora: ";
    cin >> pago;

    total = horas*pago;

    cout << "Total: " << total;

    return 0;
}
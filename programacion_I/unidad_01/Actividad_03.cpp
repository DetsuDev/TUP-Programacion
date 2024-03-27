#include <iostream>
using namespace std;

    int main () {
    int fijo = 5000;
    int premio = 700;
    int cantidad;
    int total;

    cout << "Ingrese cantidad de autos vendidos: ";
    cin >> cantidad;

    total = fijo+(premio*cantidad);

    cout << "El sueldo es de: " << total;

    return 0;
}

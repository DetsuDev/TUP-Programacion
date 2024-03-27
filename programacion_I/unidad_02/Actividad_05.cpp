#include <iostream>
using namespace std;

int main () {
    int importe;
    cout << "Ingrese el importe: ";
    cin >> importe;

    if (importe < 100 ) {
        importe = importe*0.95;
    } else if (importe >= 100 && importe <= 500) {
        importe = importe*0.90;
    } else {
        importe = importe*0.85;
    }

    cout << "El importe es de: " << importe;

    return 0;
}

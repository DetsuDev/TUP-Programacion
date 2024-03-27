#include <iostream>
using namespace std;

int main () {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Es negativo";
    } else if (numero == 0) {
        cout << "Es cero";
    } else {
        cout << "Es positivo";
    }

    return 0;
}

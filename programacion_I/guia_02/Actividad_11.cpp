// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
    int num;
    int pos = 0;
    int cer = 0;
    int neg = 0;
    cout << "Ingrese el primer numero: ";
    cin >> num;

    if (num == 0) {
        cer++;
    } else if (num > 0) {
        pos++;
    } else {
        neg++;
    }

    cout << "Ingrese el segundo numero: ";
    cin >> num;

    if (num == 0) {
        cer++;
    } else if (num > 0) {
        pos++;
    } else {
        neg++;
    }

    cout << "Ingrese el tercero numero: ";
    cin >> num;

     if (num == 0) {
        cer++;
    } else if (num > 0) {
        pos++;
    } else {
        neg++;
    }

    cout << "Ingrese el cuarto numero: ";
    cin >> num;

     if (num == 0) {
        cer++;
    } else if (num > 0) {
        pos++;
    } else {
        neg++;
    }

    cout << "Ingrese el quinto numero: ";
    cin >> num;

    if (num == 0) {
        cer++;
    } else if (num > 0) {
        pos++;
    } else {
        neg++;
    }

    cout << "La cantidad de numero/s positivo/s: " << pos << ", de numero/s negativo/s: " << neg << " y de cero/s: " << cer;
    return 0;
}

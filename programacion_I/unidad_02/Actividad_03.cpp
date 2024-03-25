// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "Es par";
    } else {
        cout << "Es impar";
    }

    return 0;
}

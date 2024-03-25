// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
    float tMin, tMax, dif;

    cout << "Ingrese temperatura min: ";
    cin >> tMin;

    cout << "Ingrese el temperatura maxima: ";
    cin >> tMax;

    if (tMax >= tMin) {
        dif = tMax - tMin;
        cout << "Diferencia entre temperatura: " << dif;
    }
    else cout << "Error, la temperatura maxima no puede ser menor a la minima";


    return 0;
}

#include <iostream>
using namespace std;

int main () {
    int frascos;
    int betamol = 45;
    int micilina = 2;
    int sinitico = 7;

    cout << "Ingrese frascos de pildoras: ";
    cin >> frascos;

    betamol = frascos*betamol;
    micilina = frascos*micilina;
    sinitico = frascos*sinitico;

    cout << "Cantidad de frascos: " << frascos << "\n";
    cout << "Betamol: " << betamol << "mg.\n";
    cout << "Micilina: " << micilina << "grs.\n";
    cout << "Acido Sinitico: " << sinitico << "mg.";
    return 0;
}

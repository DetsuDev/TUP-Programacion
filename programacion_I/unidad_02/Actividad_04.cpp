#include <iostream>
using namespace std;

int main () {
    int prim_num, seg_num, diferencia;
    cout << "Ingrese primer numero: ";
    cin >> prim_num;

    cout << "Ingrese segundo numero: ";
    cin >> seg_num;

    diferencia = prim_num - seg_num;

    cout << "La diferencia es de: " << diferencia;

    return 0;
}

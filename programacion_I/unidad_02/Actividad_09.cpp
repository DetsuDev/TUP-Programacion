// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
    int prim_num, seg_num, ter_num, mayor_num;
    cout << "Ingrese el primer numero: ";
    cin >> prim_num;

    cout << "Ingrese el segundo numero: ";
    cin >> seg_num;

    if (prim_num > seg_num ) {
        mayor_num = prim_num;
    } else {
        mayor_num = seg_num;
    }

    cout << "Ingrese el tercero numero: ";
    cin >> ter_num;

    if (ter_num > mayor_num) {
        mayor_num = ter_num;
    }

    cout << "El mayor numero es: " << mayor_num;
    return 0;
}

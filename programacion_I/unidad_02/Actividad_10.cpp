// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
    int prim_num, seg_num, ter_num, cuar_num, quin_num, mayor_num, menor_num;
    cout << "Ingrese el primer numero: ";
    cin >> prim_num;

    cout << "Ingrese el segundo numero: ";
    cin >> seg_num;

    if (prim_num > seg_num ) {
        mayor_num = prim_num;
        menor_num = seg_num;
    } else {
        mayor_num = seg_num;
        menor_num = prim_num;
    }

    cout << "Ingrese el tercero numero: ";
    cin >> ter_num;

    if (ter_num > mayor_num) {
        mayor_num = ter_num;
    } else if (ter_num < menor_num) {
        menor_num = ter_num;
    }

    cout << "Ingrese el cuarto numero: ";
    cin >> cuar_num;

    if (cuar_num > mayor_num) {
        mayor_num = cuar_num;
    } else if (cuar_num < menor_num) {
        menor_num = cuar_num;
    }

    cout << "Ingrese el quinto numero: ";
    cin >> quin_num;

    if (quin_num > mayor_num) {
        mayor_num = quin_num;
    } else if (quin_num < menor_num) {
        menor_num = quin_num;
    }

    cout << "El mayor numero es: " << mayor_num << " y el menor numero es : " << menor_num;
    return 0;
}

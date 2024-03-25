// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
    int prim_num, seg_num, ter_num;
    cout << "Ingrese el primer numero: ";
    cin >> prim_num;

    cout << "Ingrese el segundo numero: ";
    cin >> seg_num;

    cout << "Ingrese el tercero numero: ";
    cin >> ter_num;

    if (prim_num == seg_num && prim_num == ter_num) {
        cout << "Los tres son iguales entre si.";
    }

    return 0;
}

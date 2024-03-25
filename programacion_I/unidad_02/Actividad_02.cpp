// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
    int prim_num, seg_num;
    cout << "Ingrese primer numero: ";
    cin >> prim_num;

    cout << "Ingrese segundo numero: ";
    cin >> seg_num;

    if (prim_num % seg_num == 0) {
        cout << "Son multiplos";
    } else {
        cout << "No son multiplos";
    }

    return 0;
}

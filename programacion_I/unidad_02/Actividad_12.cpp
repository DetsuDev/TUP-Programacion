// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
  // *Funciona pero se puede hacer mejor
  
    int medio, prim_num, seg_num, ter_num;

    cout << "Ingrese el primer numero: ";
    cin >> prim_num;

    cout << "Ingrese el segundo numero: ";
    cin >> seg_num;

    cout << "Ingrese el tercero numero: ";
    cin >> ter_num;

    if (prim_num > seg_num && prim_num > ter_num) {
        if (seg_num > ter_num) {
            medio = seg_num;
        } else {
            medio = ter_num;
        }
    } else if (seg_num > prim_num && seg_num > ter_num) {
        if (prim_num > ter_num) {
            medio = prim_num;
        } else {
            medio = ter_num;
        }
    } else {
        if (prim_num > seg_num) {
            medio = prim_num;
        } else {
            medio = seg_num;
        }
    }

    cout << "El numero del medio es es: " << medio;
    return 0;
}

// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {

    int medio, mayor, menor, prim_num, seg_num, ter_num;

    cout << "Ingrese el primer numero: ";
    cin >> prim_num;

    cout << "Ingrese el segundo numero: ";
    cin >> seg_num;

    if (prim_num > seg_num) {
        mayor = prim_num;
        menor = seg_num;
    } else {
        mayor = seg_num;
        menor = prim_num;
    }

    cout << "Ingrese el tercero numero: ";
    cin >> ter_num;

    if (ter_num > menor && ter_num > mayor) {
        medio = mayor;
        mayor = ter_num;
    } else if (ter_num < menor && ter_num < mayor){
        medio = menor;
        menor = ter_num;
    } else {
        medio = ter_num;
    }



    cout << "Los numero son: " << menor << ", " << medio << ", " << mayor;
    return 0;
}

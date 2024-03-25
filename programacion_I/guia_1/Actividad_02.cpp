// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main () {
int prim_num, seg_num, aux;

cout << "Ingrese primer numero: ";
cin >> prim_num;

cout << "Ingrese segundo numero: ";
cin >> seg_num;

aux = prim_num;
prim_num = seg_num;
seg_num = aux;

cout << "Los numeros al reves son: " << prim_num << " y "<< seg_num;

return 0;
}

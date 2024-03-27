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
        cout << "Es un triangulo equilatero.";
    } else if (prim_num != seg_num && prim_num != ter_num && seg_num != ter_num) {
        cout << "Es un triangulo escaleno.";
    } else {
        cout << "Es un triangulo isosceles";
    }

    return 0;
}

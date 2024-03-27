#include <iostream>
using namespace std;

int main () {
    float asientos, pasajes, ocupacion, libres;

    cout << "Ingrese cantidad de asientos totales: ";
    cin >> asientos;

    cout << "Ingrese cantidad de pasajes: ";
    cin >> pasajes;

    ocupacion = (pasajes/asientos)*100;
    libres = 100 - ocupacion;

    cout << "El porcentaje de ocupacion es de: " << ocupacion << "% y un " << libres << "% libres";

    return 0;
}

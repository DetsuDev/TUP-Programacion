#include <iostream>
using namespace std;

int main () {
    int t_dias, dia, mes, anio, edad, dia_act, mes_act, anio_act;

    cout << "Ingrese dia de nacimiento: ";
    cin >> dia;

    cout << "Ingrese mes de nacimiento: ";
    cin >> mes;

    cout << "Ingrese anio de nacimiento: ";
    cin >> anio;

    cout << "Ingrese el dia actual: ";
    cin >> dia_act;

    cout << "Ingrese el mes actual: ";
    cin >> mes_act;

    cout << "Ingrese el anio actual: ";
    cin >> anio_act;

    dia = dia_act - dia;
    mes = mes_act - mes;
    anio = anio_act - anio;
    t_dias = dia + (mes*30) + (anio*365);
    edad = t_dias/365;

    cout << "Edad total: " << edad;

    return 0;
}


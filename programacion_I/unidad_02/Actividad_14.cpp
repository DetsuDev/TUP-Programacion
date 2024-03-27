#include <iostream>
using namespace std;

int main () {
    int t_dias, dia, mes, anio, edad;
    int dia_act = 26;
    int mes_act = 2;
    int anio_act = 2019;

    cout << "Ingrese dia de nacimiento: ";
    cin >> dia;

    cout << "Ingrese mes de nacimiento: ";
    cin >> mes;


    cout << "Ingrese anio de nacimiento: ";
    cin >> anio;

    dia = dia_act - dia;
    mes = mes_act - mes;
    anio = anio_act - anio;
    t_dias = dia + (mes*30) + (anio*365);
    edad = t_dias/365;

    cout << "Edad total: " << edad;

    return 0;
}


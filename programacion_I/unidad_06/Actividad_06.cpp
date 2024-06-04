/*
Hacer una función que reciba un número entero por valor llamado día y un string llamado nombre por referencia y
le asigne el nombre correspondiente según el número de día. Siendo 0 → Domingo y 6 → Sábado.
*/

#include <iostream>
using namespace std;

string Dia(int x)
{
    switch (x)
    {
    case 0:
        return "Domingo";
    case 1:
        return "Lunes";
    case 2:
        return "Martes";
    case 3:
        return "Miercoles";
    case 4:
        return "Jueves";
    case 5:
        return "Viernes";
    case 6:
        return "Sabado";
    default:
        break;
    }
}

int main()
{
    int dia;
    cout << "Ingrese un numero:";
    cin >> dia;
    cout << "Es el dia: " << Dia(dia);
}
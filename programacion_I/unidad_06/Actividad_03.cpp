/*
Hacer una función llamada EsPrimo que determine si un número es primo o no. La función debe recibir el número y devolver true si es primo o false si no lo es. La función no debe mostrar nada por pantalla. 
Hacer un programa para ingresar un número y, utilizando EsPrimo, emita luego un cartel indicando si el número ingresado es primo o no es primo. 
*/

#include <iostream>
using namespace std;

bool EsPrimo(int x)
{
    int cd = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x%i == 0) cd++;
    }
    if (cd == 2) {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cout << "Ingrese un numero:";
    cin >> num;
    if (EsPrimo(num))
    {
        cout << "Es primo";
    }
    else
    {
        cout << "No es primo";
    }
}
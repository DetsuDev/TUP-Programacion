/*
Hacer una función llamada EsPar que determine si un número es par o no. La función debe recibir un número entero por valor y devolver true si es par o false si no lo es. La función no debe mostrar nada por pantalla. 
Hacer un programa para ingresar un número y, utilizando EsPar, emita luego un cartel indicando si el número ingresado es par o no es par.
*/

#include <iostream>
using namespace std;

bool EsPar(int x)
{
    if (x%2==0) {
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
    if (EsPar(num))
    {
        cout << "Es par";
    }
    else
    {
        cout << "Es impar";
    }
}
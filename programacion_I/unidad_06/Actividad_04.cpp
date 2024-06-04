/*
Hacer una función llamada EsPrimoSophieGermain que reciba un número entero y determine si el mismo es un número primo de Sophie Germain. Debe devolver verdadero si lo es y falso si no lo es.
NOTA: En teoría de números, se dice que un número natural es un número primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.
Ejemplo:
El número 2 es número primo de Sophie Germain porque:
2 es primo
2*2+1 → 5 es primo.

Hacer un programa para ingresar un número y, utilizando EsPrimoSophieGermain, emita luego un cartel indicando si el número ingresado es primo Sophie Germain o no lo es.

*/

#include <iostream>
using namespace std;

bool EsPrimoSophieGermain(int x)
{
    int cd = 0;
    int sophie = 2 * x + 1;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            cd++;
    }
    if (cd == 2)
    {
        cd = 0;
        for (int i = 1; i <= sophie; i++)
        {
            if (sophie % i == 0)
                cd++;
        }
        if (cd == 2)
        {
            return true;
        }
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
    if (EsPrimoSophieGermain(num))
    {
        cout << "Es sophie";
    }
    else
    {
        cout << "No es sophie";
    }
}
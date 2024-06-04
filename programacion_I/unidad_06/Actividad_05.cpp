/*
Hacer una función llamada Redondear que reciba como parámetro un número float y devuelva un número entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78, debe devolver 8.
Si recibe 7.48, debe devolver 7.
Si recibe 7.5, debe devolver 8.

Hacer un programa para ingresar un número y, utilizando Redondear, emita luego un cartel indicando el número redondeado.
*/

#include <iostream>
using namespace std;

int Redondear(float x)
{
    float entero = 0;
    for (int i = 1; i <= x; i++)
    {
        entero++;
    }
    x = x - entero;
    if (x >= 0.50)
    {
        entero++;
        return entero;
    }
    else
    {
        return entero;
    }
}

int main()
{
    float num;
    cout << "Ingrese un numero:";
    cin >> num;
    cout << "Redondeado: " << Redondear(num);
}
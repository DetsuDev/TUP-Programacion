/*
Hacer una función llamada CalcularMaximo que determine el máximo entre dos números. La función debe recibir dos números enteros por valor y devolver el valor más grande. Si los números son iguales debe devolver cualquiera de los dos. La función no debe mostrar nada por pantalla. 
Hacer un programa para ingresar dos números y, utilizando CalcularMaximo, emita luego el número mayor de ambos.
*/

#include <iostream>
using namespace std;

int CalcularMaximo(int x, int y)
{
    if (x>y) {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int num, num2;
    cout << "Ingrese dos numeros:";
    cin >> num;
    cin >> num2;
    cout << "El maximo es: " << CalcularMaximo(num, num2);
}
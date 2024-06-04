/*
Hacer un programa para cargar un vector de números enteros de 5 elementos, de manera aleatoria con números entre el 1 y el 6 
Calcular e informar: 
- La cantidad de veces que aparece cada número del 1 al 6 dentro del vector. 
- La suma de los valores contenidos en el vector. 
- La cantidad de veces que aparece el máximo valor dentro del vector.
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;
#include "funciones.h"

int main()
{
    int size = 5;
    int vec[size];
    int n;
    cargarAleatorio(vec, size, 6);
    mostrarVector(vec, size);
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Mostrar la cantidad de veces que aparecen numeros de 1 al 6" << endl;
    cout << "2. Mostrar la suma de los valores" << endl;
    cout << "3. Mostrar la cantidad de veces que aparece el maximo valor dentro del vector" << endl;
    cout << "0. Cerrar" << endl;
    cout << "***************" << endl;
    cin >> n;
    system("cls");
    switch (n)
    {
    case 1:
        cout << vec[minimoVector(vec, size)];
        break;
    case 2:
        cout << sumarVector(vec, size);
        break;
    case 3:
        cout << contarNumerosRepetidos(vec, vec[maximoVector(vec, size)], size);
        break;
    default:
        return 0;
        break;
    }
}
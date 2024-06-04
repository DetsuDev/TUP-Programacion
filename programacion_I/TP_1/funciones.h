#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

///asigna valores a cada una de las posiciones del vector
void cargarVector(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        cout << "INGRESE NUMERO: ";
        cin >> v[i];
    }
}

/// muestra lo que contiene cada una de las posiciones del vector
void mostrarVector(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        cout << v[i] << "\t";
    }
}

/// pone en 0 todas las posiciones del vector
void ponerCero(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        v[i] = 0;
    }
}

/// devuelve la posición que ocupa un número que se //envía como parámetro. Devuelve la primera posición que encuentra el número. Si no lo encuentra devuelve -1
int posicionNumeroEnVector(int v[], int tam, int numero)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (v[i] == numero)
            return i;
    }
    return -1;
}

/// cuenta la cantidad de veces que se repite un //número en el vector
int contarNumerosRepetidos(int v[], int numero, int tam)
{
    int i, cant = 0;
    for (i = 0; i < tam; i++)
    {
        if (v[i] == numero)
            cant++;
    }
    return cant;
}

/// devuelve  la posición (primera) que ocupa el máximo en el vector
int maximoVector(int v[], int tam)
{
    int i, posMax = 0;
    for (i = 1; i < tam; i++)
    {
        if (v[i] > v[posMax])
        {
            posMax = i;
        }
    }
    return posMax;
}

/// devuelve  la posición (primera) que ocupa el mínimo en el vector
int minimoVector(int v[], int tam)
{
    int i, posMin = 0;
    for (i = 1; i < tam; i++)
    {
        if (v[i] < v[posMin])
        {
            posMin = i;
        }
    }
    return posMin;
}

/// ordena de menor a mayor un vector
void ordenarVector(int v[], int tam)
{
    int i, j, posmin, aux;
    for (i = 0; i < tam - 1; i++)
    {
        posmin = i;
        for (j = i + 1; j < tam; j++)
        {
            if (v[j] < v[posmin])
                posmin = j;
        }
        aux = v[i];
        v[i] = v[posmin];
        v[posmin] = aux;
    }
}

/// asigna valores aleatorios a cada al vector
void cargarAleatorio(int v[], int tam, int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        v[i] = (rand() % limite) + 1;
    }
}

/// suma los valores contenidos en el vector
int sumarVector(int v[], int tam)
{
    int i, suma = 0;
    for (i = 0; i < tam; i++)
    {
        suma += v[i];
    }
    return suma;
}

/// copia el vector v en v2
void copiarVector(int v[], int v2[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        v2[i] = v[i];
    }
}

// compara los dos vectores que recibe. Si son iguales ///devuelve true, si no devuelve false
bool compararVectores(int v[], int v2[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (v2[i] != v[i])
            return false;
    }
    return true;
}

#endif // FUNCIONES_H_INCLUDED

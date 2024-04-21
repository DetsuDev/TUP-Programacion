#include <iostream>
using namespace std;

int main()
{
    int dia, dias_neblina;
    float lluvia_mm_max = 0;
    float temp_min = 0;
    float temp_max = 0;
    float temp_max_dia = 0;
    float temp, lluvia_mm, vis_km, amplitud;
    for (int i = 0; i < 5; i++)
    {   

        cout << "Ingrese numero de dia: ";
        cin >> dia;
        cout << "Ingrese temperatura: ";
        cin >> temp;
        cout << "Ingrese mm de lluvia: ";
        cin >> lluvia_mm;
        cout << "Ingrese visibilidad en km: ";
        cin >> vis_km;

        if (temp > temp_max)
        {
            temp_max = temp;
            temp_max_dia = dia;
        }
        else if (temp < temp_min)
        {
            temp_min = temp;
        }

        if (vis_km < 2)
        {
            dias_neblina++;
        }
    }

    if (temp_max > temp_min)
    {
        amplitud = temp_max - temp_min;
    }
    else
    {
        amplitud = temp_min - temp_max;
    }

    cout << "Temperatura max: " << dia << endl;
    cout << "Amplitud termica: " << amplitud << endl;
    cout << "Dias con neblina: " << dias_neblina << endl;

    if (dias_neblina > 3)
    {
        cout << "Quincena lluviosa.";
    }
    else if (dias_neblina >= 2)
    {
        cout << "Quincena humeda.";
    }
    else
    {
        cout << "Quincena seca.";
    }
}
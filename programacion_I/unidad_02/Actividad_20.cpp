#include <iostream>
using namespace std;

int main()
{
    int e1, e2, e3, e4, e5;
    int c_edad_may_treinta = 0;
    int c_alt_entre = 0;
    int c_treinta_unocho = 0;
    int e_exacta = 0;
    float a1, a2, a3, a4, a5, p_altura;
    float alt_may_treinta = 0;

    cout << "Ingrese la edad 1/5: ";
    cin >> e1;
    cout << "Ingrese la altura 1/5: ";
    cin >> a1;
    cout << "Ingrese la edad 2/5: ";
    cin >> e2;
    cout << "Ingrese la altura 2/5: ";
    cin >> a2;
    cout << "Ingrese la edad 3/5: ";
    cin >> e3;
    cout << "Ingrese la altura 3/5: ";
    cin >> a3;
    cout << "Ingrese la edad 4/5: ";
    cin >> e4;
    cout << "Ingrese la altura 4/5: ";
    cin >> a4;
    cout << "Ingrese la edad 5/5: ";
    cin >> e5;
    cout << "Ingrese la altura 5/5: ";
    cin >> a5;

    // Entre 1.7mts y 1.8mts

    if (a1 >= 1.7 && a1 <= 1.8)
    {
        c_alt_entre++;
    }
    if (a2 >= 1.7 && a2 <= 1.8)
    {
        c_alt_entre++;
    }
    if (a3 >= 1.7 && a3 <= 1.8)
    {
        c_alt_entre++;
    }
    if (a4 >= 1.7 && a4 <= 1.8)
    {
        c_alt_entre++;
    }

    if (a5 >= 1.7 && a5 <= 1.8)
    {
        c_alt_entre++;
    }

    // Mayor a 30

    if (e1 > 30)
    {
        c_edad_may_treinta++;
        alt_may_treinta = alt_may_treinta + a1;
        if (a1 > 1.8)
        {
            c_treinta_unocho++;
        }
    }

    if (e2 > 30)
    {
        c_edad_may_treinta++;
        alt_may_treinta = alt_may_treinta + a2;
        if (a2 > 1.8)
        {
            c_treinta_unocho++;
        }
    }

    if (e3 > 30)
    {
        c_edad_may_treinta++;
        alt_may_treinta = alt_may_treinta + a2;
        if (e3 > 1.8)
        {
            c_treinta_unocho++;
        }
    }

    if (e4 > 30)
    {
        c_edad_may_treinta++;
        alt_may_treinta = alt_may_treinta + a4;
        if (a4 > 1.8)
        {
            c_treinta_unocho++;
        }
    }

    if (e5 > 30)
    {
        c_edad_may_treinta++;
        alt_may_treinta = alt_may_treinta + a5;
        if (a5 > 1.8)
        {
            c_treinta_unocho++;
        }
    }

    // Edad exacta

    switch (e1)
    {
    case 20:
        e_exacta++;
        break;
    case 30:
        e_exacta++;
        break;
    case 40:
        e_exacta++;
        break;
    default:
        break;
    }

    switch (e2)
    {
    case 20:
        e_exacta++;
        break;
    case 30:
        e_exacta++;
        break;
    case 40:
        e_exacta++;
        break;
    default:
        break;
    }

    switch (e3)
    {
    case 20:
        e_exacta++;
        break;
    case 30:
        e_exacta++;
        break;
    case 40:
        e_exacta++;
        break;
    default:
        break;
    }

    switch (e4)
    {
    case 20:
        e_exacta++;
        break;
    case 30:
        e_exacta++;
        break;
    case 40:
        e_exacta++;
        break;
    default:
        break;
    }

    switch (e5)
    {
    case 20:
        e_exacta++;
        break;
    case 30:
        e_exacta++;
        break;
    case 40:
        e_exacta++;
        break;
    default:
        break;
    }

    // Promedio altura de mayores a 30 anios

    p_altura = alt_may_treinta / c_edad_may_treinta;

    cout << "Cantidad de personas mayores a 30 años y que midan 1.8mts: " << c_treinta_unocho << "\n";
    cout << "Promedio de altura mayores a 30 años: " << p_altura << "\n";
    cout << "Cantidad de personas entre 1.7mts y 1.8mts: " << c_alt_entre << "\n";
    cout << "Cantidad de personas cuya edad sea 20, 30 o 40 años: " << e_exacta << "\n";

    cout << "-\n";
    main();

    return 0;
}
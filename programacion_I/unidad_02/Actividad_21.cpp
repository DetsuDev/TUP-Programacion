#include <iostream>
using namespace std;

int main()
{
    int tipo, cantidad, c_vendidas;
    int c_blancas = 45;
    int c_negras = 50;
    int c_marrones = 40;
    int c_grises = 49;
    int c_total = c_blancas + c_negras + c_marrones + c_grises;

    cout << "Ingrese cantidad de 1er venta: ";
    cin >> cantidad;
    cout << "Ingrese tipo de cartera: ";
    cin >> tipo;
    switch (tipo)
    {
    case 1:
        c_blancas = c_blancas - cantidad;
        break;
    case 2:
        c_negras = c_negras - cantidad;
        break;
    case 3:
        c_marrones = c_marrones - cantidad;
        break;
    case 4:
        c_grises = c_grises - cantidad;
        break;
    default:
        break;
    }

    cout << "Ingrese cantidad de 2da venta: ";
    cin >> cantidad;
    cout << "Ingrese tipo de cartera: ";

    cin >> tipo;
    switch (tipo)
    {
    case 1:
        c_blancas = c_blancas - cantidad;
        break;
    case 2:
        c_negras = c_negras - cantidad;
        break;
    case 3:
        c_marrones = c_marrones - cantidad;
        break;
    case 4:
        c_grises = c_grises - cantidad;
        break;
    default:
        break;
    }
    cout << "Ingrese cantidad de 3ra venta: ";
    cin >> cantidad;
    cout << "Ingrese tipo de cartera: ";
    cin >> tipo;

    switch (tipo)
    {
    case 1:
        c_blancas = c_blancas - cantidad;
        break;
    case 2:
        c_negras = c_negras - cantidad;
        break;
    case 3:
        c_marrones = c_marrones - cantidad;
        break;
    case 4:
        c_grises = c_grises - cantidad;
        break;
    default:
        break;
    }

    c_vendidas = (c_total) - (c_blancas + c_negras + c_marrones + c_grises);

    cout << "En total se vendieron: " << c_vendidas << "\n";
    cout << "Quedaron " << c_blancas << " blancas, " << c_negras << " negras, " << c_marrones << " marones, y " << c_marrones << "\n";
    cout << "Las carteras que no se vendieron fueron: \n";


    if (c_blancas == 45)
    {
        cout << "Las blancas, \n";
    }
    if (c_negras == 50)
    {
        cout << "Las negras, \n";
    }
    if (c_marrones == 40)
    {
        cout << "Las marrones, \n";
    }

    cout << "-\n";
    main();

    return 0;
}
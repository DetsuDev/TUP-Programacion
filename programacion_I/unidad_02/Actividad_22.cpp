#include <iostream>
using namespace std;

int main()
{
    int c_caramelos, presupuesto;
    int cost_alq = 100000;
    float cost_car = 2.50;

    cout << "Ingrese cantidad de caramelos: ";
    cin >> c_caramelos;

    cout << "Ingrese presupuesto: ";
    cin >> presupuesto;

    cost_car = c_caramelos * cost_car;
    
    if (int mod = (c_caramelos % 1000) != 0)
    {
        cost_car = mod * 50000;
    }

    cost_car = cost_car + cost_alq;

    if (presupuesto > cost_car)
    {
        cout << "El presupuesto es suficiente para cubrir los costos  de $" << cost_car << "\n";
    }
    else
    {
        cout << "El presupuesto no es suficiente para cubrir los costos  de $" << cost_car << "\n";
    }

    cout << "\n";
    main();

    return 0;
}
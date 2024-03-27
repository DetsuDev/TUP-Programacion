#include <iostream>
using namespace std;

int main () {
    float semana1, semana2, semana3, semana4, promedio, total;

    cout << "Ingrese la recaudacion de primer semana: ";
    cin >> semana1;

    cout << "Ingrese la recaudacion de segunda semana: ";
    cin >> semana2;

    cout << "Ingrese la recaudacion de tercera semana: ";
    cin >> semana3;

    cout << "Ingrese la recaudacion de cuarta semana: ";
    cin >> semana4;

    promedio = (semana1+semana2+semana3+semana4)/4;
    total = semana1+semana2+semana3+semana4;

    semana1 = (semana1/total)*100;
    semana2 = (semana2/total)*100;
    semana3 = (semana3/total)*100;
    semana4 = (semana4/total)*100;


    cout << "La recaudacion promedio fue de" << promedio << ", la recaudacion de la primer semana fue del: " << semana1 << "%, de la segunda: " << semana2 << "%, de la tercera: " << semana3 << "% y de la cuarta: " << semana4 << "%.";

    return 0;
}

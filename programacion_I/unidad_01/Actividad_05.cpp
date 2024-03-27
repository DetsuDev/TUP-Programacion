#include <iostream>
using namespace std;

int main () {
    float guaymallens, fantoches, jorgitos, total;

    cout << "Ingrese cantidad de guaymallens vendidos: ";
    cin >> guaymallens;

    cout << "Ingrese cantidad de fantoches vendidos: ";
    cin >> fantoches;

    cout << "Ingrese cantidad de jorgitos vendidos: ";
    cin >> jorgitos;

    total = guaymallens + fantoches + jorgitos;

    guaymallens = (guaymallens/total)*100;
    fantoches = (fantoches/total)*100;
    jorgitos = (jorgitos/total)*100;


    cout << "Se vendieron: " << guaymallens << "%, " << fantoches << "% y " << jorgitos << "%.";

    return 0;
}

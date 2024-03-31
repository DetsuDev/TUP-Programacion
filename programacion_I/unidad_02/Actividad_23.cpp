#include <iostream>
using namespace std;

int main()
{   
    int mes;
    cout << "Ingrese numero de mes: ";
    cin >> mes;
    int mod = mes % 2;

    // Aca puse un float para que me de un numero entero de "verdad", asi se puede hacer en pseint
    float bim = 1;

    if (mod == 0) {
        bim = mes/2;
    }
    else
    {
        bim = bim + (mes/2) - mod/2;
    }


    cout << "El mes " << mes << " corresponde al bimestre " << bim << "\n";

    cout << "\n";
    main();

    return 0;
}
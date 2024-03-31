#include <iostream>
using namespace std;

int main()
{   
    int mes;
    cout << "Ingrese numero de mes: ";
    cin >> mes;
    float trim = 1;
    int mod = mes%3;

    if (mod == 0) {
        trim = mes/3;
    }
    else
    {
        trim = trim + (mes/3) - mod/3;
    }

    cout << "El mes " << mes << " corresponde al trimestre " << trim << "\n";

    cout << "\n";
    main();

    return 0;
}
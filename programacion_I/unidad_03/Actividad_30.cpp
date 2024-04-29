#include <iostream>
using namespace std;

int main()
{
    int num;
    int prev = 1;
    int cd = 0;
    bool ordenados = true;
    for (int i = 0; i < 7; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> num;
        cd = 0;
        for (int div = 1; div <= num; div++)
        {   
            if (num % div == 0)
            {
                cd = cd + 1;
            }
        }
        if (prev > num)
        {
            ordenados = false;
        }
        if (cd == 2) {
            cout << prev << ", " << num << endl;
            prev = num;
        }
        
    }

    if (ordenados == true)
    {
        cout << "Ordenados.";
    }
    else if (ordenados == false)
    {
        cout << "Desordenados.";
    }
}
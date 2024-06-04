#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    float max_p_impar = -999;
    int grup = 0;
    int ordenados = 0;
    int grup_ordenados = 0;
    int cd;
    int pos_primo = 0;
    int primo = 0;
    int impar = 0;
    int prev = 999;
    int grup_max = 0;
    float p_impar;

    for (int i = 1; i <= 4; i++)
    {
        while (num != 0)
        {
            grup++;

            cout << "Ingrese un num: ";
            cin >> num;
            if (num % 2 != 0 && num > 0)
            {
                impar++;
            }

            p_impar = impar / i * 100;
            if (p_impar > max_p_impar)
            {
                max_p_impar = p_impar;
                grup_max = i;
            }
            for (int div = 1; div <= num; div++)
            {
                if (num % div == 0)
                {
                    cd++;
                }
            }
            if (cd == 2)
            {
                primo = num;
                pos_primo = grup;
            }

            cd = 0;
            if (num < prev)
            {
                prev = num;
                ordenados++;
            }
        }

        if (ordenados == grup)
        {
            grup_ordenados++;
        }
        if (primo != 0)
        {
            cout << "Ultimo num primo: " << primo << ", orden: " << pos_primo << endl;
        }
        else
        {
            cout << "No hay num primo." << endl;
        }
        
        prev = 999;
        ordenados = 0;
        grup = 0;
        primo = 0;
        pos_primo = 0;

        num = 1;
    }
    cout << "Grupo con mayor porcentaje: " << grup_max << endl;
    cout << "Grupos ordenados: " << grup_ordenados;
    return 0;
}
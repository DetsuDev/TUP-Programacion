#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    int c_pos = 0;
    int cd;
    float par = 0;
    float impar = 0;
    int max_par = -999;
    int max_impar = -999;
    float p_par, p_impar;

    for (int i = 0; i < 10; i++)
    {
        while (num != 0)
        {
            cout << "Ingrese un num: ";
            cin >> num;
            if (num > 0)
            {
                c_pos++;
            }
            if (num % 2 != 0)
            {
                if (num > max_impar)
                {
                    max_impar = num;
                }
                impar++;
            }
            else
            {
                if (num > max_par)
                {
                    max_par = num;
                }
                par++;
            }
        }
        p_par = (par / (par + impar) * 100);
        p_impar = 100 - p_par;
        cout << "Max par: " << max_par << endl;
        cout << "Max impar: " << max_impar << endl;
        cout << "Total porcentaje par: " << p_par << endl;
        cout << "Total porcentaje no par: " << p_impar << endl;
        num = 1;
    }
    cout << "Numeros positivos: " << c_pos;
    return 0;
}
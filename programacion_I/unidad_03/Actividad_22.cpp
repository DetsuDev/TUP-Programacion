#include <iostream>
using namespace std;

int main()
{

	int num, pos_primo, pos_par;
    int num_primo = 0;
    int num_par = 0;
    bool par_exist = false;
	for (int i = 1; i <= 7; i++)
	{
	cout << "Ingrese un numero: ";
	cin >> num;
        if (num % 2 == 0 && !par_exist)
		{
            num_par = num;
            pos_par = i;
            par_exist = true;
		} else if (num / num == 1 && num % 2 != 0 && num % 3 != 0)
		{
            num_primo = num;
            pos_primo = i;
		}
	}

    cout << "Primer numero par: " << num_par << ", posicion: " << pos_par << endl << "Ultimo numero primo: " << num_primo << ", posicion: " << pos_primo;

}
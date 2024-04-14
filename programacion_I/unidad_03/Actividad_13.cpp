#include <iostream>
using namespace std;

int main()
{
	int par_max = 0;
	int num;
	for (int i = 1; i <= 10; i++)
	{
		cout << "Ingrese un numero: (" << i << "/10) ";
		cin >> num;
		if (i == 1)
		{
			par_max = num;
		}
		if (num % 2 == 0 && num >= par_max)
		{
			par_max = num;
		}
		
	}

	cout << "El mayor numero par es:  " << par_max << "\n";

	return 0;
}
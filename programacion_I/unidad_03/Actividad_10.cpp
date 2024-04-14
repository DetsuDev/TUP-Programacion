#include <iostream>
using namespace std;

int main()
{
	int may = 0;
	int pos = 0;
	int num;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Ingrese un numero: (" << i << "/10) ";
		cin >> num;
		if (num > may)
		{
			may = num;
			if (pos != i)
			{
				pos = i;
			}
		}
	}

	cout << "El mayor numero es:  " << may << " en la posicion:  " << pos << "\n";
	return 0;
}
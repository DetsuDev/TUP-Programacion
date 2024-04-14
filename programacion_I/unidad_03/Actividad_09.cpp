#include <iostream>
using namespace std;

int main()
{
	int may = 0;
	int num;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Ingrese un numero: (" << i << "/10) ";
		cin >> num;
		if (num > may)
		{
			may = num;
		}
	}

	cout << "El mayor numero es:  " << may << "\n";
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int may = 0;
	int men = 0;
	int pos_may = 0;
	int pos_men = 0;
	int num;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Ingrese un numero: (" << i << "/10) ";
		
		cin >> num;
		if (num > may)
		{
			may = num;
			if (pos != i) {
				pos_may = i;
				}
		}
		if (num < men)
		{
			men = num;
			if (pos != i) {
				pos_men = i;
				}
		}
	}

	cout << "El mayor numero es:  " << may << " en la posicion:  " << pos_may << "\n";
	
	cout << "El menor numero es:  " << men << " en la posicion:  " << pos_men << "\n";
	
	return 0;
}
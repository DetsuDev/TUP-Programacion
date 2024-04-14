#include <iostream>
using namespace std;

int main()
{
	int num;
    int max = -999;
    int mayor = -999;
	for (int i = 0; i < 5; i++)
	{
		cout << "Inserta un numero: " << "(" << i << "/4)" << endl;
		cin >> num;
        if (num >= mayor)
        {
            if (mayor >= max)
            {
                max = num;
            } else {
                
            mayor = num;
            }
        }
	}
    cout << "Los dos numeros mayores son: " << max << " y " << mayor << ".";

	return 0;
}
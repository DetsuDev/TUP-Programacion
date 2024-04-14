#include<iostream>
using namespace std;

int main()
{
	int pos = 0;
	int neg = 0;
	int cer = 0;
	int num;
	
	for (int i = 1; i <= 10; i++)
	{
		cout << "Ingrese un numero: (" << i << "/10) ";
	
		cin >> num;

		if (num > 0)
		{
			pos++;
		}
		else if (num < 0)
		{
			neg++;
		}
		else
		{
			cer++;
		}
	}

	cout << "Numeros positivos: " << pos << "\n";
	cout << "Numero negativos: " << neg << "\n";
	cout << "Ceros:  " << cer << "\n";
	
	return 0;
}
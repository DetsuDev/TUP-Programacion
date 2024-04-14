#include <iostream>
using namespace std;

int main()
{
	int lista, pos, num;
	cout << "Ingrese el tamaño de lista ";
	cin >> lista;
	
	for (int i = 1; i <= lista; i++)
	{
		cout << "Ingrese un numero: (" << i << "/" << lista << "): ";
		
		cin >> num;
		
		if (num >= 0)
		{
			pos++;
		}
		
	}
	
	cout << "Numeros positivos: " << pos;
	return 0;
}
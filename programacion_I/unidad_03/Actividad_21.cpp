#include <iostream>
using namespace std;

int main()
{
	int num, suma;
	int div = 0;
	cout << "Ingrese un numero: ";
	cin >> num;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
			suma  = suma +  i;
	}
	if (suma == num)
	{
		cout << "Es un numero perfecto.";
	}
	else
	{
		cout << "No es un numero perfecto.";
	}
}
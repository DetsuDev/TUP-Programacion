#include <iostream>
using namespace std;

int main()
{

		int num;
		cout << "Ingrese un numero: ";
		cin >> num;
		if (num % 2 == 0 || num % 3 == 0)
		{
			cout << "No es primo";
		}
		else
		{
			cout << "Es primo";
		}
	}
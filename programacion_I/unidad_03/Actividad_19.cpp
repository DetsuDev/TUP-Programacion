#include <iostream>
using namespace std;

int main()
{
	int num;
	int div = 0;
	cout << "Ingrese un numero: ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			div++;
	}
	cout << div;
}
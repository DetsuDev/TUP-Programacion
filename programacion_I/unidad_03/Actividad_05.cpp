#include <iostream>
using namespace std;

int main()
{
	int num1, num2, mayor, i;
	cout << "Ingrese primer numero: ";
	cin >> num1;
	 
	cout << "Ingrese segundo numero: ";
	cin >> num2;
	
	if (num1 > num2)
	{
		mayor = num1;
		i = num2;
	}
	else
	{
		mayor = num2;
		i = num1;
	}
	
	for (i = i + 1; i < mayor; i++)
	{
		cout << i <<  "\n";
	}
	
	
	return 0;
}
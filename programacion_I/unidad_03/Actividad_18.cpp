#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Ingrese un numero: ";
	cin >> num;
	for (int i = 0; i <= num; i++)
	{
		if (num % i == 0 && i % 2 == 0)
			cout << i << endl;
	}
}
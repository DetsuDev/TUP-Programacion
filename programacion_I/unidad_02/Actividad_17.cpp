// Autor: Tomas Bottelli

#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3, n4;

	cout << "Ingrese cuatro numeros: ";
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;

	if (n2 >= n1 && n3 >= n2 && n4 >= n3)
	{
		cout << "Estan ordenados: ";
	}
	else
	{
		cout << "Estan desordenados";
	}

	return 0;
}
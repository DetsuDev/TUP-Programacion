#include <iostream>
using namespace std;

int main()
{
	int kw, costo;
	cout << "Ingrese cantidas de kW: ",
		cin >> kw;

	if (kw <= 100)
	{
		costo = kw * 10;
	}
	else
	{
		costo = 100 * 10;
	}

	if (kw >= 101 && kw <= 200)
	{
		kw = kw - 100;
		costo = (kw * 12) + costo;
	}
	else
	{
		kw = kw - 100;
		costo = (100 * 12) + costo;
		kw = kw - 100;
		costo = (kw * 15) + costo;
	}

	cout << "Total a pagar: " << costo;
	return 0;
}
// Este esta bueno para poner un control de input, pero no lo pide

#include <iostream>
using namespace std;

int main()
{
	int horas, costo;
	char lang, urg;
	bool boolean;

	cout << "Ingrese el tipo de lenguaje: ";
	cin >> lang;

	cout << "Ingrese horas de trabajo: ";
	cin >> horas;

	cout << "Es urgente?: ";
	cin >> urg;

	switch (urg)
	{
	case 'S':
		boolean = true;
		break;
	case 'N':
		boolean = false;
		break;
	}

	switch (lang)
	{
	case 'C':
		costo = horas * 7500;
		break;
	case '#':
		costo = horas * 6100;
		break;
	case 'P':
		costo = horas * 5400;
		break;
	case 'G':
		costo = horas * 5000;
		break;
	}

	if (boolean)
	{
		costo = costo * 1.20;
	}

	cout << "El costo total es de: " << costo << "\n";

	// Las siguientes dos lineas es para repetir el codigo,
	cout << "-\n";
	main();

	return 0;
}
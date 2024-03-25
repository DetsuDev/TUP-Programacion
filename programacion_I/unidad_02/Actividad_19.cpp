// Autor: Tomas Bottelli

// Este esta bueno para poner un control de input, pero no lo pide

#include <iostream>
using namespace std;

int main()
{
	int horas, costo;
	char lang, urg;
	bool bUrg;

	cout << "Ingrese el tipo de lenguaje: ";
	cin >> lang;

	cout << "Ingrese horas de trabajo: ";
	cin >> horas;

	cout << "Es urgente?: ";
	cin >> urg;

	if (urg == 's')
	{
		bUrg = true;
	}
	else if (urg == 'n')
	{
		bUrg = false;
	}

	if (lang == 'c')
	{
		costo = horas * 7500;
	}
	else if (lang == '#')
	{
		costo = horas * 6100;
	}
	else if (lang == 'p')
	{
		costo = horas * 5400;
	}
	else if (lang == 'g')
	{
		costo = horas * 5000;
	}

	if (bUrg)
	{
		costo = costo * 1.20;
	}

	cout << "El costo total es de: " << costo << "\n";
	
	// Las siguientes dos lineas es para repetir el codigo
	cout << "-\n";
	main();
	
	return 0;
}
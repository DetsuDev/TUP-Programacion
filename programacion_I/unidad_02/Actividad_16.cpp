// Autor: Tomas Bottelli

// Estuve media por que habia puesto mal un &&

// A partir de aca empece a programar desde el celu, asi que es probable que la forma de escribir sea algo distinta

#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3, n4;

	cout << "Ingrese cuatro notas: ";
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;

	if (n1 >= 7 && n2 >= 7 && n3 >= 7 && n4 >= 7)
	{
		cout << "Aprobado";
	}
	else if (n1 >= 4 || n2 >= 4 || n3 >= 4 || n4 >= 4)
	{
		cout << "Recursa parciales";
	}
	else if (n1 < 4 && n2 < 4 && n3 < 4 && n4 < 4)
	{
		cout << "Recursa la materia";
	}
	else
	{
		cout << "Rinde examen dinal";
		// me 4 real
	}

	return 0;
}
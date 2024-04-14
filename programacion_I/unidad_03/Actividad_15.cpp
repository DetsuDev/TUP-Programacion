#include <iostream>
using namespace std;

int main()
{
	int num, cont;
    int prev = -999;
    bool ordenados;
	for (int i = 0; i < 8; i++)
	{
		cout << "Inserta un numero: "
			 << "(" << i << "/7)" << endl;
		cin >> num;
		if (num >= prev)
		{
            cont++;
            prev = num;
		}
	}
    if (cont == 8) cout << "Estan ordenados.";
    else cout << "Estan desordenados.";

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int num;
	int prim_num = -999;
	int seg_num = -999;
	int anteult_num = -999;
	int ult_num = -999;
	int impar_pos = 0;
	for (int i = 0; i < 7; i++)
	{
		cout << "Inserta un numero: "
			 << "(" << i << "/6)" << endl;
		cin >> num;
		if (num % 2 != 0 || num == 1)
		{
			if (impar_pos == 0)
			{
				prim_num = num;
				impar_pos++;
			}
			else if (impar_pos == 1)
			{
				seg_num = num;
				impar_pos++;
			}
			else
			{
				anteult_num = ult_num;
				ult_num = num;
			}
		}
	}

	if (prim_num == -999 && seg_num == -999 && anteult_num == -999 && ult_num == -999)
	{
		cout << "No hay numeros impares.";
	}
	else
	{
		if (prim_num > -999)
			cout << prim_num << endl;
		if (seg_num > -999)
			cout << seg_num << endl;
		if (anteult_num > -999)
			cout << anteult_num << endl;
		if (ult_num > -999)
			cout << ult_num << endl;
	}

	return 0;
}
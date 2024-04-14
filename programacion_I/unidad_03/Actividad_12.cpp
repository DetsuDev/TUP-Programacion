#include <iostream>
using namespace std;

int main()
{
	int may_neg = 0;
	int men_pos = 0;
	int num;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Ingrese un numero: (" << i << "/10) ";

		cin >> num;

		if (num >= 0)
		{
			if (i == 1)
			{
				men_pos = num;
			}
			if (num <= men_pos)
			{
				men_pos = num;
			}
		}

		if (num < 0)
		{
			if (i == 1)
			{
				may_neg = num;
			}
			if (num >= may_neg)
			{
				may_neg = num;
			}
		}
	}

	cout << "El menor numero positivo es:  " << men_pos << "\n";

	cout << "El mayor numero negativo es:  " << may_neg << "\n";

	return 0;
}
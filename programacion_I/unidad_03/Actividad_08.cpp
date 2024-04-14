#include<iostream>
using namespace std;

int main()
{
	float pos = 0;
	float neg = 0;
	float cer = 0;
	int num;
	
	for (int i = 1; i <= 10; i++)
	{
		cout << "Ingrese un numero: (" << i << "/10) ";
	
		cin >> num;

		if (num > 0)
		{
			pos++;
		}
		else if (num < 0)
		{
			neg++;
		}
		else
		{
			cer++;
		}
	}

	int total = pos + neg + cer;
	pos = (pos/total)*100;
	neg = (neg/total)*100;
	cer = (cer/total)*100;

	cout << "Numeros positivos: " << pos << "% \n";
	cout << "Numero negativos: " << neg << "% \n";
	cout << "Ceros:  " << cer << "% \n";
	
	return 0;
}
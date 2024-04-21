#include <iostream>
using namespace std;

int main()
{

	int num;
    int prev = 0;
    int duplas = 0;
	for (int i = 0; i < 10; i++)
	{
        cout << "Ingrese un numero: ";
        cin >> num;
        if (prev % 2 != 0 && num % 2 != 0) duplas++;
        prev = num;
	}
    cout << "Hay " << duplas << " duplas de numeros impares ingresados consecutivamente.";
}
#include <iostream>
using namespace std;

int main()
{
	int num;
    int mod = 0;
    
    cout << "Ingrese un numero: ";
    cin >> num;

	for (int i = 1; i <= num; i++)
	{   
        mod = num % i;
        if (mod == 0)
        cout << i << endl;
    }
	return 0;
}
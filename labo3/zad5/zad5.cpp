#include <iostream>
#include "stdafx.h"
using namespace std;
int main()
{
	int n;
	float wynik, wynik2;
	cout << "Podaj n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << (float)1 / i << endl;
		wynik = (float)1 / i;
		wynik2 += wynik;
	}
	cout << endl;
	cout << endl;
	cout << "wynik: " << wynik2 << endl;
	system("pause");
	return 0;
}
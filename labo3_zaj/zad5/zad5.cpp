#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int n;
	float wynik, wynik2;
	wynik2 = 0;
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
// zad7.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Podaj n:";
	cin >> n;

	int liczba;
	int l = 0;

	int d = 0;
	int t = 0;
	int p = 0;

	for (int i = 0; i<n; i++)
	{
		cout << "Podaj liczbe:";
		cin >> liczba;

		d = liczba % 2;
		t = liczba % 3;
		p = liczba % 5;

		if (d == 0 && t == 0 && p != 0)
		{
			l++;
		}
	}

	cout << "Ilosc liczb w ciagu: " << l;
	system("pause");
	return 0;
}
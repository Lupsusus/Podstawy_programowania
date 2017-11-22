// zad3.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Podaj n: ";
	cin >> n;

	float tab[n];
	int s = 0;

	for (int i = 0; i<n; i++)
	{
		cout << "Podaj liczbe: ";
		cin >> tab[i];

		if (tab[i]<0) { tab[i] *= (-1); }

		if (tab[i]<i*i) { s++; }
	}

	cout << "Liczby, spelniajace rownanie: " << s;
	system("pause");
	return 0;
}
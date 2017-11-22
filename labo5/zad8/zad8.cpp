// zad8.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
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

		if (tab[i]<0) { tab[i] *= (-1); cout << tab[i] << endl; }

		if (tab[i]<(2 * i)) { s++; cout << "s" << endl; }
	}

	cout << "Liczby, spelniajace rownanie: " << s;
	system("pause");
	return 0;
}
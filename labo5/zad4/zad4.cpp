// zad4.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
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
	float pom;
	int licz = 0;

	cout << "Podaj liczbe: ";
	cin >> tab[0];
	pom = tab[0];


	for (int i = 1; i<n; i++)
	{
		cout << "Podaj liczbe: ";
		cin >> tab[i];

		if (tab[i - 1]>0 && tab[i]>0)
		{
			cout << "(" << tab[i - 1] << " ; " << tab[i] << ")" << endl;
			licz++;
		}

	}

	cout << "Policzone pary: " << licz;
	system("pause");
	return 0;
}
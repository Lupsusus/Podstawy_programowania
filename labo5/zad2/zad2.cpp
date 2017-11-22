// zad2.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int l;
	cout << "Podaj liczbe: ";
	cin >> l;

	int p = l / 2;
	int licznik = 0;

	for (int i = 2; i<p; i++)
	{
		int s;
		s = l%i;

		if (s == 0) { licznik++; }
	}

	if (licznik == 0) { cout << "Liczba pierwsza!"; }
	else { cout << "To nie jest liczba pierwsza!"; }
	system("pause");
	return 0;
}
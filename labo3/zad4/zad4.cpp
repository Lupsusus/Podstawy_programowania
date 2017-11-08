#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
#include "stdafx.h"
using namespace std;

int main()
{
	float wykladnik, wykladnik_licznik;
	float liczba, liczba2, wynik = 1;

	cout << "Podaj liczbe:";
	cin >> liczba;
	cout << "Podaj licznik wykladnika:";
	cin >> wykladnik_licznik;

	wykladnik = wykladnik_licznik / 2;
	cout << "Wykladnik:" << wykladnik << endl;

	//ogolnie przyjmujemy w zadaniu ze mianownik=2, wiec przyklad:
	// 9^(3/2) = (pierwiastek z 9) do potegi 3
	// czyli "2" mamy w dupie
	// 16^(4/2) == (pierwiastek z 16) do potegi 4
	// wiec musze obliczyc pierwiastek i podniesc do go wykladnik_licznik, tyle

	// licze tutaj pierwiastek i wprowadzam zmienna liczba2, ktora ten pierwiastek bedzie miala
	for (int i = 0; i<liczba; i++)
	{
		if (i*i == liczba) liczba2 = i; // proste: petla szuka i*i, ktore da nam nasza liczbe (pierwiastek)
	}
	cout << "Pierwiastek:" << liczba2 << endl; //wypisujemy pierwiastek

											   // majac pierwiastek musimy tylko pomnozyc go przez siebie samego tyle razy ile wynosi licznik
	for (long int i = 1; i <= wykladnik_licznik; i++)
	{
		wynik *= liczba2;
	}
	cout << "Wynik: " << wynik << endl;

	system("pause");
	return 0;
}
#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <time.h>
#include <string>

using namespace std;

int main()
{
	int p;
	float wykladnik, wykladnik_licznik;
	float liczba, pot = 1, wynik = 1, d = 0;

	cout << "Podaj liczbe:";
	cin >> liczba;
	cout << "Podaj licznik wykladnika:";
	cin >> wykladnik_licznik;
	cout << "Podaj dokladnosc:";
	cin >> d;
	float przybl1 = 0;
	float przybl2 = liczba;
	if (wykladnik_licznik >= 0) {
		for (int i = 0; i < wykladnik_licznik; i++) {
			pot = liczba * pot;
		}
		cout << pot << endl;
	}
	else {
		for (int i = 0; i < wykladnik_licznik; i++) {
			pot = liczba * pot;
		}
		cout << pot << endl;
	}
	do {
		przybl1 = przybl2;
		przybl2 = (przybl1 + pot / przybl1) / 2;
		cout << przybl2 << endl;
	} while (abs(przybl1 - przybl2) > d);
	system("pause");
	return 0;
}
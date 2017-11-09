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
	float liczba, liczba2 = 0, wynik = 1;

	cout << "Podaj liczbe:";
	cin >> liczba;
	cout << "Podaj licznik wykladnika:";
	cin >> wykladnik_licznik;
	cout << "Podaj przyblizenie:";
	cin >> p;
	float przybl1 = 0;
	float przybl2 = liczba;

	for (int i = 1; i < wykladnik_licznik; i++) {
		liczba = liczba*liczba;
	}
	cout << liczba << endl;
	do {
		przybl1 = przybl2;
		przybl2 = (przybl1 + liczba / przybl1) / 2;
		cout << przybl2 << endl;
	} while (przybl1 > przybl2);
	system("pause");
	return 0;
}
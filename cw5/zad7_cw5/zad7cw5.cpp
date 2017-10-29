//7.	Duża liczba(n cyfrowa)  jest zapisana w n elementowej tablicy liczb
//naturalnych(w każdym elemencie tablicy jest jedna cyfra).Napisz
//program sprawdzający czy podana liczba jest podzielna przez 11.
//Uwaga !
//Jeżeli różnica pomiędzy sumą cyfr stojących na miejscach
//nieparzystych(licząc od prawej) i sumą cyfr stojących na miejscach
//parzystych jest liczbą podzielną przez 11 to i badana liczba jest
//podzielna przez 11.
//Przykład:
//61974 (4 + 9 + 6) - (7 + 1) = 19 - 8 = 11.

#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	int cyfry = 0;

	cout << "Wprowadz ilosc cyfr";
	cin >> cyfry;
	int liczba_w_tabeli[cyfry];

	for (int i = 0; i < cyfry; i++) {
		cout << "Wprowadz cyfre numer " << i + 1 << ": ";
		cin >> liczba_w_tabeli[i];
	}

	int parzyste = 0, nieparzyste = 0;

	for (int i = cyfry - 1; i >= 0; i--) {
		if (i != 2 && i != 0) {
			nieparzyste += liczba_w_tabeli[i];
		}
		else {
			parzyste += liczba_w_tabeli[i];
		}
	}

	cout << "Liczba ";
	for (int i = 0; i < cyfry; i++) {
		cout << liczba_w_tabeli[i];
	}

	if (nieparzyste - parzyste % 11 == 0) {
		cout << " jest podzielna przez 11.";
	}
	else {
		cout << " nie jest podzielna przez 11.";
	}
	return 0;
}
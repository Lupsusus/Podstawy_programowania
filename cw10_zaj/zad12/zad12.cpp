//zad9
//9. Dana jest macierz NxN(N>2; N <= 10) liczb losowych całkowitych z przedziału <-20, 20>.Napisz program,
//który obliczy sumę elementów na przekątnych(główna przekątna i przeciwprzekątna) Wypisz
//je.Zdefiniuj odpowiednie funkcje do generowania tablicy, wypisania elementów tablicy i obliczania
//odpowiednich sum elementów.
//Przykład:
//WEJŚCIE: 3 3 { {5 - 2 9} {-4 - 17 5} {2 - 1 3} }
//WYJŚCIE: Suma elementów głównej przekątnej : 5 - 17 + 3 = -9
//	Suma elementów przeciwprzekątnej : 9 - 17 + 2 = -6
#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;
int **tab;
void gentab(int n) {
	tab = new int*[n];
	for (int i = 0; i < n; i++) {
		tab[i] = new int[n];
		for (int j = 0; j < n; j++) {
			tab[i][j] = (rand() / (RAND_MAX + 1.0))* (20 + 20) - 20;
		}
	}
}
void showtab(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
}
void sumtab(int n) {
	int pr = 0, ppr = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == i) {
				pr += tab[i][j];
			}
		}
	}
	int m = n;
	for (int i = 0; i < n; i++) {
		m--;
		ppr += tab[i][m];
	}
	cout << "suma glownej: " << pr << endl;
	cout << "suma przeciw: " << ppr << endl;
}

int main()
{
	srand(time(NULL));
	int n;
	do {
		cout << "Podaj N: " << endl;
		cin >> n;
	} while (n <= 2 && n > 10);
	gentab(n);
	showtab(n);
	sumtab(n);
	system("pause");
    return 0;
}


//Dana jest tablica n - elementowa.Napisz program, kt�ry wyznaczy sum� element�w mniejszych
//od �redniej wszystkich element�w zawartych w tablicy.Program powinien wypisywa� �redni�
//wszystkich element�w, elementy mniejsze od �redniej oraz uzyskan� sum�.

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int tab[10];
	int n = 0;
	float suma = 0;
	float sr = 0;
	do {
		cout << "Podaj " << n + 1 << " element tablicy: " << endl;
		cin >> tab[n];
		n++;
	} while (n < 10);
	for (int i = 0; i < n; i++) {
		suma = suma + tab[i];
	}
	cout << "Srednia wszystkich elementow: " << endl;
	sr = suma / n;
	cout << sr << endl;
	suma = 0;
	cout << "Elementy mniejsze od sredniej: " << endl;
	for (int i = 0; i < n; i++) {
		if (tab[i] < sr) {
			cout << tab[i] << endl;
			suma = suma + tab[i];
		}
	}
	cout << "Suma elementow mniejszych od sredniej: " << endl;
	cout << suma;
	system("pause");
	return 0;
}


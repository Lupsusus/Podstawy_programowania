//6.	Dana jest tablica kwadratowa nxn liczb rzeczywistych.Napisz program,
//który:
//•	sprawdzi, czy tablica jest symetryczna,
//•	Policzy sumę elementów w macierzy lewej dolnej trójkątnej(bez
//	diagonali) i prawej dolnej(z diagonalą),
//	•	Po podaniu indeksów[i][j] policzy sumę elementów sąsiednich.

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int sym = 1, sumldbd = 0, sumldzd = 0, sumsa = 0;
	int n;
	const int r = 4;
	float  T[r][r];
	n = r;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Podaj [" << i << "][" << j << "]" << endl;
			cin >> T[i][j]; // podaje wartosci do tablicy; i - wiersz; j - kolumna
		}
	}
	for (int i = 0; i < n; i++) { //liczenie symetrycznosci
		for (int j = 0; j < n; j++) { // dla kazdego elemntu tablicy
			if (T[i][j] != T[j][i]) { // sprawdzam czy element o zamienionych wspolrzednych jest taki sam
				sym--;
				break;
			}
		}
	}
	n = 1;
	for (int i = 1; i < r; i++) { // zaczynajac od drugiego wiersza
		for (int j = 0; j < n; j++) { // ta petla na poczatku wykona sie za kazdym razem o jeden raz wiecej
			sumldbd = sumldbd + T[i][j];
		}
		if (n < r) {
			n++;
		}
	}
	n = 2;
	for (int i = 0; i < r; i++) { // zaczynajac od pierwszego wiersza
		for (int j = r - 1; j > n; j--) { // ta petla na poczatku wykona sie za kazdym razem o jeden raz mniej
			sumldzd = sumldzd + T[i][j];
		}
		if (n < r) {
			n--; // dzieki temu petla wykonuje sie o raz mniej za kazdym razem
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < r; j++) {
			cout << T[i][j]; // to jest wypisanie calej tablicy
			cout << " ";

		}
		cout << endl;
	}
	if (sym == 1) {
		cout << "Tablica symetryczna" << endl;
	}
	if (sym != 1) {
		cout << "Tablica nie symetryczna" << endl;
	}
	cout << "suma elementow w macierzy lewej dolnej trojkatnej(bez diagonalii): " << sumldbd << endl;
	cout << "suma elementow w macierzy prawej dolnej trojkatnej(z diagonalia): " << sumldzd << endl;

	int i, j;
	do {
		cout << "Podaj indeks i: ";
		cin >> i;
	} while (i >= r);
	do {
		cout << "Podaj indeks j: ";
		cin >> j;
	} while (j >= r);
	if (i + 1 < r) { // sprawdzam czy element ma sasiada z gory
		sumsa = sumsa + T[i + 1][j];
	}
	if (j + 1 < r) { // sprawdzam czy element ma sasiada z prawej
		sumsa = sumsa + T[i][j + 1];
	}
	if (i - 1 >= 0) { // sprawdzam czy element ma sasiada z dolu
		sumsa = sumsa + T[i - 1][j];
	}
	if (j - 1 >= 0) { // sprawdzam czy element ma sasiada z lewej
		sumsa = sumsa + T[i][j - 1];
	}
	cout << "Suma sasiednich elemntow do [" << i << "][" << j << "]: " << endl;
	cout << sumsa << endl;

	system("pause");
	return 0;
}


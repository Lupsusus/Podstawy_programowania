#include "stdafx.h";
void uzup_we(int *tab) {
	int a = 0;
	int b = n;
	for (int i = 0; i<n; i++)
	{
		tab[i] = (rand() / (RAND_MAX + 1.0))* (b - a) + a;
	}
}
void uzup_ma(int **ma, int x, int y) {
	int a = 0;
	int b = n;
	ma = new int*[x];
	for (int i = 0; i < x; i++) {
		ma[i] = new int[y];
		for (int j = 0; j < y; j++) {
			ma[i][j] = (rand() / (RAND_MAX + 1.0))* (b - a) + a;
		}
	}
}
void wypisz(int *tab) {
	cout << "Twoja tablica: " << endl;
	for (int i = 0; i<n; i++)
	{
		cout << tab[i] << endl;
	}
}
void wypisz_ma(int **ma, int x, int y) {
	cout << "Twoja macierz: " << endl;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << ma[i][j];
		}
		cout << endl;
	}
}
void dodaj(int *tab1, int *tab2) {
	cout << "Suma wektorow/ macierzy: " << endl;
	for (int i = 0; i<n; i++)
	{
		cout << tab1[i] + tab2[i] << endl;
	}
}
void dodaj(int **tab1, int **tab2, int x, int y) {
	cout << "Suma wektorow/ macierzy: " << endl;
	for (int i = 0; i<x; i++)
	{
		for (int j = 0; j < y; j++) {
			cout << tab1[i][j] + tab2[i][j];
		}
		cout << endl;
	}
}
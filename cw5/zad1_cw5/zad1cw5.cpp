//1.	Dana jest tablica jednowymiarowa n - elementowa.Napisz program, który
//znajduje :
//•	Element minimalny,
//•	Średnią,
//•	Medianę.

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n, *T, min, sr, med;
	int k = 0;
	int j = 0;
	int pom;
	min = 0;
	sr = 0;
	cout << "Podaj wielkosc tablicy: " << endl;
	cin >> n;
	T = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Podaj " << i + 1 << " wartosc elementu: " << endl;
		cin >> T[i]; // wpisuje wartosci do tablicy 
		if (i == 0) {
			min = T[i]; // dla pierwszego wpisu ustawiam wartosc minimalna
		}
		else if (T[i] < min) { // dla kazdego kolejnego sprawdzam czy jest mniejszy
			min = T[i]; // i ustawiam go jako najmniejszy
		}
		sr = sr + T[i]; // przy okazji licze sume elementow
	}
	for (int i = 0; i < n; i++) { // to jest sortowanie babelkowe
		for (j = k; j < n - (i + 1); j++) // kazdy element jest sprawdzany czy jest mniejszy od najmnijeszego i przesuwany na nizsze miejsce w tabeli
		{
			if (T[j + 1] < T[j])
			{
				pom = T[j + 1]; // zmienna pom przechowuje element tablicy w momencie wpisania na jego miejsce mniejszej wartosci
				T[j + 1] = T[j];
				T[j] = pom;
			}
		}
		for (k = j - 1; k > i; k--)
		{
			if (T[k] < T[k - 1])
			{
				pom = T[k];
				T[k] = T[k - 1];
				T[k - 1] = pom;
			}
		}
		k++;
	}
	sr = sr / n; // tutaj jest liczona srednia
	if (n % 2 == 0) { //jesli ilosc elementow jest parzysta to wedlug wzoru 
		med = T[(n - 1) / 2] + T[n / 2]; // licze mediane ze wzoru
		med = med / 2;
	}
	else {
		med = T[n / 2]; // jesli ilosc elementow jest nie parzysta wyznaczam element po srodku tabeli 
	}
	cout << "Element minimalny to: " << min << endl;
	cout << "Srednia to " << sr << endl;
	cout << "Mediana to: " << med << endl;
	delete[]T;
	system("pause");
	return 0;
}


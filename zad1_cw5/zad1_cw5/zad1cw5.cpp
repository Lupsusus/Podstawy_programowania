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
		cin >> T[i];
		if (i == 0) {
			min = T[i];
		}
		else if (T[i] < min) {
			min = T[i];
		}
		sr = sr + T[i];
	}
	for (int i = 0; i < n; i++) {
		for (j = k; j < n - (i + 1); j++)
		{
			if (T[j + 1] < T[j])
			{
				pom = T[j + 1];
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
	sr = sr / n;
	if (n % 2 == 0) {
		med = T[(n - 1) / 2] + T[n / 2];
		med = med / 2;
	}
	else {
		med = T[n / 2];
	}
	cout << "Element minimalny to: " << min << endl;
	cout << "Srednia to " << sr << endl;
	cout << "Mediana to: " << med << endl;
	delete[]T;
	system("pause");
	return 0;
}


//5.Zdefiniuj funkcję min_max(float*, float*), która wyszuka minimum i maksimum tablicy.
//Napisz program, który korzystając z funkcji o nagłówku min_max(float*, float*) wypisze
//najmniejszą i największa liczbę z N - elementowej tablicy pseudolosowych liczb rzeczywistych
//z zakresu <-1, 4).Tablica jest zmienną globalną.
//	Przykład: n = 7; Dane: 2.5, -0.8, 1.4, 3.7, -0.6, -0.2, 2.1 Wynik : min : -0.8 maks : 3.7

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
double tab[100];
void min_max(float n, float x)
{
	float max = -1;
	float min = tab[1];
	for (int i = 0; i<n; i++)
	{
		if (tab[i] > max) {
			max = tab[i];
		}
		if (tab[i] < min) {
			min = tab[i];
		}
	}
	cout << "MAX: " << max << endl;
	cout << "MIN: " << min << endl;
}
int main()
{
	float n;
	srand((float)time(NULL));
	cout << "Podaj ilosc elementow tablicy: ";
	cin >> n;
	cout << "Tablica: " << endl;
	for (int i = 0; i<n; i++)
	{
		tab[i] = -1.0 + 5.0*rand() / (RAND_MAX + 4.0);
		cout << tab[i] << endl;
	}
	min_max(n, 0);
	system("pause");
	return 0;
}




//3. Zadeklaruj dynamiczną jednowymiarową tablicę elementów typu
//rzeczywistego wypełnij ją danymi a następnie
//a. posortuj tablicę rosnąco
//b. posortuj tablicę malejąca
//c. wypisz medianę.1
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
	float mediana;
	float *T;
	int n;
	cout << "Podaj rozmiar tablicy: ";
	cin >> n;
	T = new float[n];

	for (int i = 0; i<n; i++)
	{
		cout << "Podaj wartosc: ";
		cin >> T[i];
	}
	cout << endl;
	cout << endl;
	sort(T, T + n);
	cout << "Tablica posortowana rosnaco: " << endl;
	for (int i = 0; i<n; i++)
	{
		cout << T[i];
		cout << ",";
	}
	cout << endl;
	cout << endl;
	sort(T, T + n, greater < float >());
	cout << "Tablica posortowana malejaco: " << endl;
	for (int i = 0; i<n; i++)
	{
		cout << T[i];
		cout << ",";
		if (n % 2 == 0)
		{
			mediana = T[(n - 1) / 2] + T[n / 2];
			mediana = mediana / 2;
		}
		else
		{
			mediana = T[n / 2];
		}

	}
	cout << endl;
	cout << endl;
	cout << "Mediana: " << mediana << endl;
	cout << endl;
	system("PAUSE");
	return 0;
}
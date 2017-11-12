//7. Zadeklaruj dynamiczną, dwywymiarową tablicę znaków o wymiarach mxn.
//Napisz program, który wypełni tablicę losowo literami alfabetu
//łacińskiego i wypisze te litery, które występują we wszystkich wierszach
//macierzy.
#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
	srand(time(nullptr));

	int m, n;
	cout << "podaj wymiary nxm :";
	cin >> m >> n;
	char **tablica = new char*[m];
	for (int i = 0; i < m; i++)
		tablica[i] = new char[n];
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		{
			tablica[i][j] = 'a' + rand() % 25;
			cout << tablica[i][j] << "\t";
		}
		cout << endl;
	}
	char znak = 'a';
	bool CzyJest = false;
	int ilosc = 0;
	cout << "powtarzajace to: ";
	for (int k = 0; k<25; k++)
	{
		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<n; j++)
			{
				if (tablica[i][j] == znak) { ilosc++; break; }
			}

		}
		if (ilosc == m) cout << znak << ", ";
		znak++;
		ilosc = 0;
	}




}
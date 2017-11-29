// zad7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int n;
	int m;

	cout << "Podaj n-elementow:";
	cin >> n;
	cout << "Podaj m-elementow:";
	cin >> m;

	int tab[n][m];

	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++)
			tab[i][j] = rand() % 19 + (-9); // wypełniam tablicę losowymi liczbami

	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
			cout << tab[i][j] << "    "; // wypisuje powstałą w ten sposób tablicę
		cout << endl;
	}
	int tab1[n]; // wprowadzam tablicę do liczenia wierszy
	int tab2[m]; // do liczenia kolumn
	int index = 0; // licznik mojej tablicy dla wierszy
	int codex = 0; // licznik dla kolumn

	for (int i = 0; i<n; i++) // uzupełniam tablicę dla wierszy i kolumn samymi jedynkami
		tab1[i] = 1;
	for (int i = 0; i<m; i++)
		tab2[i] = 1;
	// Po co taki zabieg? A no po to, że muszę liczyć iloczyn, więc muszę mnożyć - spróbujcie to mnożyć (tym moim sposobem) bez tych jedynek, a wywali wam liczby z kosmosu, bo tablica nie jest uzupełniona.

	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
			tab1[index] *= tab[i][j]; // uzupełnianie dla wierszy
		index++;
	}

	for (int j = 0; j<m; j++)
	{
		for (int i = 0; i<n; i++)
		{
			tab2[codex] *= tab[i][j]; // dla kolumn
		}
		codex++;
	}

	cout << endl << "ILOCZYNY WIERSZY:" << endl;
	for (int i = 0; i<index; i++)
		cout << "wiersz " << i + 1 << " = " << tab1[i] << endl;

	cout << endl << endl << "ILOCZYNY KOLUMN:" << endl;
	for (int i = 0; i<codex; i++)
		cout << "kolumna " << i + 1 << " = " << tab2[i] << endl;

	system("pause");

	return 0;
}
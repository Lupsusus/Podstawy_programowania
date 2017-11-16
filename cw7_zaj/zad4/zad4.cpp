//4. Zadeklaruj dynamiczną dwuwymiarową tablicę elementów typu całkowitego
//wypełnij ją danymi (kolumnowo) a następnie
//a. zmień miejscami dwie kolumny wybrane przez użytkownika
//b. zamień miejscami dwa wiersze wybrane przez użytkownika
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int kol1, kol2, wie1, wie2;
int main()
{
	int **tablica;
	int l_wierszy, l_kolumn;

	cout << "Podaj ilosc wierszy: ";
	cin >> l_wierszy;
	cout << "Podaj ilosc kolumn: ";
	cin >> l_kolumn;
	cout << endl;
	tablica = new int *[l_wierszy];
	for (int i = 0; i<l_wierszy; i++)
	{
		tablica[i] = new int[l_kolumn];
	}
	for (int i = 0; i<l_wierszy; i++)
	{
		for (int j = 0; j<l_kolumn; j++)
		{
			cout << "Podaj liczbe: ";
			cin >> tablica[j][i];
		}
	}
	cout << endl;
	for (int i = 0; i<l_wierszy; i++)
	{
		for (int j = 0; j<l_kolumn; j++)
		{
			cout << tablica[i][j] << " ";

		}
		cout << endl;
	}
	cout << endl << "Podaj numer pierwszej kolumny do zamiany: ";
	cin >> kol1;
	cout << endl << "Podaj numer drugiej kolumny do zamiany: ";
	cin >> kol2;
	if (kol1-1>l_kolumn || kol2-1>l_wierszy)
	{
		cout << "Bledne dane." << endl;
	}
	else
	{
		for (int i = 0; i<l_wierszy; i++)
		{
			swap(tablica[i][kol1-1], tablica[i][kol2-1]);
		}
	}
	cout << endl;
	cout << endl;
	cout << "Tablica: " << endl << endl;
	for (int i = 0; i<l_wierszy; i++)
	{
		for (int j = 0; j<l_kolumn; j++)
		{
			cout << tablica[i][j] << " ";

		}
		cout << endl;
	}
	cout << "Podaj pierwszy numer wiersza do zamiany:";
	cin >> wie1;
	cout << "Podaj drugi numer wiersza do zamiany: ";
	cin >> wie2;
	if (wie1-1>l_kolumn || wie2-1>l_wierszy)
	{
		cout << "Bledne dane";
	}
	else
	{
		for (int j = 0; j<l_wierszy; j++)
		{
			swap(tablica[wie1-1][j], tablica[wie2-1][j]);
		}
	}
	cout << endl;
	cout << endl;
	cout << "Tablica: " << endl << endl;
	for (int i = 0; i<l_wierszy; i++)
	{
		for (int j = 0; j<l_kolumn; j++)
		{
			cout << tablica[i][j] << " ";

		}
		cout << endl;
	}
	for (int i = 0; i<l_wierszy; i++)
	{
		delete(tablica[i]);
	}
	delete(tablica);
	cout << endl;

	system("PAUSE");
	return 0;
}
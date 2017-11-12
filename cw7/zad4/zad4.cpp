//4. Zadeklaruj dynamiczną dwuwymiarową tablicę elementów typu całkowitego
//wypełnij ją danymi (kolumnowo) a następnie
//a. zmień miejscami dwie kolumny wybrane przez użytkownika
//b. zamień miejscami dwa wiersze wybrane przez użytkownika
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int k1, k2, w1, w2;
int main()
{
	int **tablica;
	int l_wierszy, l_kolumn;

	cout << "Podaj ilosc wiersz: ";
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
			cout << "Podaj wartosc wpisania do tabeli: ";
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
	cout << endl << "Podaj numer kolumny pierwszej do zamiany(zaczynamy od zera): ";
	cin >> k1;
	cout << endl << "Podaj numer kolumny drugiej do zamiany(zaczynamy od zera): ";
	cin >> k2;
	if (k1>l_kolumn || k2>l_wierszy)
	{
		cout << "Bledne dane." << endl;
	}
	else
	{
		for (int i = 0; i<l_wierszy; i++)
		{
			swap(tablica[i][k1], tablica[i][k2]);
		}
	}
	cout << endl;
	cout << endl;
	cout << "Stan tablicy po zamianie: " << endl << endl;
	for (int i = 0; i<l_wierszy; i++)
	{
		for (int j = 0; j<l_kolumn; j++)
		{
			cout << tablica[i][j] << " ";

		}
		cout << endl;
	}
	cout << "Podaj pierwszy numer wiersza do zamiany (zaczynajac od 0):";
	cin >> w1;
	cout << "Podaj drugi numer wiersza do zamiany (zaczynajac od 0): ";
	cin >> w2;
	if (w1>l_kolumn || w2>l_wierszy)
	{
		cout << "Bledne dane!!!";
	}
	else
	{
		for (int j = 0; j<l_wierszy; j++)
		{
			swap(tablica[w1][j], tablica[w2][j]);
		}
	}
	cout << endl;
	cout << endl;
	cout << "Stan tablicy po zamianie: " << endl << endl;
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
		delete[]tablica[i];
	}
	delete[]tablica;
	cout << endl;

	system("PAUSE");
	return 0;
}
// zad1.cpp : Defines the entry point for the console application

//Napisz program, w który utworzy dynamiczną tablicę dwuwymiarową liczb całkowitych
//o wymiarach podanych przez użytkownika. Następnie wypełni ją losowymi liczbami
//z przedziału <100, 300>. Wypisz na ekranie wszystkie liczby, których suma cyfr jest
//podzielna przez 3.

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int **tablica;
	int n, m;
	cout << "Podaj dlugosc boku n: ";
	cin >> n;
	cout << "Podaj dlugosc boku m: ";
	cin >> m;
	cout << endl;
	tablica = new int *[n];

	for (int i = 0; i<n; i++)

		tablica[i] = new int[m];

	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			tablica[i][j] = rand() % 200 + 100;
		}
	}

	cout << "Tablica wyglada nastepujaco: " << endl;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			cout << tablica[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << "Liczby podzielne przez 3: " << endl;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			if (tablica[i][j] % 3 == 0)
			{
				cout << tablica[i][j] << " ";
			}
		}
	}
	for (int i = 0; i<n; i++)
	{
		delete[]tablica[i];
	}
	delete[]tablica;

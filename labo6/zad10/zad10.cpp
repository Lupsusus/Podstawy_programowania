// zad10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Dana jest tablica n-elementowa liczb całkowitych. Napisz program, ktoź ry wypisze taką liczbę, od
//ktoź rej jest mniejszych k-liczb, gdy brak takich liczb wypisywane jest „brak”. 
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	srand(time(NULL));
	int n;
	cout << "PODAJ DLUGOSC TABLICY: ";
	cin >> n;
	int tab[n];
	for (int i = 0; i<n; i++)
	{
		tab[i] = rand() % 21 + (-10);
	}
	for (int i = 0; i<n; i++)
	{
		cout << tab[i] << " ";
	}
	int k;
	int index = 0;
	int max = 0;
	cout << endl << "liczby posortowane rosnaco: " << endl;
	sort(tab, tab + n);
	for (int i = 0; i < n; i++)
		cout << tab[i] << " ";
	for (int i = 0; i<n; i++)
	{
	}
	cout << endl << "PODAJ ILE LICZB MA BYC MNIEJSZYCH: ";
	cin >> k;
	cout << endl << "liczba " << endl;
	cout << tab[k];
	cout << endl;
	if (k == 0)
	{
		cout << "BRAK" << endl;
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
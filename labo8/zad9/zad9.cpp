// zad9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
using namespace std;

struct stos
{
	int dane;
	stos *wsk;
};
struct parzyste
{
	int dane;
	parzyste *wsk;
};
struct nieparzyste
{
	int dane;
	nieparzyste *wsk;
};


main()
{
	srand(time(NULL));
	stos *wierzcholek = NULL;
	stos *temp;
	int liczba;
	int n;

	cout << "Ile elementow chcesz wylosowac do stosu?" << endl;
	cin >> n;

	cout << endl << endl << "Wylosowane elementy:" << endl;
	for (int i = 0; i<n; i++)
	{
		temp = wierzcholek;
		wierzcholek = new stos;

		liczba = rand() % 10;
		cout << liczba << "  ";
		(*wierzcholek).dane = liczba;
		(*wierzcholek).wsk = temp;
	}
	cout << endl;

	parzyste *wierzcholek_p = NULL;
	nieparzyste *wierzcholek_n = NULL;

	parzyste *temp_p;
	nieparzyste *temp_n;

	temp = wierzcholek;
	while (temp != NULL)
	{
		if ((*temp).dane % 2 == 0)
		{
			temp_p = wierzcholek_p;
			wierzcholek_p = new parzyste;
			(*wierzcholek_p).dane = (*temp).dane;
			(*wierzcholek_p).wsk = temp_p;
		}
		else
		{
			temp_n = wierzcholek_n;
			wierzcholek_n = new nieparzyste;
			(*wierzcholek_n).dane = (*temp).dane;
			(*wierzcholek_n).wsk = temp_n;
		}
		temp = (*temp).wsk;
	}

	cout << endl << "PARZYSTE:" << endl; 
	temp_p = wierzcholek_p;
	while (temp_p != NULL)
	{
		cout << (*temp_p).dane << endl;
		temp_p = (*temp_p).wsk;
	}

	cout << endl << "NIEPARZYSTE:" << endl; 
	temp_n = wierzcholek_n;
	while (temp_n != NULL)
	{
		cout << (*temp_n).dane << endl;
		temp_n = (*temp_n).wsk;
	}
	return 0;

	
}
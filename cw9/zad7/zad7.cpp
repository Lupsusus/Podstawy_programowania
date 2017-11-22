//7.Napisz program, który wykona następujące obliczenia:
//a) wypełni tablicę N-elementową pseudolosowymi liczbami całkowitymi z przedziału
//<1,100>,
//b)wypisze dane tablicy otrzymanej w punkcie a, ,
//c)utworzy nową tablicę jednowymiarową zawierającą same parzyste elementy tablicy
//otrzymanej w punkcie a,
//d)wypisze dane tablicy z punktu c
//e)posortuje nierosnąco tablicę otrzymaną w punkcie d,
//f)wypisze posortowaną tablicę otrzymaną w punkcie e. 

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <algorithm>
#include <iostream>
using namespace std;
int n, x;
int tab[100];
int lP[100];
int dod = 0;
void wczytaj()
{
	cout << "Podaj rozmiar tablicy: ";
	cin >> n;
}
void uzupelnij()
{
	srand(time(NULL));
	for (int i = 0; i<n; i++)
	{
		tab[i] = rand() % 100 + 1;
	}
}
void wypisz1()
{
	for (int i = 0; i<n; i++)
	{
		cout << tab[i] << " ";
	}
}
void parzyste()
{

	for (int i = 0; i<n; i++)
	{
		if (tab[i] % 2 == 0)
		{
			lP[dod] = tab[i];
			dod++;
		}
	}
}
void wypisz2()
{
	cout << endl << "Liczby parzyste: " << endl;
	for (int i = 0; i<dod; i++)
	{
		cout << lP[i] << " ";
	}
}
void sortowanie()
{
	for (int i = 0; i < dod; i++)
	{
		for (int j = 0; j < dod - 1; j++)
		{
			if (lP[j] < lP[j + 1])
				swap(lP[j], lP[j + 1]);

		}
	}

}
void wypisz3()
{
	cout << endl << "Posortowane nie rosnaco: " << endl;
	for (int i = 0; i<dod; i++)
	{
		cout << lP[i] << " ";
	}
}
int main()
{
	wczytaj();
	uzupelnij();
	wypisz1();
	parzyste();
	wypisz2();
	sortowanie();
	wypisz3();
	system("pause");
	return 0;
}
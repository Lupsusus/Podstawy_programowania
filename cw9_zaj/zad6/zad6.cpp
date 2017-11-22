#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;
int n;
int tt[100];
int tP[100];
int tN[100];
void wczytaj()
{
	cout << "Podaj ilosc elementow tablicy:";
	cin >> n;

}
void do_tab()
{
	for (int i = 0; i<n; i++)
	{
		tt[i] = -4 + 9 * rand() / (RAND_MAX + 1);
		cout << tt[i] << endl;
	}
}
void wypisz()
{
	cout << "DANE:" << endl;
	for (int i = 0; i < n; i++)
		cout << tt[i] << "  ";
}
void parara() 
{
	int yndex = 0, zyndex = 0; 
	for (int i = 0; i < n; i++)
		if (i % 2 == 0)
		{
			tP[yndex] = tt[i];
			yndex++;
		}
		else if (i % 2 != 0)
		{
			tN[zyndex] = tt[i];
			zyndex++;
		}
	cout << endl << "NIEPARZYSTE:" << endl;
	for (int i = 0; i < yndex; i++) cout << tP[i] << "  " << endl;

	cout << endl << "PARZYSTE:" << endl;
	for (int i = 0; i < zyndex; i++) cout << tN[i] << "  " << endl;

}
int main()
{
	srand(time(NULL));
	wczytaj();
	do_tab();
	parara();
	system("pause");
    return 0;
}


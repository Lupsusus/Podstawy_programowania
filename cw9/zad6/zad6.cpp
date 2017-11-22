// zad6.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;
int k;
int tab[100];
int tP[100]; // tablica dla przystych
int tN[100]; // nieparzyste
void wczytaj()
{
	cout << "Podaj ilosc elementow tablicy:";
	cin >> k;

}
void losowanie()
{
	for (int i = 0; i < k; i++)
		tab[i] = rand() % 9 + (-4);
}
void wypisz()
{
	cout << "DANE:" << endl;
	for (int i = 0; i < k; i++)
		cout << tab[i] << "  ";
}
void funkcja() // tutaj oddzielam parzyste od nieparzystych
{
	int index = 0, codex = 0; // index liczy mi numer tablicy dla parzystych, a codex dla nieparzystych
	for (int i = 0; i < k; i++)
		if (tab[i] % 2 == 0)
		{
			tP[index] = tab[i];
			index++;
		}
		else if (tab[i] % 2 != 0)
		{
			tN[codex] = tab[i];
			codex++;
		}
	cout << endl << "PARZYSTE:" << endl;
	for (int i = 0; i < index; i++) cout << tP[i] << "  ";

	cout << endl << "NIEPARZYSTE:" << endl;
	for (int i = 0; i < codex; i++) cout << tN[i] << "  ";

}


int main()
{
	srand(time(NULL));
	wczytaj();
	losowanie();
	wypisz();
	funkcja();


	system("pause");
	return 0;
}
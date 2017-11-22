// 4. Zmodyfikuj program z zadania 3 tak, aby tablica była przekazywana jako argument funkcji.

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

int s, n; // zostawiam tylko to
		  // nie ma zbytniej różnicy w tym kodzie (tablicę nie muszę już deklarować na górze, tylko w mainie mogę to zrobić)
void dodawanie(int *tab) // <--- zmiana względem pierwszej wersji
{
	int suma = 0;
	int liczba;

	cout << "Ile elementow chcesz dodac?:";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Wpisz liczbe " << i + 1 << ": ";
		cin >> liczba;
		tab[i] = liczba;
		suma += liczba;
	}
	s = suma;
}

void usuwanie(int *tab) // <--- zmiana względem pierwszej wersji
{
	int element, codex = 0;

	cout << "Jaki element chcesz usunac?:";
	cin >> element;
	bool prawdziwe = false;

	int *tab2 = new int[n - 1];
	for (int i = 0; i < n; i++)
	{
		if (tab[i] == element)
		{
			prawdziwe = true;
			codex = i;
		}

	}
	if (prawdziwe)
	{
		int licznik = 0;

		for (int i = 0; i < codex; i++)
			tab2[licznik++] = tab[i];

		for (int i = codex + 1; i < n; i++)
			tab2[licznik++] = tab[i];

		cout << endl << endl << "Tablica po usunieciu elementu:" << endl;
		for (int i = 0; i < n - 1; i++)
			cout << "tablica[" << i << "]:" << tab2[i] << endl;
	}
	else cout << "brak odpowiedniego elementu" << endl;
}

int main()
{
	int *tab = new int[100];    //wskaźnik na stuelementową tablicę int
	dodawanie(tab); //od tej tablicy (jest to o tyle wygodniejsze, że wypisuję w te nawiasy tablicę na jakiej chcę operować)
	cout << endl << "SUMA: " << s << endl << endl;
	usuwanie(tab); //od tej tablicy
	return 0;
}
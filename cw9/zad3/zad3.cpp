//3. Napisz program, który umożliwi wykonywanie, dla tablicy jednowymiarowej dynamicznej
//liczb całkowitych, następujących operacji realizowanych przez funkcje:
//a) dodawanie nowego elementu,
//b) usuwanie istniejącego elementu, podawana jest wartość usuwanego elementu, gdy
//brak elementu wypisany jest komunikat „brak elementu o podanej wartości”
//c) wyświetlanie tablicy.
//Uwaga! Tablica jest przekazywana przez zmienną globalną

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

int *tab = new int[100];
int s, n; // s - bedzie wynikiem sumy ; n - liczba elementow, ktore chce dodac

void dodawanie() // dodaje liczby i od razu je sumuje
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

void usuwanie()
{
	int element, codex = 0;
	// codex musi mi zapamiętać pozycję liczby, którą chcę usunąć
	cout << "Jaki element chcesz usunac?:";
	cin >> element;
	bool prawdziwe = false;

	int *tab2 = new int[n - 1];
	for (int i = 0; i < n; i++)
	{
		if (tab[i] == element)
		{
			prawdziwe = true; // jeśli element jest w tablicy to wartość przymie = true
			codex = i;
		}
	}
	if (prawdziwe) // czyli jeśli warunek jest "true"
	{
		int licznik = 0; // liczę sobie nową tablicę

		for (int i = 0; i < codex; i++)
			tab2[licznik++] = tab[i];

		for (int i = codex + 1; i < n; i++)
			tab2[licznik++] = tab[i];

		cout << endl << endl << "Tablica po usunieciu elementu:" << endl;
		for (int i = 0; i < n - 1; i++)
			cout << "tablica[" << i << "]:" << tab2[i] << endl;
	}
	else cout << endl << "brak elelemntu o podanej wartosci!" << endl;
	// jesli warunek zostal na false no to nie bylo takiego elementu




}

int main()
{
	dodawanie();
	cout << endl << "SUMA: " << s << endl << endl;
	usuwanie();
	return 0;
}
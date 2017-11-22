//3. Napisz program, który umożliwi wykonywanie, dla tablicy jednowymiarowej dynamicznej
//liczb całkowitych, następujących operacji realizowanych przez funkcje :
//a) dodawanie nowego elementu,
//b) usuwanie istniejącego elementu, podawana jest wartość usuwanego elementu, gdy
//brak elementu wypisany jest komunikat „brak elementu o podanej wartości”
//c) wyświetlanie tablicy.
//Uwaga!Tablica jest przekazywana przez zmienną globalną
#include "stdafx.h"
#include <iostream>
using namespace std;
int *T = new int[100];
int n;

void dodaj() {
	int x;
	cout << "Podaj element do dodania: ";
	cin >> x;
	T[n] = x;
	n++;
}
void usun() {
	int el, x = 0;
	cout << "Podaj element do usuniecia: ";
	cin >> el;
	bool tr = false;
	int *tab2 = new int[n - 1];
	for (int i = 0; i < n; i++)
	{
		if (T[i] == el)
		{
			tr = true; 
			x = i;
		}
	}
	if (tr) 
	{
		int licz = 0; 


		for (int i = 0; i < x; i++)
			tab2[licz++] = T[i];

		for (int i = x + 1; i < n; i++)
			tab2[licz++] = T[i];

		
		for (int i = 0; i < n; i++)
		{
			T[i] = tab2[i];
		}
		n--;
	}
	else {
		cout << endl << "brak elelemntu o podanej wartosci!" << endl;
	}
}

void wypisz() {
	cout << endl << endl << "Tablica: " << endl;
	for (int i = 0; i < n; i++)
		cout << "tablica[" << i << "]:" << T[i] << endl;
};

int main(){
int x = 0, wyb;
do{
	wyb = 0;
	cout << "Wybierz operacje: " << endl << "1) dodawanie nowego elementu" << endl << "2) usuwanie elementu" << endl << "3) wyswietlanie" << endl << "4) koniec" << endl;
	cin >> wyb;
		switch (wyb)
		{
		case 1:
			dodaj();
			break;

		case 2:
			usun();
			break;
		case 3:
			wypisz();
			break;
		case 4:
			x = 1;
			break;
		default:
			break;
		}
} while (x != 1);
	system("pause");
	return 0;
}


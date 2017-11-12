//10. Napisz program, który utworzy stos zawierający liczby całkowite
//podane przez użytkownika.
//Podanie zera kończy wprowadzanie danych.Sprawdź, czy stos zawiera
//element o wartości podanej przez użytkownika,
//same parzyste liczby

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
struct stos
{
	int dane;// pole z danymi
	stos *wsk;// wskaźnik pokazujący na element kolejny
};
int main() {
	stos * wierzcholek = NULL;// deklaracja wierzchołka
	int liczba, n, x, z = 0;;// zmienna do wprowadzania danych
	stos* temp;// zmienna pomocnicza
	int wynik = 0;
	// dodawanie elementu do stosu
	cout << "Podaj liczbe: ";
	cin >> liczba;
	while(liczba != 0)
	{
		temp = wierzcholek;
		wierzcholek = new stos;// alokacja nowego elementu, który teraz będzie wierzchołkiem
		(*wierzcholek).dane = liczba;// wprowadzenie danej
		(*wierzcholek).wsk = temp;// powiązanie nowego elementu z elementem, który wcześniej był wierzchołkiem
		cout << "Podaj liczbe: ";
		cin >> liczba;
	}
	temp = wierzcholek;
	cout << "Podaj liczbe do sprawdzenia: " << endl;
	cin >> x;
	while (temp != NULL)
	{
		if (x == (*temp).dane) {
			z = 1;
		}
		temp = (*temp).wsk;
	}
	if (z != 0) {
		cout << "Podana liczba wystepuje w stosie.";
	}
	else {
		cout << "Podana liczba nie wystepuje w stosie.";
	}
	system("PAUSE");
}

//5. Współczynniki wielomianu zapisane są w postaci stosu, gdzie na
//wierzchołku znajduje się liczba an(przy n - tej potędze).Napisz program
//obliczania wartości tego wielomianu dla dowolnego x = x0.Skorzystaj ze
//schematu Hornera.

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
struct stos
{
	int dane;
	stos *wsk;
};
int main() {
	stos * wierzcholek = NULL;
	int liczba, n, x;
	stos* temp;
	int wynik = 0;
	cout << "Podaj najwieksza potege wielomianu:";
	cin >> n;

	for (int i = 0; i<n + 1; i++)
	{
		temp = wierzcholek;
		wierzcholek = new stos;
		cout << "Podaj wspolczynnik potegi " << i << ": ";
		cin >> liczba;
		(*wierzcholek).dane = liczba;
		(*wierzcholek).wsk = temp;
	}
	temp = wierzcholek;
	cout << "Podaj x dla ktorego ma zostac wyznaczona wartosc wielomianu: ";
	cin >> x;
	cout << "Elementy na stosie: " << endl;
	while (temp != NULL)
	{
		cout << (*temp).dane << endl;
		wynik = wynik + (int)(*temp).dane;
		wynik = x* wynik;
		temp = (*temp).wsk;
	}
	cout << "Wynik: " << endl;
	cout << wynik/x << endl;
	system("PAUSE");
}

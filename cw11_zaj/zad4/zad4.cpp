//4.Operacja „ + ” jest zdefiniowana dla argumentów typu liczbowego.Wykorzystując mechanizm
//przeciążania zdefiniuj funkcje dla operacji :
//a)Dodawania dwu wektorów,
//b)Dodawania dwu macierzy prostokątnych,
//c)Dodawania pól liczbowych w dwu różnych strukturach tego samego typu.
//d)Napisz program, który w odpowiedni sposób wykorzysta te funkcje.
//Uwaga!Zdefiniuj struktury TWektor, TMacierz, TLiczby.Przeciąż operator dodawania.Sprawdź czy
//można dodawać podane macierze

#include "stdafx.h"

#include <iostream>
#include <time.h>

using namespace std;
int n;
#include "source.cpp"
int main()
{
	
	int *tab1, *tab2, **ma1, **ma2;
	int x1, x2, y1, y2;
	cout << "Podaj wielkosc wektorow: ";
	cin >> n;
	tab1 = new int[n];
	tab2 = new int[n];
	uzup_we(tab1);
	uzup_we(tab2);
	wypisz(tab1);
	wypisz(tab2);
	dodaj(tab1, tab2);
	cout << "Podaj wielkosc macierzy nr1: ";
	cin >> x1;
	cin >> y1;
	int a = 0;
	int b = n;
	ma1 = new int*[x1];
	for (int i = 0; i < x1; i++) {
		ma1[i] = new int[y1];
		for (int j = 0; j < y1; j++) {
			ma1[i][j] = (rand() / (RAND_MAX + 1.0))* (b - a) + a;
		}
	}
	cout << "Podaj wielkosc macierzy nr2: ";
	cin >> x2;
	cin >> y2;
	ma2 = new int*[x2];
	for (int i = 0; i < x2; i++) {
		ma2[i] = new int[y2];
		for (int j = 0; j < y2; j++) {
			ma2[i][j] = (rand() / (RAND_MAX + 1.0))* (b - a) + a;
		}
	}
	wypisz_ma(ma1, x1, y1);
	wypisz_ma(ma2, x2, y2);
	if (x1 == x2 && y1 == y2) {
		dodaj(ma1, ma2, x1, y1);
	};





	system("pause");
    return 0;
}

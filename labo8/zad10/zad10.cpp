#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <string>
using namespace std;
struct stos
{
	string imie;
	string nazwisko;
	string kierunek;
	int rok;
	stos *wsk;
};

main()
{
	stos *wierzcholek = NULL;
	stos *temp;
	string imie;
	string nazwisko;
	string kierunek;
	int rok;
	int n;

	cout << "Ilu studentow chcesz dodac do bazy?: ";
	cin >> n;

	for (int i = 0; i<n; i++)
	{
		temp = wierzcholek;
		wierzcholek = new stos;

		cout << endl;
		cout << "Podaj imie:";
		cin >> imie;
		cout << "Podaj nazwisko:";
		cin >> nazwisko;
		cout << "Podaj kierunek:";
		cin >> kierunek;
		cout << "Podaj rok [4 cyfry]:";
		cin >> rok;

		(*wierzcholek).imie = imie;
		(*wierzcholek).nazwisko = nazwisko;
		(*wierzcholek).kierunek = kierunek;
		(*wierzcholek).rok = rok;
		(*wierzcholek).wsk = temp;
	}

	cout << endl << endl << endl << "BAZA STUDENTOW:" << endl << endl;
	temp = wierzcholek;
	while (temp != NULL)
	{
		cout << (*temp).imie << "  " << (*temp).nazwisko << endl;
		cout << (*temp).kierunek << "  " << (*temp).rok << endl << endl;
		temp = (*temp).wsk;
	}

	return 0;
}
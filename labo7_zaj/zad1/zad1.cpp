//1. Napisz program przechowujący bazę zawierającą dane studentów: nazwisko, kierunek, liczba
//przedmiotów, tablica przedmiotów i oceny z nich ( zdefiniuj strukturę do przechowywania nazw
//przedmiotów i ocen). Napisz program, który zależnie od wyboru użytkownika będzie:
//a. dodawał studenta do bazy;
//b. wyszukiwał studentów o średniej z semestru większej od podanej i wypisywał ich nazwiska .
#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <algorithm>
#include <sstream>
using namespace std;
struct oceny
{
	int ocena[7]; 

};
struct przedmioty
{
	string przedmiot[7];
};
struct baza
{
	string nazwisko;
	string kierunek;
	int liczba;
	przedmioty studiowanie;
	oceny kazda;
};

int main()
{
	baza tab[200];
	int n = 0;
	int m = 0;

	while (m != 3)
	{
		cout << "[1] Dodaj do bazy" << endl;
		cout << "[2] Wyszukaj po sredniej" << endl;
		cout << "[3] Koniec" << endl;
		cin >> m;

		switch (m)
		{
		case 1:


			cout << "Nazwisko:";
			cin >> tab[n].nazwisko;
			cout << "Kierunek:";
			cin >> tab[n].kierunek;
			cout << "Liczba przedmiotow:";
			cin >> tab[n].liczba;

			for (int i = 0; i < tab[n].liczba; i++)
			{
				cout << "Podaj " << i + 1 << " przedmiot:";
				cin >> tab[n].studiowanie.przedmiot[i];
				cout << "Podaj " << i + 1 << " ocene:";
				cin >> tab[n].kazda.ocena[i];
			}
			cout << endl << endl;



			cout << endl << endl;

			for (int j = 0; j <= n; j++)
			{
				cout << "Nazwa:" << tab[j].nazwisko << endl;

				for (int i = 0; i < tab[j].liczba; i++)
				{
					cout << "Ocena z " << tab[j].studiowanie.przedmiot[i] << " = " << tab[j].kazda.ocena[i] << endl;

				}

				cout << endl << endl;
			}
			n++;
			break;

		case 2:

			float cyfra;
			int suma;
			int licznik;
			float srednia;

			cout << "Podaj srednia:";
			cin >> cyfra;

			for (int j = 0; j <= n; j++)
			{
				srednia = 0;
				licznik = 0;
				suma = 0;
				for (int i = 0; i < tab[j].liczba; i++)
				{
					suma = suma + tab[j].kazda.ocena[i];
					licznik++;
				}
				srednia = (float)suma / licznik;
				if (srednia > cyfra)
					cout << endl << tab[j].nazwisko << " uzyskal srednia: " << srednia << endl << endl;

			}
			break;
		}
	}
	system("pause");
	return 0;
};
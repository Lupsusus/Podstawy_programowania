// zad8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <time.h>
#include <cstdlib>
using namespace std;


struct data_urodzenia {
	int dzien, miesiac, rok;
};

struct Student {
	char imie[50]; char nazwisko[50]; int rok_studiow; char kierunek[50];
	data_urodzenia dataurodzenia;
};

int main()
{
	srand(time(NULL));
	Student tab[100];
	for (int i = 0; i<100; i++)
	{
		int q = (rand() / (RAND_MAX + 1.0))* (5 - 1) + 1;
		int w = (rand() / (RAND_MAX + 1.0))* (3- 0) + 0;
		int e = (rand() / (RAND_MAX + 1.0))* (1997 - 1980) + 1980;
		int r = (rand() / (RAND_MAX + 1.0))* (12 - 1) + 1;
		int t = (rand() / (RAND_MAX + 1.0))* (30 - 1) + 1;
		char x[3];
		_itoa_s(i + 1, x, 10);
		char im[6] = "imie_";
		char na[10] = "nazwisko_";
		char temp = im + x;
		tab[i].imie = im + x;
		tab[i].nazwisko = na + x;
		tab[i].rok_studiow = q;
		if (w == 0) {
			tab[i].kierunek = "informatyka";
		}
		else if (w == 1) {
			tab[i].kierunek = "chemia";
		}
		else if (w == 2) {
			tab[i].kierunek = "matematyka";
		}
		tab[i].dataurodzenia.dzien = t;
		tab[i].dataurodzenia.miesiac = r;
		tab[i].dataurodzenia.rok = e;
	}
	//for (int i = 0; i < 100; i++) {
	//	cout << tab[i].imie;
	//}
	system("pause");
    return 0;
}


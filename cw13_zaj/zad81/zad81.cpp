//8.W notatniku przygotuj plik „dane.txt”, w którym w każdym wierszu podasz następujące
//dane :
//towar, liczba / ilość, cena jednostkowa.Napisz program, który wczyta dane z pliku dane.txt i w
//pliku „wyniki.txt” w kolejnych wierszach, dla każdego towaru wypisze towar i wartość(gdzie
//	wartość = ilość*cena jednostkowa).Na ekranie wypisz towary o największej i najmniejszej
//	wartości.

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;
void czytanie(string nazwaPliku)
{
	ifstream plikOdczyt;
	plikOdczyt.open(nazwaPliku.c_str(), ios::in);
	char zn;
	if (plikOdczyt.good()) {

		plikOdczyt.close();
	}
	else
		cout << "brak pliku" << endl;
}
void czytanie2(string nazwaPliku)
{
	ifstream plikOdczyt;
	plikOdczyt.open(nazwaPliku.c_str(), ios::in);
	if (plikOdczyt.good())
	{
		string linia;
		int i = 0;
		char zn;
		float temp = 0;
		while (!plikOdczyt.eof())
		{
			getline(plikOdczyt, linia);
			if (i == 2) {
				while (!plikOdczyt.eof())
				{
					plikOdczyt >> temp;
				}
			}
			i++;
		}
		plikOdczyt.close();
		cout << temp;
	}
	else cout << "brak pliku" << endl;
}

void czytanie3(string nazwaPliku)
{
	ifstream plikOdczyt;
	plikOdczyt.open("dane.txt", ios::in);
	if (plikOdczyt.is_open()) {
		float a;
		string zn;
		string linia;
		string temp[3];
		int i = 0;
		int j = 0;
		getline(plikOdczyt, linia);
		while (!plikOdczyt.eof())
		{
			while (linia[j] != ';') {
				temp[i] = temp[i] + linia[j];
				j++;
			}
			i++;
			j++;
		}
		cout << temp[0];
		cout << temp[1];
		cout << temp[2];
		plikOdczyt.close();

	}
	else cout << "brak pliku" << endl;
}


int main()
{
	czytanie3("dane.txt");
	system("PAUSE");
	return 0;
}

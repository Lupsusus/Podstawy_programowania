//7. Zdefiniuj typ strukturalny oraz 50 elementową tablicę struktur
//pozwalającą przechowywać przepisy na ciasta(rodzaj, nazwa, czas
//	wykonania, stopień trudności(1, 2, 3)).Napisz program, który będzie
//	umożliwiał wprowadzanie danych do książki kucharskiej z ciastami, a
//	następnie :
//• Wypisze ciasta z jednego rodzaju np.torty
//• Obliczy średni czas wykonania ciast
//• Wypisze ciasta z podziałem na stopień trudności.
#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctype.h>
#include <time.h>
#include <conio.h>
using namespace std;

struct przepisy
{
	std::string rodzaj;
	std::string nazwa;
	int czas;
	int trudnosc;
};


int main()
{
	przepisy tablica[50];
	int n;
	cout << "Podaj ilosc przepisow:";
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cout << "Podaj rodzaj:";
		cin >> tablica[i].rodzaj;
		cout << "Podaj nazwe:";
		cin >> tablica[i].nazwa;
		cout << "Czas wykonania (w min):";
		cin >> tablica[i].czas;
		cout << "Trudnosc:";
		cin >> tablica[i].trudnosc;
		cout << endl;
	}
	int suma = 0;
	float srednia;

	for (int i = 0; i<n; i++)
	{
		suma += tablica[i].czas;
	}

	string napis;
	cout << "Jaki rodzaj ma zostac wypisany?";
	cin >> napis;
	for (int i = 0; i<n; i++)
	{
		if (tablica[i].rodzaj == napis) cout << tablica[i].nazwa << "," << " ";
	}
	cout << endl << endl;

	srednia = (float)suma / n; 
	cout << "Suma: " << suma << endl;
	cout << "Srednia: " << srednia << endl;

	cout << endl << endl << "Ciasta z 1 stopniem trudnosci: ";
	for (int i = 0; i<n; i++) 
	{
		if (tablica[i].trudnosc == 1) cout << tablica[i].nazwa << "," << " ";
	}

	cout << endl << "Ciasta z 2 stopniem trudnosci: ";
	for (int i = 0; i<n; i++)
	{
		if (tablica[i].trudnosc == 2) cout << tablica[i].nazwa << "," << " ";
	}

	cout << endl << "Ciasta z 3 stopniem trudnosci: ";
	for (int i = 0; i<n; i++)
	{
		if (tablica[i].trudnosc == 3) cout << tablica[i].nazwa << "," << " ";
	}


	system("pause");
	return 0;
}
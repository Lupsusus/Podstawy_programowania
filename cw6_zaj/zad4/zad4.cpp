//4. Napisz program przechowujący bazę danych osób z firmy XXX. Baza
//powinna zawierać informację: imie, nazwisko, rok urodzenia, adres.
//Napisz program, który wczytuje dane do bazy oraz wypisuje osoby urodzone
//po danym roku. Zdefiniuj strukturę do przechowywania daty.
#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
using namespace std;
int n, rok;


struct firma
{
	char imie[20];
	char nazwisko[30];
	int rok_urodzenia;
	string adres;

};
int main()
{
	cout << "Program przechowujacy dane firmy" << endl;
	cout << endl;
	firma baza[1000];
	cout << "Podaj ile osob ma zatrudniac firma: " << endl;
	cin >> n;
	cout << "Podaj rok urodzenia: ";
	cin >> rok;
	for (int i = 0; i<n; i++)
	{
		cout << "Podaj dane " << i + 1 << " osoby" << endl;
		cout << "Podaj imie: ";
		cin >> baza[i].imie;
		cout << "Podaj nazwisko: ";
		cin >> baza[i].nazwisko;
		cout << "Podaj rok urodzenia: ";
		cin >> baza[i].rok_urodzenia;
		cout << "Podaj adres zamieszkania:  ";
		cin >> baza[i].adres;
		cout << endl;
		cout << endl;
	}
	for (int i = 0; i<n; i++)
		if (baza[i].rok_urodzenia > rok)
		{
			cout << "Dane " << i + 1 << " osoby" << endl;
			cout << "Imie: " << baza[i].imie << endl;
			cout << "Nazwisko: " << baza[i].nazwisko << endl;
			cout << "rok_urodzenia: " << baza[i].rok_urodzenia << endl;
			cout << "Adres: " << baza[i].adres << endl;
			cout << endl;
		}



	system("pause");
	return 0;
}
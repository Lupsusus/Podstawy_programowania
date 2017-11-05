//1.	Napisz program umożliwiający przechowywanie danych o strukturze : nazwisko, adres, pensja_brutto, czy_pali.Strukturę nazwij Pracownik.
//Wprowadź dane i wypisz je na ekran.
//Pomoc : część rozwiązania :
//{
//	struct Pracownik
//	{
//		char nazwisko[20];
//		char adres[20];
//		float brutto;
//		bool pali;
//	};
//	Pracownik a;
//	cout << "nazwisko="; cin >> a.nazwisko;
//	cout << "adres="; cin >> a.adres;
//	cout << "brutto="; cin >> a.brutto;
//	cout << "czy_pali(0/1)";
//	cin >> a.pali;
//}


#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

	struct Pracownik
	{
		char nazwisko[20];
		char adres[20];
		float brutto;
		bool pali;
	};


int main()
{
	Pracownik a;
	cout << "nazwisko="; cin >> a.nazwisko;
	cout << "adres="; cin >> a.adres;
	cout << "brutto="; cin >> a.brutto;
	cout << "czy_pali(0/1)"; cin >> a.pali;

	cout << "Twoj pracownik to: " << endl;
	cout << a.nazwisko << endl;
	cout << a.adres << endl;
	cout << a.brutto << endl;
	cout << a.pali << endl;
	system("pause");
    return 0;
}


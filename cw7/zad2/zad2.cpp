#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//2. Napisz program, który zawiera definicję struktury TData.W programie
//dynamicznie utwórz zmienną typu TStudent, następnie wczytaj z klawiatury
//wartości pól, po czym wczytane informacje wydrukuj na ekranie.Przed
//zakończeniem programu usuń zmienną operatorem delete.

struct TData
{
	int dzien, miesiac, rok;
};

struct TStudent
{
	string imie, nazwisko, kierunek;
	TData dataurodzenia;
};

int main()
{


	TStudent* student = new TStudent;


	cout << "Imie: ";
	cin >> student->imie;

	cout << "Nazwisko: ";
	cin >> student->nazwisko;

	cout << "Kierunek: ";
	cin >> student->kierunek;

	cout << "Dzien urodzenia: ";
	cin >> student->dataurodzenia.dzien;


	cout << "Miesiac urodzenia: ";
	cin >> student->dataurodzenia.miesiac;

	cout << "Rok urodzenia: ";
	cin >> student->dataurodzenia.rok;

	cout << endl << endl << student->imie << endl << student->nazwisko << endl << student->kierunek << endl <<
		student->dataurodzenia.dzien << endl << student->dataurodzenia.miesiac << endl << student->dataurodzenia.rok << endl;

	delete student;

	cout << endl << "Koniec programu." << endl << endl;
	return 0;
}
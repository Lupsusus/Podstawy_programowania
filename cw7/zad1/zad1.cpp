/*Dana jest struktura TData, o polach typu liczbowego: dzien, miesiac, rok. Napisz
program definiujący zmienną typu TStudent oraz wskaźnik do zmiennej typu
TStudent. Struktura TStudent zawiera pola: imie (tablica 20 znaków), nazwisko
(tablica 30 znaków), kierunek (tablica 30 znaków), dataurodzenia Program powinien
wczytać z klawiatury wartości pól zmiennej typu TStudent. Zastosuj wskaźnik
i
operator adresu (
nie stosuj operatora new
).
*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

struct TData {
	int dzien, miesiac, rok;
};

struct TStudent {
	char imie[20], nazwisko[30], kierunek[30];
	TData dataurodzenia;
}olo;

int main()
{
	int* wdzien;
	int* wmiesiac;
	int* wrok;
	wdzien = &(olo.dataurodzenia).dzien;
	wmiesiac = &(olo.dataurodzenia).miesiac;
	wrok = &(olo.dataurodzenia).rok;

	cout << "Imie: ";     cin.get(olo.imie, sizeof(olo.imie));
	cout << "Nazwisko: "; cin.get(olo.nazwisko, sizeof(olo.nazwisko));
	cout << "Kierunek: "; cin.get(olo.kierunek, sizeof(olo.kierunek));
	cout << "Dzien urodzenia: "; cin >> *wdzien;
	cout << "Miesiac urodzenia: "; cin >> *wmiesiac;
	cout << "Rok urodzenia: "; cin >> *wrok;
	system("pause");
	return 0;
}
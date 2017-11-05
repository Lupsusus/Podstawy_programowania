//3.	Dana jest lista osób o strukturze z zadania 1 zapisana w tablicy.
//Napisz program, który przepisze wszystkie osoby mające wyższe brutto niż średnia z brutto do nowej tablicy.
//Wypisz na ekran dane z tablicy początkowej i wynikowej.

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
	Pracownik n;
	Pracownik a;
	const int j = 3;
	Pracownik T[j];
	Pracownik Tsr[j];
	float maxpb = 0;
	float minpb = 0;
	float srpb = 0;
	int k = 0;
	for (int i = 0; i < j; i++) {
		cout << "Nowy pracownik: " << endl;
		cout << "Podaj nazwisko: "; cin >> n.nazwisko; cout << endl;
		cout << "Podaj adres: "; cin >> n.adres; cout << endl;
		cout << "Podaj pensje brutto: "; cin >> n.brutto; cout << endl;
		cout << "Czy pali? (0/1): "; cin >> n.pali; cout << endl;
		T[i] = n;
	}
	cout << endl << endl << endl;
	cout << "Twoi Pracownicy to: " << endl;
	for (int i = 0; i < j; i++) {
		n = T[i];
		cout << "Pracownik nr. " << i << " to: " << endl;
		cout << n.nazwisko << endl;
		cout << n.adres << endl;
		cout << n.brutto << endl;
		cout << n.pali << endl << endl;
	}
	cout << endl << endl << endl;
	for (int i = 0; i < j; i++) {
		n = T[i];
		srpb = srpb + n.brutto;
	}
	srpb = srpb / j;
	cout << "Srednia placa: " << srpb;
	for (int i = 0; i < j; i++) {
		n = T[i];
		a = Tsr[i];
		if (n.brutto > srpb) {
			Tsr[k] = n;
				k++;
		}
	}
	cout << endl << "Pracownicy z placa powyzej sredniej: " << endl;
	
	for (int i = 0; i < k; i++) {
		n = Tsr[i];
		cout << n.nazwisko << endl;
		cout << n.adres << endl;
		cout << n.brutto << endl;
		cout << n.pali << endl << endl;
	}
	system("pause");
	return 0;
}


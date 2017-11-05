//2.	Dana jest lista osób o strukturze z poprzedniego zadania zapisana w tablicy.Wprowadź dane n osób do tablicy a następnie napisz program który :
//•	policzy sumę pensji brutto wszystkich pracowników,
//•	Wypisze wartość  maksymalnej pensji brutto,
//•	Wypisze wartość  minimalnej pensji brutto,
//•	Wypisze nazwiska i imiona(?) osób palących.


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
	const int j = 3;
	Pracownik T[j];
	float maxpb = 0;
	float minpb = 0;
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
		if (n.brutto > maxpb) {
			maxpb = n.brutto;
		}
		if (i == 0) {
			minpb = n.brutto;
		}
		if (n.brutto < minpb) {
			minpb = n.brutto;
		}
	}
	cout << "Minimalna: " << minpb << endl;
	cout << "Maksymalna: " << maxpb << endl;
	cout << "Osoby palace: " << endl;
	for (int i = 0; i < j; i++) {
		n = T[i];
		if (n.pali == 1) {
			cout << n.nazwisko << endl;
		}
	}
	system("pause");
	return 0;
}


// zad5.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
///Konwersja z systemu dziesiętnego na inny to dzielenie przez podstawę systemu na który chcemy zmienić, zapisywanie reszty i odczytanie jej od końca.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <sstream>
using namespace std;

int main() {
	srand(time(NULL));
	int n;
	int x;
	int suma = 0;
	int liczba = 0;
	int pom;
	int cyfra;
	string binarny = "";            /// binarny = dwójkowy
	string oktalny = "";            /// oktalny = ósemkowy
	string heksadecymalny = "";      /// heksadecymalny = szesnastkowy
	string cyfraString;

	cout << "Podaj naturalne n <= 5: ";
	cin >> n;
	cout << "Losowanie " << n << " cyfr dla liczby...\n";
	cout << "Wylosowano: ";
	x = rand() % 9 + 1;
	suma += x;
	liczba = liczba * 10 + x;
	cout << x << " ";
	for (int i = 1; i < n; i++) {
		x = rand() % 10;
		suma += x;
		liczba = liczba * 10 + x;
		cout << x << " ";
	}
	cout << "\nPowstała liczba to: " << liczba << endl;
	cout << "Suma cyfr: " << suma << endl;

	///zamiana na system dwójkowy
	pom = liczba;
	while (pom != 0) {
		cyfra = pom % 2;

		///znalezione na internecie. Zamienia liczbę na string.
		ostringstream ss;
		ss << cyfra;
		cyfraString = ss.str();

		binarny += cyfraString;
		pom /= 2;
	}
	cout << "\nBinarny: " << binarny << endl;
	cout << "Liczba zapisana w systemie dwójkowym: ";
	for (int i = binarny.length(); i >= 0; i--) {
		cout << binarny[i];
	}
	cout << endl;

	///zamiana na system ósemkowy
	pom = liczba;
	while (pom != 0) {
		cyfra = pom % 8;

		///znalezione na internecie. Zamienia liczbę na string.
		ostringstream ss;
		ss << cyfra;
		cyfraString = ss.str();

		oktalny += cyfraString;
		pom /= 8;
	}
	cout << "\nOktalny: " << oktalny << endl;
	cout << "Liczba zapisana w systemie ósemkowym: ";
	for (int i = oktalny.length(); i >= 0; i--) {
		cout << oktalny[i];
	}
	cout << endl;

	///zamiana na system szesnastkowy
	pom = liczba;
	while (pom != 0) {
		cyfra = pom % 16;

		if (cyfra > 9) {
			switch (cyfra) {
			case 10:
				cyfraString = "A";
				break;
			case 11:
				cyfraString = "B";
				break;
			case 12:
				cyfraString = "C";
				break;
			case 13:
				cyfraString = "D";
				break;
			case 14:
				cyfraString = "E";
				break;
			case 15:
				cyfraString = "F";
				break;
			}
		}
		else {
			///znalezione na internecie. Zamienia liczbę na string.
			ostringstream ss;
			ss << cyfra;
			cyfraString = ss.str();
		}

		heksadecymalny += cyfraString;
		pom /= 16;
	}
	cout << "\nHeksadecymalny: " << heksadecymalny << endl;
	cout << "Liczba zapisana w systemie szesnastkowym: ";
	for (int i = heksadecymalny.length(); i >= 0; i--) {
		cout << heksadecymalny[i];
	}
	cout << endl;
	system("pause");
	return 0;
}
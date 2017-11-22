// zad10.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int liczba;
	int x;
	int pom;
	string rzymska;
	cout << "Podaj ciąg liczb całkowitych zakończony liczbą ujemną: ";
	do {
		cin >> liczba;
		x = liczba;
		if (liczba > 3000) {
			cout << "BLAD!! liczba musi należeć do przedziału [0;3000]\nPodaj liczba:";
		}
		else if (liczba == 0) {
			rzymska = "0";
			cout << rzymska;
		}
		else if (liczba < 0) {

		}
		else {
			rzymska = "";
			///ostatnia cyfra
			pom = liczba % 10;
			switch (pom) {
			case 0:
				break;
			case 1:
				rzymska += "I";
				break;
			case 2:
				rzymska += "II";
				break;
			case 3:
				rzymska += "III";
				break;
			case 4:
				rzymska += "VI";
				break;
			case 5:
				rzymska += "V";
				break;
			case 6:
				rzymska += "IV";
				break;
			case 7:
				rzymska += "IIV";
				break;
			case 8:
				rzymska += "IIIV";
				break;
			case 9:
				rzymska += "XI";
				break;
			default:
				cout << "BLAD!!! nie ma takiej cyfry!\npom: " << pom << endl;
			}
			liczba /= 10;

			///2 od końca cyfra
			pom = liczba % 10;
			switch (pom) {
			case 0:
				break;
			case 1:
				rzymska += "X";
				break;
			case 2:
				rzymska += "XX";
				break;
			case 3:
				rzymska += "XXX";
				break;
			case 4:
				rzymska += "LX";
				break;
			case 5:
				rzymska += "L";
				break;
			case 6:
				rzymska += "XL";
				break;
			case 7:
				rzymska += "XXL";
				break;
			case 8:
				rzymska += "XXXL";
				break;
			case 9:
				rzymska += "CX";
				break;
			default:
				cout << "BLAD!!! nie ma takiej cyfry!\npom: " << pom << endl;
			}
			liczba /= 10;

			///3 od końca cyfra
			pom = liczba % 10;
			switch (pom) {
			case 0:
				break;
			case 1:
				rzymska += "C";
				break;
			case 2:
				rzymska += "CC";
				break;
			case 3:
				rzymska += "CCC";
				break;
			case 4:
				rzymska += "DC";
				break;
			case 5:
				rzymska += "D";
				break;
			case 6:
				rzymska += "CD";
				break;
			case 7:
				rzymska += "CCD";
				break;
			case 8:
				rzymska += "CCCD";
				break;
			case 9:
				rzymska += "MC";
				break;
			default:
				cout << "BLAD!!! nie ma takiej cyfry!\npom: " << pom << endl;
			}
			liczba /= 10;

			///4 od końca cyfra
			pom = liczba % 10;
			switch (pom) {
			case 0:
				break;
			case 1:
				rzymska += "M";
				break;
			case 2:
				rzymska += "MM";
				break;
			case 3:
				rzymska += "MMM";
				break;
			default:
				cout << "BLAD!!! nie ma takiej cyfry!\npom: " << pom << endl;
			}
			liczba /= 10;

			for (int i = rzymska.length(); i >= 0; i--) {
				cout << rzymska[i];
			}
			cout << endl;
		}

	} while (x >= 0);
	system("pause");
	return 0;
}
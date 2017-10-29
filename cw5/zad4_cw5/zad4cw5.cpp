//4.	Dana jest tablica napisów.W każdym napisie jest jedno zdanie.Napisz
//program, który zmieni te napisy w ten sposób, że pierwszy znak napisu
//będzie pisany dużą literą, skrajne znaki odstępu będą usunięte a dwu lub
//więcej – krotne wystąpienia znaków odstępu będą zamieniane na pojedyncze
//znaki odstępu.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main()
{
	int dl, n = 2;
	string temp = "";
	string napis1 = "lorem  ipsum dolor sit amet enim.  ";
	string napis2 = " lorem ipsum dolor  sit amet enim.";
	string napis3 = "lorem ipsum dolor sit amet enim. ";
	string napis4 = "  lorem ipsum  dolor sit amet enim.";
	string napisy[4] = { napis1, napis2, napis3, napis4 };
	cout << "Przed: " << endl;
	for (int i = 0; i < 4; i++) {
		cout << napisy[i] << endl;
	}
	cout << "Po: " << endl;
	for (int i = 0; i < 4; i++) { // Wybieram stringi z tablicy
		dl = napisy[i].length(); //licze dlugosc stringa
		for (int j = 0; j < dl; j++) { 
			if (napisy[i].at(j) == 32) { // w stringu szukam spacji
				if (j + 1 != dl) { //jeśli znaleziona spacja nie jest ostatnim znakiem stringu
					if (napisy[i].at(j + 1) == 32) { // i jesli kolejnym znakiem jest spacja
						while (j+n != dl && napisy[i].at(j + n) == 32) { // i kolejnym jest spacja przy czym nie jest ostatnim znakiem
							n++; // zliczam ilosc spacji
						}
						napisy[i].erase(j, n - 1); //usuwam spacje zostawiajac jedna
						dl = napisy[i].length(); // aktualizuje zmienna dlugosc
					}
				}
			}
		}
		if (napisy[i].at(0) == 32) { //jesli pierwszym znakiem jest spacja to 
			napisy[i].erase(0, 1); // usuwam ja
			dl = napisy[i].length(); //aktualizuje dl
		}
		if (napisy[i].at(dl-1) == 32) { // jesli ostatnim
			napisy[i].erase(dl-1, 1); // usuwam
			dl = napisy[i].length(); // aktualizuje dl
		}
		for (int j = 0; j < dl; j++) {		
			napisy[i].at(0) = toupper(napisy[i].at(0)); // Pierwsze znaki w stringach zamieniam na duze
		}
		cout << napisy[i] << endl; //wypisanie 
	}
	system("pause");
	return 0;
}


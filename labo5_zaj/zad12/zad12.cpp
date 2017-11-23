//Dany jest prostokąt o wierzchołkach A(xA, yA), B(xB, yA), C(xB, yB), D(xA, yB) oraz 2 punkty
//P1(x1, y1), P2(x2, y2).Wypisz:
//a. 0, gdy cały odcinek leży na zewnątrz tego prostokąta, (zielony odcinek)
//b. 1, gdy leży wewnątrz, (niebieski odcinek)
//c. - 1 gdy częściowo leży w prostokącie(czerwony odcinek).
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int xA;
	int xB;
	int yA;
	int yB;
	int x1;
	int x2;
	int y1;
	int y2;
	int P1 = 0;
	int P2 = 0;
	int wynik = 0;
	cout << "Podaj xA: ";
	cin >> xA;
	cout << "Podaj xB: ";
	cin >> xB;
	cout << "Podaj yA: ";
	cin >> yA;
	cout << "Podaj yB: ";
	cin >> yB;
	cout << "Podaj x1: ";
	cin >> x1;
	cout << "Podaj y1: ";
	cin >> y1;
	cout << "Podaj x2: ";
	cin >> x2;
	cout << "Podaj y2: ";
	cin >> y2;
	cout << "P1(" << x1 << "," << y1 << ")" << endl;
	cout << "P2(" << x2 << "," << y2 << ")" << endl;
	//P1 -> 1
	if (x1 < xA && y1 > yA) {
		P1 = 1;
	}
	//P2 -> 1
	if (x2 < xA && y2 > yA) {
		P2 = 1;
	}

	//P1 -> 2
	if (x1 > xA && x1 < xB && y1 > yA) {
		P1 = 2;
	}
	//P2 -> 2
	if (x2 > xA && x2 < xB && y2 > yA) {
		P2 = 2;
	}

	//P1 -> 3
	if (x1 > xB && y1 > yB) {
		P1 = 3;
	}
	//P2 -> 3
	if (x2 > xB && y2 > yB) {
		P2 = 3;
	}

	//P1 -> 4
	if (yA > y1 && y1 > yB && x1 < xA) {
		P1 = 4;
	}
	//P2 -> 4
	if (yA > y2 && y2 > yB && x2 < xA) {
		P2 = 4;
	}

	//P1 -> 5
	if (yA > y1 && y1 > yB && xB > x1 && x1 > xA) {
		P1 = 5;
	}
	//P2 -> 5
	if (yA > y2 && y2 > yB && xB > x2 && x2 > xA){
		P2 = 5;
	}

	//P1 -> 6
	if (yA > y1 && y1 > yB && x1 > xB) {
		P1 = 6;
	}
	//P2 -> 6
	if (yA > y2 && y2 > yB && x2 > xB) {
		P2 = 6;
	}

	//P1 -> 7
	if (xA > x1 && y1 < yA) {
		P1 = 7;
	}
	//P2 -> 7
	if (xA > x2 && y2 < yA) {
		P2 = 7;
	}

	//P1 -> 8
	if (x1 > xA && x1 < xB && y1 < yB) {
		P1 = 8;
	}
	//P2 -> 8
	if (x2 > xA && x2 < xB && y2 < yB) {
		P2 = 8;
	}

	//P1 -> 9
	if (xA < x1 && y1 < yA) {
		P1 = 9;
	}
	//P2 -> 9
	if (xA < x2 && y2 < yA) {
		P2 = 9;
	}

	cout << "P1 : " << P1 << endl;
	cout << "P2 : " << P2 << endl;

	if (P1 == 1 && P2 == 1) {
		wynik = 0;
	}
	if (P1 == 1 && P2 == 2) {
		wynik = 0;
	}
	if (P1 == 1 && P2 == 3) {
		wynik = 0;
	}
	if (P1 == 1 && P2 == 4) {
		wynik = 0;
	}
	if (P1 == 1 && P2 == 5) {
		wynik = -1;
	}
	if (P1 == 1 && P2 == 6) {
		wynik = 0;
	}
	if (P1 == 1 && P2 == 7) {
		wynik = 0;
	}
	if (P1 == 1 && P2 == 8) {
		wynik = -1;
	}
	if (P1 == 1 && P2 == 9) {
		wynik = -1;
	}
	if (P1 == 2 && P2 == 1) {
		wynik = 0;
	}
	if (P1 == 2 && P2 == 2) {
		wynik = 0;
	}
	if (P1 == 2 && P2 == 3) {
		wynik = 0;
	}
	if (P1 == 2 && P2 == 4) {
		wynik = -1;
	}
	if (P1 == 2 && P2 == 5) {
		wynik = -1;
	}
	if (P1 == 2 && P2 == 6) {
		wynik = -1;
	}
	if (P1 == 2 && P2 == 7) {
		wynik = -1;
	}
	if (P1 == 2 && P2 == 8) {
		wynik = -1;
	}
	if (P1 == 2 && P2 == 9) {
		wynik = -1;
	}
	if (P1 == 3 && P2 == 1) {
		wynik = 0;
	}
	if (P1 == 3 && P2 == 2) {
		wynik = 0;
	}
	if (P1 == 3 && P2 == 3) {
		wynik = 0;
	}
	if (P1 == 3 && P2 == 4) {
		wynik = -1;
	}
	if (P1 == 3 && P2 == 5) {
		wynik = -1;
	}
	if (P1 == 3 && P2 == 6) {
		wynik = 0;
	}
	if (P1 == 3 && P2 == 7) {
		wynik = -1;
	}
	if (P1 == 3 && P2 == 8) {
		wynik = -1;
	}
	if (P1 == 3 && P2 == 9) {
		wynik = 0;
	}
	if (P1 == 4 && P2 == 1) {
		wynik = 0;
	}
	if (P1 == 4 && P2 == 2) {
		wynik = -1;
	}
	if (P1 == 4 && P2 == 3) {
		wynik = -1;
	}
	if (P1 == 4 && P2 == 4) {
		wynik = 0;
	}
	if (P1 == 4 && P2 == 5) {
		wynik = -1;
	}
	if (P1 == 4 && P2 == 6) {
		wynik = -1;
	}
	if (P1 == 4 && P2 == 7) {
		wynik = 0;
	}
	if (P1 == 4 && P2 == 8) {
		wynik = -1;
	}
	if (P1 == 4 && P2 == 9) {
		wynik = -1;
	}
	if (P1 == 5 && P2 == 1) {
		wynik = -1;
	}
	if (P1 == 5 && P2 == 2) {
		wynik = -1;
	}
	if (P1 == 5 && P2 == 3) {
		wynik = -1;
	}
	if (P1 == 5 && P2 == 4) {
		wynik = -1;
	}
	if (P1 == 5 && P2 == 5) {
		wynik = 1;
	}
	if (P1 == 5 && P2 == 6) {
		wynik = -1;
	}
	if (P1 == 5 && P2 == 7) {
		wynik = -1;
	}
	if (P1 == 5 && P2 == 8) {
		wynik = -1;
	}
	if (P1 == 5 && P2 == 9) {
		wynik = -1;
	}
	if (P1 == 6 && P2 == 1) {
		wynik = -1;
	}
	if (P1 == 6 && P2 == 2) {
		wynik = -1;
	}
	if (P1 == 6 && P2 == 3) {
		wynik = 0;
	}
	if (P1 == 6 && P2 == 4) {
		wynik = -1;
	}
	if (P1 == 6 && P2 == 5) {
		wynik = -1;
	}
	if (P1 == 6 && P2 == 6) {
		wynik = 0;
	}
	if (P1 == 6 && P2 == 7) {
		wynik = -1;
	}
	if (P1 == 6 && P2 == 8) {
		wynik = -1;
	}
	if (P1 == 6 && P2 == 9) {
		wynik = 0;
	}
	if (P1 == 7 && P2 == 1) {
		wynik = 0;
	}
	if (P1 == 7 && P2 == 2) {
		wynik = -1;
	}
	if (P1 == 7 && P2 == 3) {
		wynik = -1;
	}
	if (P1 == 7 && P2 == 4) {
		wynik = 0;
	}
	if (P1 == 7 && P2 == 5) {
		wynik = -1;
	}
	if (P1 == 7 && P2 == 6) {
		wynik = -1;
	}
	if (P1 == 7 && P2 == 7) {
		wynik = 0;
	}
	if (P1 == 7 && P2 == 8) {
		wynik = 0;
	}
	if (P1 == 7 && P2 == 9) {
		wynik = 0;
	}
	if (P1 == 8 && P2 == 1) {
		wynik = -1;
	}
	if (P1 == 8 && P2 == 2) {
		wynik = -1;
	}
	if (P1 == 8 && P2 == 3) {
		wynik = -1;
	}
	if (P1 == 8 && P2 == 4) {
		wynik = -1;
	}
	if (P1 == 8 && P2 == 5) {
		wynik = -1;
	}
	if (P1 == 8 && P2 == 6) {
		wynik = -1;
	}
	if (P1 == 8 && P2 == 7) {
		wynik = 0;
	}
	if (P1 == 8 && P2 == 8) {
		wynik = 0;
	}
	if (P1 == 8 && P2 == 9) {
		wynik = 0;
	}
	if (P1 == 9 && P2 == 1) {
		wynik = -1;
	}
	if (P1 == 9 && P2 == 2) {
		wynik = -1;
	}
	if (P1 == 9 && P2 == 3) {
		wynik = 0;
	}
	if (P1 == 9 && P2 == 4) {
		wynik = -1;
	}
	if (P1 == 9 && P2 == 5) {
		wynik = -1;
	}
	if (P1 == 9 && P2 == 6) {
		wynik = 0;
	}
	if (P1 == 9 && P2 == 7) {
		wynik = 0;
	}
	if (P1 == 9 && P2 == 8) {
		wynik = 0;
	}
	if (P1 == 9 && P2 == 9) {
		wynik = 0;
	}

	cout << "Wynik: " << wynik << endl;

	system("pause");

	return 0;
}


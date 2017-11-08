//9. Dana jest n - elementowa tablica ze strukturami opisującymi współrzędne
//punktów na płaszczyźnie(punkt x, punkt y, punkt z).Typ punkt też jest
//strukturą postaci
//(int pierwsza_wsp, int druga_wsp).Napisz program, który sprawdzi czy
//podane punkty tworzą trójkąty a następnie sprawdzi czy punkt, którego
//współrzędne wprowadzi użytkownik leży wewnątrz tego trójkąta.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

struct punkt
{
	int pierwsza_wsp;
	int druga_wsp;
};
struct tr {
	punkt x;
	punkt y;
	punkt z;
};

int main()
{
	int n, wlinii = 0, tro = 0;
	char x1x2, y1y2, z1z2;
	tr tab[3];
	n = 3;
	for (int i = 0; i < n; i++) {
		cout << "Podaj wspolrzedne " << i + 1 << " trojkata: " << endl;
		cout << "	Punkt x: " << endl;
		cout << "		Pierwsza wsp: ";
		cin >> tab[i].x.pierwsza_wsp;
		cout << endl;
		cout << "		Druga wsp: ";
		cin >> tab[i].x.druga_wsp;
		cout << endl;

		cout << "	Punkt y: " << endl;
		cout << "		Pierwsza wsp: ";
		cin >> tab[i].y.pierwsza_wsp;
		cout << endl;
		cout << "		Druga wsp: ";
		cin >> tab[i].y.druga_wsp;
		cout << endl;

		cout << "	Punkt z: " << endl;
		cout << "		Pierwsza wsp: ";
		cin >> tab[i].z.pierwsza_wsp;
		cout << endl;
		cout << "		Druga wsp: ";
		cin >> tab[i].z.druga_wsp;
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << tab[i].x.pierwsza_wsp << endl;
		cout << tab[i].x.druga_wsp << endl;
		cout << endl << endl;
		cout << tab[i].y.pierwsza_wsp << endl;
		cout << tab[i].y.druga_wsp << endl;
		cout << endl << endl;
		cout << tab[i].z.pierwsza_wsp << endl;
		cout << tab[i].z.druga_wsp << endl;
		cout << endl << endl;
	}
	for (int i = 0; i < n; i++) {
		int x1 = tab[i].x.pierwsza_wsp;
		int x2 = tab[i].x.druga_wsp;
		int y1 = tab[i].y.pierwsza_wsp;
		int y2 = tab[i].y.druga_wsp;
		int z1 = tab[i].z.pierwsza_wsp;
		int z2 = tab[i].z.druga_wsp;
		// x -> y
		int xy = 0;
		xy = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		cout << "dlugosc xy: " << xy << endl;
		// x -> z
		int xz = 0;
		xz = sqrt(pow(x2 - x1, 2) + pow(z2 - z1, 2));
		cout << "dlugosc xz: " << xz << endl;
		// z -> y
		int zy = 0;
		zy = sqrt(pow(z2 - z1, 2) + pow(y2 - y1, 2));
		cout << "dlugosc zy: " << zy << endl;
		if (x1 == y1 && y1 == z1 && z1 == x1) {
			wlinii = 1;
		}
		if (xy + zy > xz && wlinii == 0) {
			cout << "Podane punkty tr[" << i << "] tworzy trojkat!" << endl;
		}
		else {
			cout << "Podane punkty tr[" << i << "] nie tworza trojkata!" << endl;
		}
		wlinii = 0;
	}
	system("pause");
    return 0;
}


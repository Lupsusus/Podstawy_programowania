// zad6.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

// ZROBIŁEM TYLKO DO LICZBY 3 TE TABLICZKI, BO NIE CHCIAŁO MI SIĘ DO 9 ROZPISYWAĆ (ZA DUŻO PISANIA TEGO W LINIJKACH / KOPIOWANIA / ZMIENIANIA)
int main()
{
	int liczba, n;
	cout << "Wprowadz liczbe:";
	cin >> liczba;

	cout << "[1] Dodawanie" << endl;
	cout << "[2] Odejmowanie" << endl;
	cout << "[3] Mnozenie" << endl;
	cout << "[4] Dzielenie" << endl;
	cin >> n;
	cout << endl << endl;

	switch (n)
	{
	case 1:
		cout << "dodawanie" << "\t" << "1" << "\t" << "2" << "\t" << "3" << endl;
		cout << "--------------------------------------" << endl;
		cout << "wybrana:" << liczba << "\t" << liczba + 1 << "\t" << liczba + 2 << "\t" << liczba + 3 << endl;
		break;

	case 2:
		cout << "odejmowanie" << "\t" << "1" << "\t" << "2" << "\t" << "3" << endl;
		cout << "--------------------------------------" << endl;
		cout << "wybrana:" << liczba << "\t" << liczba - 1 << "\t" << liczba - 2 << "\t" << liczba - 3 << endl;
		break;

	case 3:
		cout << "mnozenie" << "\t" << "1" << "\t" << "2" << "\t" << "3" << endl;
		cout << "--------------------------------------" << endl;
		cout << "wybrana:" << liczba << "\t" << liczba * 1 << "\t" << liczba * 2 << "\t" << liczba * 3 << endl;
		break;

	case 4:
		int m;
		cout << "[1] Dzielenie calkowite" << endl;
		cout << "[2] Dzielenie rzeczywsite" << endl;
		cin >> m;
		switch (m)
		{
		case 1:
			cout << "dzielenie" << "\t" << "1" << "\t" << "2" << "\t" << "3" << endl;
			cout << "--------------------------------------" << endl;
			cout << "wybrana:" << liczba << "\t" << liczba / 1 << "\t" << liczba / 2 << "\t" << liczba / 3 << endl;
			break;

		case 2:
			cout << "dzielenie" << "\t" << "1" << "\t" << "2" << "\t" << "3" << endl;
			cout << "--------------------------------------" << endl;
			cout << "wybrana:" << liczba << "\t" << (float)liczba / 1 << "\t" << (float)liczba / 2 << "\t" << (float)liczba / 3 << endl;
			break;
		}
	}
	system("pause");
	return 0;
}
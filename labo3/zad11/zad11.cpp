#include <iostream>
#include <string>
#include <ctype.h>
#include <time.h>
#include "stdafx.h"
using namespace std;


int main()
{
	int n; // jak chcecie zeby to tam dzialalo kolejny raz to dodajcie petle while(n!=0) czy cos :DD
	cout << "[1] Metry na cale:" << endl;
	cout << "[2] Funty na kg:" << endl;
	cout << "[3] Dolary na Euro i zl:" << endl;
	cin >> n;
	switch (n)
	{
	case 1:
	{
		int metry;
		cout << "Podaj metry:";
		cin >> metry;
		double cale = (double)metry*39.37; //przeliczam metry na cale
		cout << "Cale:" << cale;
		break;
	}
	case 2:
	{
		int kilogramy;
		cout << "Podaj kilogramy:";
		cin >> kilogramy;
		double funty = kilogramy*0.45; // przeliczam kilo na funty
		cout << "Funty:" << funty;
	}
	case 3:
	{
		int dolar;
		cout << "Podaj dolarki:";
		cin >> dolar;
		double zl = dolar*3.65; // przeliczam dolara na zl
		double euro = dolar*0.86; // przeliczam dolara na euro
		cout << "Zlotowki: " << zl << endl;
		cout << "Euro: " << euro << endl;

	}
	}


	system("pause");
	return 0;
}
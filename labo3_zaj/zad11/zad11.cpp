#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctype.h>
#include <time.h>

using namespace std;


int main()
{
	int n; 
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
		double cale = (double)metry*39.37;
		cout << "Cale:" << cale << endl;
		break;
	}
	case 2:
	{
		int kilogramy;
		cout << "Podaj kilogramy:";
		cin >> kilogramy;
		double funty = kilogramy*0.45; 
		cout << "Funty:" << funty << endl;
		break;
	}
	case 3:
	{
		int dolar;
		cout << "Podaj dolary:";
		cin >> dolar;
		double zl = dolar*3.65; 
		double euro = dolar*0.86; 
		cout << "Zlotowki: " << zl << endl;
		cout << "Euro: " << euro << endl;
		break;
	}
	}


	system("pause");
	return 0;
}
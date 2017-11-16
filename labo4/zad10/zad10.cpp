//10. Dany jest ciąg n znaków.Napisz program, który wypisze z tego ciągu liczby całkowite co
//najmniej 3 cyfrowe, poda ich ilość i sumę.


#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

int main()
{
	string napis;
	string temp;
	int cyfra, suma = 0, licznik = 0, sprawdzanie = 0;
	float srednia;

	cout << "Podaj napis:";
	getline(cin, napis);

	for (int i = 0; i<napis.length(); i++)
	{
		if (((napis.at(i) >= '0') && (napis.at(i) <= '9')) || (napis.at(i) == '-'))
		{
			temp += napis.at(i);
			cout << "TEMP:" << temp << endl;
		}

		else
		{
			cyfra = atoi(temp.c_str());
			suma += cyfra; 
			if (suma != sprawdzanie) licznik++; 
			sprawdzanie = suma; 
			cout << "suma: " << suma << endl;
			cyfra = 0; 
			temp = "";

		}
	}


	if (temp == "")
	{
		srednia = (float)suma / licznik;
		cout << "LICZNIK:" << licznik;
		cout << endl << "SREDNIA:" << srednia;
	}
	else
	{
		cyfra = atoi(temp.c_str());
		suma += cyfra;
		if (suma != sprawdzanie) licznik++;
		srednia = (float)suma / licznik;
		cout << "SUMA:" << suma << endl;
		cout << "LICZNIK:" << licznik << endl;
		cout << "SREDNIA:" << srednia << endl;
	}


	system("pause");
	return 0;
}
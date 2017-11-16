//5. Dany jest ciąg znaków zakończony '*'.Napisz program, który z podanego ciągu wypisze na
//monitorze wszystkie podciągi składające się wyłącznie z małych liter, alfabetu łacińskiego.
//Wypisz znalezione podciągi oraz ich ilość.


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
	string wypisywanie[30];
	int licznik = 0;

	cout << "Podaj napis:";
	getline(cin, napis);

	for (int i = 0; i<napis.length(); i++)
	{
		if ((napis.at(i) >= 'a') && (napis.at(i) <= 'z'))
		{
			temp += napis.at(i);
		}

		else
		{
			if (wypisywanie[licznik] != temp) 
			{
				wypisywanie[licznik] = temp;
				licznik++;
			}
			temp = "";
		}
	}

	if (temp == "")
	{
		for (int i = 0; i<licznik; i++)
			cout << wypisywanie[i] << endl;
		cout << "Podciagow z malych liter:" << licznik << endl;
	}

	else
	{
		if (wypisywanie[licznik] != temp)
		{
			wypisywanie[licznik] = temp;
			licznik++;
		}
		temp = "";
		for (int i = 0; i<licznik; i++)
			cout << wypisywanie[i] << endl;
		cout << "Podciagow z malych liter:" << licznik << endl;
	}

	system("pause");
	return 0;
}
//5.	Dana jest tablica znaków.Napisz program, który zliczy i wypisze
//liczby wystąpień kolejnych małych i dużych liter(na wyjściu podajemy
//	liczbę litery ‘a’, ‘b’, …, ‘A’, ‘B’, …, ’Z’.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;


int main()
{

	string napis;
	int wielkie = 0, male = 0;
	int liczbaWielkich[26] = {}, liczbaMalych[26] = {};

	cout << "Napisz sobie cos:";
	cin >> napis;

	// napis.length() zamiast napis.size() !

	// <ctype.h> zawiera funkcje isupper() [zwraca true, jeśli argumentem jest wielka litera] oraz islower() [zwraca true, jeśli mała]

	for (int i = 0; i < napis.length(); i++)
		if (isupper(napis[i]))
		{
			wielkie++;

			// Przyklad: jesli napis[i] = 'A', wtedy liczbaWielkich[napis[i] - 'A'] = liczbaWielkich[0];
			//			 jesli napis[i] = 'B', wtedy ... liczbaWielkich[1] itd.

			liczbaWielkich[napis[i] - 'A']++;
		}
		else
		{
			male++;

			// Przyklad: jesli napis[i] = 'a', wtedy liczbaWielkich[napis[i] - 'a'] = liczbaWielkich[0];
			//			 jesli napis[i] = 'b', wtedy ... liczbaWielkich[1] itd.

			liczbaMalych[napis[i] - 'a']++;
		}

	cout << endl << "Male literki:" << male << endl;
	cout << "Wielkie literki:" << wielkie << endl << endl;

	// temp1 i temp2 sluza tylko do wypisywania liter na ekran (a: 
	char temp1 = 'a', temp2 = 'A';

	for (int i = 0; i < 26; i++)
	{
		cout << temp1 << ": " << liczbaMalych[i] << " razy, " << temp2 << ": " << liczbaWielkich[i] << " razy." << endl << endl;
		temp1++;
		temp2++;
	}


	cout << endl << "End of program." << endl << endl;
	system("pause");
	return 0;
}
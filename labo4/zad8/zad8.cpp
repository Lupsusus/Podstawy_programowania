//8. Dane są dwa ciągi znaków.Napisz program, który sprawdzi czy drugi ciąg zawiera wyłącznie
//znaki znajdujące się w pierwszym ciągu.Przyjmij, ze w ciagu znaków nie wystepuja znaki
//diakrytyczne.Wielkość liter nie ma znaczenia.


#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;



int main()
{
	cout << "Program sprawdza czy 2 ciag jest zlozony ze znakow pierwszego";
	string s1;
	cout << "Podaj pierwszy ciag" << endl;
	getline(cin, s1);
	string s2;
	cout << "Podaj drugi ciag" << endl;
	getline(cin, s2);
	int pom1 = 0;
	int pom2 = 0;

	for (int i = 0; i < s2.size(); i++)
	{

		for (int j = 0; j < s1.size(); j++)
		{

			if (s2.at(i) == s1.at(j)) pom1 = 1;
		}
		if (pom1 == 0) pom2 = 0;
		else pom2 = 1;
		if (pom2 == 0)    break;
		pom1 = 0;

	}

	if (pom2 == 1) cout << "Drugi ciag znakow jest zlozony z tych samych znakow";
	else cout << "Drugi ciag znakow nie jest zlozony z tych samych znakow";

	system("pause");
	return 0;
}

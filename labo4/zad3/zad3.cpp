//3. Napisz program wczytujący kolejne znaki z klawiatury do momentu naciśnięcia klawisza 'F10'.
//Na zakończenie wypisz ile było polskich znaków diakrytycznych, ile znaków alfabetu łacińskiego
//(angielskiego) a ile cyfr

#include "stdafx.h"
#include <iostream>
#define Unicode
#include <cstdlib>
#include <conio.h>
#include <string>
using namespace std;


int main()
{
	int y, j, l;
	char c;
	cout << "Program polskie znaki cyfry i litery lacinskie" << endl;
	l = 0;
	y = 0;
	j = 0;


	do
	{
		cout << "Wprowadz znak " << endl;
		c = getch();
		cout << c << endl;

		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
		{
			l++;
		}
		else
			if (c >= '1'&&c <= '9')
			{
				y++;
			}
			else if (c == '\206' || c == '\245' || c == '344' || c == '\242' || c == '\253' || c == '\256' || c == '\251' || c == '\230' || c == '\210')
			{
				j++;
			}
	} while (c != 68);


	cout << "Cyfr bylo: " << y << endl << "Polskich znakow diakrytycznych bylo: " << j << endl << "Znakow alfabetu lacinskiego: " << l << endl;
	system("pause");
	return 0;
}


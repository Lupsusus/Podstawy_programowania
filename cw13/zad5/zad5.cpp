// zad5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
using namespace std;


main()
{
	fstream plik;
	plik.open("input.txt", ios::in);

	string linia;
	int ileA = 0;

	while (plik >> linia) // while (getline(plik, linia)) <-- jak ma wam czytać ze spacjami te linie
	{
		for (int i = 0; i<linia.length(); i++)
			if (linia[i] == 'a')
				ileA++;

		if (ileA == 1) cout << "a wystepuje " << ileA << " raz." << endl;
		else cout << "a wystepuje " << ileA << " razy." << endl;

		ileA = 0;
	}
	plik.close();

	system("pause");
	return 0;
}
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
	plik.open("dane.txt", ios::in);

	string linia;
	int A = 0;

	while (plik >> linia)
	{
		for (int i = 0; i < linia.length(); i++) {
			if (linia[i] == 'a')
				A++;
		}
		if (A == 1) cout << "A:  " << A << " raz." << endl;
		else cout << "A: " << A << " razy." << endl;

		A = 0;
	}
	plik.close();

	system("pause");
	return 0;
}
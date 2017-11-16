//4. Dany jest ciąg n znaków.Napisz program, który wypisze z tego ciągu liczby całkowite oraz
//policzy ich sumę i średnią.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;


int main()

{
	float sr;
	float n, il = 0, suma = 0;
	char z;
	cout << "Podaj ile wyrazow chcesz wprowadzic " << endl;
	cin >> n;

	for (int i = 0; i<n; i++)
	{
		cout << "Podaj znak" << endl;
		z = getch();
		cout << z << endl;

		if (z >= '1'&&z <= '9')
		{
			il++;
			suma = suma + z - 48;

		}

	}

	sr = suma / il;

	cout << "Suma cyfr w tym ciagu wynosi: " << suma << endl << "Ilosc cyfr wynosi: " << il << endl << "Srednia wynosi: " << sr << endl;
	system("pause");
	return 0;
}

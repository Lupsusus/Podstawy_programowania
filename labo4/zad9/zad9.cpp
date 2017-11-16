//9. Napisz program, który obliczy w podanym tekście ilość wystąpień, podanego przez
//użytkownika, polskiego znaku diakrytycznego(ą, ę, ć, ł, ń, ó, ś, ż, ź, ).Wypisany jest znak i ilość
//wystąpień.

#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>


using namespace std;


int main()
{
	string zdanie;
	cout << "Wpisz jakies zdanie:";
	getline(cin, zdanie);

	char litera;
	cout << endl << "Podaj literke:";
	cin >> litera;

	int r = zdanie.length();
	cout << endl << "Wszystkich znakow = " << r << endl; 
	int index = 0; 

	for (int i = 0; i<r; i++) 
		if (zdanie.at(i) == litera) index++;

	cout << "Litera " << litera << " powtorzyla sie " << index << " razy!" << endl;


	system("pause");
	return 0;
}
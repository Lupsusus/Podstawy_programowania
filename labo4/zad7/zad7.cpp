//7. Napisz program, który w dowolnym ciągu znaków zamieni podany przez użytkownika podciąg
//znaków na inny, również podany przez użytkownika.W przypadku, gdy program nie znajdzie
//zadanego podciągu powinien zostać wyświetlony napis” Brak danego ciągu znaków”.


#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

int main()
{
	string tekst, szukana, zamiennik;
	cout << "Podaj tekst:";
	getline(cin, tekst); 

	cout << "Czego szukamy:";
	getline(cin, szukana); 

	size_t pozycja = tekst.find(szukana); 
	if (pozycja != std::string::npos) 
		cout << "Znaleziono na pozycji:" << pozycja << endl << endl;;


	cout << "Na co chcesz zamienic:";
	getline(cin, zamiennik);
	tekst.replace(tekst.find(szukana), szukana.length(), zamiennik);
	cout << tekst << endl;

	system("pause");
	return 0;
}
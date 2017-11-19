
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;
string **tt;

void do_tablicy(int n, string **tt)
{
	string x;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cout << "Podaj element: ";		//wpisuje do tablicy
			cin >> x;						//wpisuje do tablicy
			tt[i][j] = x;					//wpisuje do tablicy
		}
	}
}
void z_tablicy(int n, string **tt)
{
	cout << "Tablica: " << endl;
	for (int i = 0; i<n; i++)			//wypisuje tabilce
	{									//wypisuje tabilce
		for (int j = 0; j<n; j++)		//wypisuje tabilce
		{								//wypisuje tabilce
			cout << tt[i][j] << " ";	//wypisuje tabilce
		}								//wypisuje tabilce
		cout << endl;					//wypisuje tabilce
	}
}
void capitalize(int n, string **tt)
{
	string str;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			str = tt[i][j];
			for (int x = 0; x < str.length(); x++) {
				if (!isupper(str[x])) {					//sprawdzam wiekosc litery
					str[x] = toupper(str[x]);			//jesli mala to powiekszam
				}
				tt[i][j] = str;							//zapisuje
			}
		}
	}
}
int main(string **tt)
{
	int n;
	cout << "Podaj ilosc elementow tablicy: ";
	cin >> n;

	tt = new string*[n];		// tworze strukture tablicy
	for (int i = 0; i<n; i++)	// tworze strukture tablicy
	{							// tworze strukture tablicy
		tt[i] = new string[n];	// tworze strukture tablicy
	}							// tworze strukture tablicy

	do_tablicy(n, tt);	
	z_tablicy(n, tt);
	capitalize(n, tt);	
	z_tablicy(n, tt);							

	system("pause");
	return 0;
}


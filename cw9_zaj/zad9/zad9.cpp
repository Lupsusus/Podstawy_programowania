
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
			cout << "Podaj element: ";		
			cin >> x;						
			tt[i][j] = x;					
		}
	}
}
void z_tablicy(int n, string **tt)
{
	cout << "Tablica: " << endl;
	for (int i = 0; i<n; i++)			
	{									
		for (int j = 0; j<n; j++)		
		{								
			cout << tt[i][j] << " ";	
		}								
		cout << endl;					
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
				if (!isupper(str[x])) {					
					str[x] = toupper(str[x]);			
				}
				tt[i][j] = str;							
			}
		}
	}
}
int main(string **tt)
{
	int n;
	cout << "Podaj ilosc elementow tablicy: ";
	cin >> n;

	tt = new string*[n];		
	for (int i = 0; i<n; i++)	
	{							
		tt[i] = new string[n];	
	}							

	do_tablicy(n, tt);
	z_tablicy(n, tt);
	capitalize(n, tt);
	z_tablicy(n, tt);

	system("pause");
	return 0;
}


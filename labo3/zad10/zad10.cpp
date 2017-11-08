#include <iostream>
#include <string>
#include <ctype.h>
#include <time.h>
#include <cstdlib>
#include "stdafx.h"
using namespace std;
// to jest przyklad c)
// do przykladu a) zamiast tych double a, double b... to podajecie sami liczby (cin>>a, cin >> b, cin >> c)
// do przykladu b) wystarczy (int a=rand()%20+(-10)) itd...

int main()
{
	cout << "Program oblicza pierwiastki dla rownania: ax2+bx+c=0" << endl;
	srand(time(NULL));
	// wzor ogolny: liczba = p + (double) rand() /RAND_MAX* (q-p); (gdzie "p"=poczatek przedzialu, a "q"=koniec)
	double a = (-10) + (double)rand() / RAND_MAX*(9 + 10);
	cout << "A: " << a; // pokazuje sobie te wylosowane liczby
	double b = (-10) + (double)rand() / RAND_MAX*(9 + 10); // <---- na samym koncu (9+10) bo (9-(-10)) to jest to samo co (9+10) :D
	cout << endl << "B: " << b;
	double c = (-10) + (double)rand() / RAND_MAX*(9 + 10);
	cout << endl << "C: " << c;

	float x1, x2, delta;
	delta = b*b - (4 * a*c); // licze delte
	cout << endl << "delta= " << delta << endl;
	x1 = (-b - delta) / (2 * a); // pierwiastki
	x2 = (-b + delta) / (2 * a);
	cout << "x1= " << x1 << endl << "x2= " << x2;

	system("pause");
	return 0;
}
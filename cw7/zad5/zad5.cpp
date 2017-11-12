//5. Współczynniki wielomianu zapisane są w postaci stosu, gdzie na
//wierzchołku znajduje się liczba an(przy n - tej potędze).Napisz program
//obliczania wartości tego wielomianu dla dowolnego x = x0.Skorzystaj ze
//schematu Hornera.

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
struct stos
{
	int dane;// pole z danymi
	stos *wsk;// wskaźnik pokazujący na element kolejny
};
int main(){
stos * wierzcholek= NULL;// deklaracja wierzchołka
int liczba, n, x;// zmienna do wprowadzania danych
stos* temp;// zmienna pomocnicza
int wynik = 0;
cout << "Podaj najwieksza potege wielomianu:";
cin >> n;
// dodawanie elementu do stosu
for(int i=0;i<n+1;i++)
{
	temp= wierzcholek;
	wierzcholek = new stos;// alokacja nowego elementu, który teraz będzie wierzchołkiem
	cout << "Podaj wspolczynnik potegi " << i << ": ";
	cin>>liczba;
	(*wierzcholek).dane=liczba;// wprowadzenie danej
	(*wierzcholek).wsk=temp;// powiązanie nowego elementu z elementem, który wcześniej był wierzchołkiem
}
temp=wierzcholek; 
cout << "Podaj x dla ktorego ma zostac wyznaczona wartosc wielomianu: ";
cin >> x;
cout << "Elementy na stosie: " << endl;
wynik = (int)(*temp).dane;
for (int i = n - 1; i >= 0; i--)
{
	cout << (*temp).dane << endl;
	wynik = x* wynik;
	temp = (*temp).wsk;
	wynik = wynik + (int)(*temp).dane;
}
cout << "Wynik: " << endl;
cout << wynik << endl;
system("PAUSE");
}

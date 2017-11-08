//1. Napisz program umożliwiający przechowywanie danych o strukturze :
//nazwisko, adres, pensja_brutto, czy_pali.Strukturę nazwij Pracownik.
//Wprowadź dane i wypisz je na ekran.
//Pomoc : część rozwiązania :
//{
//	struct Pracownik
//	{
//		char nazwisko[20];
//		char adres[20];
//		float brutto;
//		bool pali;
//	};
//	Pracownik a;
//	cout << "nazwisko="; cin >> a.nazwisko;
//	cout << "adres="; cin >> a.adres;
//	cout << "brutto="; cin >> a.brutto;
//	cout << "czy_pali(0/1)";
//	cin >> a.pali;
//}

>>>>//2. Dana jest lista osób o strukturze z poprzedniego zadania zapisana w
	//tablicy.Wprowadź dane n osób do tablicy a następnie napisz program
	//który :
	//• policzy sumę pensji brutto wszystkich pracowników,
	//• Wypisze wartość maksymalnej pensji brutto,
	//• Wypisze wartość minimalnej pensji brutto,
	//• Wypisze nazwiska i imiona osób palących.

//3. Dana jest lista osób o strukturze z zadania 1 zapisana w tablicy.
//Napisz program, który przepisze wszystkie osoby mające wyższe brutto niż
//średnia z brutto do nowej tablicy.Wypisz na ekran dane z tablicy
//początkowej i wynikowej.

//4. Napisz program przechowujący bazę danych osób z firmy XXX.Baza
//powinna zawierać informację : imie, nazwisko, rok urodzenia, adres.
//Napisz program, który wczytuje dane do bazy oraz wypisuje osoby urodzone
//po danym roku.Zdefiniuj strukturę do przechowywania daty.

//5. Napisz program, w którym zdefiniujesz unię mogącą przechowywać
//zmienna typu całkowitego, rzeczywistego lub tekstowego.Wczytaj zmienne
//różnych typów i przetestuj na różnych etapach programu co zostało
//wypisane i dlaczego.

//6. Dany jest zbiór polskich miast wraz ze współrzędnymi podanymi w
//układzie 0XY, gdzie x oznacza odległość w kilometrach od Warszawy w
//kierunku osi X a y odległość w kilometrach od Warszawy w kierunku osi Y.
//Napisz program, który wypisze miasta najbardziej odległe od siebie.Nie
//uwzględniamy efektów związanych z krzywizną ziemi.

//7. Zdefiniuj typ strukturalny oraz 50 elementową tablicę struktur
//pozwalającą przechowywać przepisy na ciasta(rodzaj, nazwa, czas
//	wykonania, stopień trudności(1, 2, 3)).Napisz program, który będzie
//	umożliwiał wprowadzanie danych do książki kucharskiej z ciastami, a
//	następnie :
//• Wypisze ciasta z jednego rodzaju np.torty
//• Obliczy średni czas wykonania ciast
//• Wypisze ciasta z podziałem na stopień trudności.

//8. Dana jest n - elementowa tablica ze strukturami opisującymi współrzędne
//punktów w przestrzeni PUNKT3D(float x, float y, float z).Napisz
//program, który sprawdzi czy istnieją w tablicy punkty leżące na tej
//samej płaszczyźnie.Program powinien wypisać na ekranie informację,
//które z punktów leżą na tej samej płaszczyźnie.

//9. Dana jest n - elementowa tablica ze strukturami opisującymi współrzędne
//punktów na płaszczyźnie(punkt x, punkt y, punkt z).Typ punkt też jest
//strukturą postaci
//(int pierwsza_wsp, int druga_wsp).Napisz program, który sprawdzi czy
//podane punkty tworzą trójkąty a następnie sprawdzi czy punkt, którego
//współrzędne wprowadzi użytkownik leży wewnątrz tego trójkąta.
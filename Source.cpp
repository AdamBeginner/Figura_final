#include <iostream>
#include "Header.h" 
#include <cstdlib>
#include <time.h>
#include <Windows.h>
#include <stdio.h>

using namespace std;

void wypisz(Figura* a1) {
	if (a1->wymiar == 1 ){ 
		cout << "Nazwa: " << a1->nazwa << " | Dlugosc bokow: [ " << a1->dl_bok[0] << " ]" << endl;
	}
	else if(a1->wymiar == 2) {
		cout << "Nazwa: " << a1->nazwa << " | Dlugosc bokow: [ " << a1->dl_bok[0] << " , " << a1->dl_bok[1] << " ] | Obwod: " << a1->Obwod() << " | Pole: " << a1->Pole() << endl;
	} else { 
		cout << "Nazwa: " << a1->nazwa << " | Dlugosc bokow: [ " << a1->dl_bok[0] << " , " << a1->dl_bok[1] << " , " << a1->dl_bok[2] << " ] | Obwod: " << a1->Obwod() << " | Pole: " << a1->Pole() << " | Objetosc: " << a1->Objet() << endl;
	}
}

int main() {

	cout << " I. Tworzymy i wyswietlamy 6 obiektow : " << endl;

	cout << endl << " Podaj dlugosc jaka maja miec figury: ";

		double a;
		cin >> a;
		Figura** tablica = new Figura * [6];
			tablica[0] = new odcinek();
			tablica[1] = new odcinek(a);
			tablica[2] = new Kwadrat();
			tablica[3] = new Kwadrat(a, a);
			tablica[4] = new Prostopadloscian();
			tablica[5] = new Prostopadloscian(a, a, a);

		for (int i = 0; i < 6 ; i++)
			wypisz(tablica[i]);

	cout << endl << " Usuwamy obiekty sparametryzowane.  ";

		delete tablica[1], tablica[3], tablica[5];
	
	cout << endl << " II. Modyfikujemy i wyswietlamy 3 obiekty : " << endl;

		cout << endl << " Podaj o jaka dlugosc chcesz zmodyfikowac figury: ";
		double b;
		cin >> b;

		for (int i = 0; i <=5; i+=2)
			tablica[i] ->dodaj(b);

		for (int i = 0;  i <= 5; i += 2)
				wypisz(tablica[i]);

		delete tablica[0], tablica[2], tablica[4];
	
	cout << endl << " III. Tworzymy i wyswietlamy tablice 3 figur : " << endl;

		Figura** tab = new Figura * [3];
			tab[0] = new odcinek(5.);
			tab[1] = new Kwadrat(5.,5.);
			tab[2] = new Prostopadloscian(5.,5.,5.);

		for( int i= 0; i < 3; i++)
		wypisz(tab[i]);

		for (int i = 0; i < 3; i++)
			delete tab[i];
		delete[] tab;


		getchar();
	}
#include "Header.h"



using namespace std;

odcinek::odcinek() {
	setNazwa();
	setWymiar(1);
	
	dl_bok = new double[1];
	dl_bok[0] = 0;
	
};
odcinek::odcinek(double a) {
	setNazwa();
	setWymiar(1);

	dl_bok = new double[1];
	dl_bok[0] = a;
};
odcinek::odcinek(const odcinek& old) {
	if (&old != this)
	{
		dl_bok[0] = old.dl_bok[0];
	}
};

Kwadrat::Kwadrat() {
	setNazwa();
	setWymiar(2);

	dl_bok = new double[2];
	dl_bok[0] = 0;
	dl_bok[1] = 0;
};
Kwadrat::Kwadrat(double a, double b) {
	setNazwa();
	setWymiar(2);

	dl_bok = new double[2];
	dl_bok[0] = a;
	dl_bok[1] = b;
};
Kwadrat::Kwadrat(const Kwadrat& old) {
	if (&old != this)
	{
		dl_bok[0] = old.dl_bok[0];
		dl_bok[1] = old.dl_bok[1];
	}
};


Prostopadloscian::Prostopadloscian() {
	setNazwa();
	setWymiar(3);

	dl_bok = new double[3];
	dl_bok[0] = 0;
	dl_bok[1] = 0;
	dl_bok[2] = 0;

};
Prostopadloscian::Prostopadloscian(double a,double b, double c) {
	setNazwa();
	setWymiar(3);

	dl_bok = new double[3];
	dl_bok[0] = a;
	dl_bok[1] = b;
	dl_bok[2] = c;

};
Prostopadloscian::Prostopadloscian(const Prostopadloscian& old) {
	if (&old != this)
	{
		dl_bok[0] = old.dl_bok[0];
		dl_bok[1] = old.dl_bok[1];
		dl_bok[2] = old.dl_bok[2];
	}
};
	


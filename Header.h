#pragma once

#include <iostream>
#include <string>



using namespace std;

class Figura {
public:
	string nazwa;
	virtual void setNazwa() {};
	
	int wymiar;
	int setWymiar(int a) {
		return wymiar = a;
	};

	double *dl_bok;

	virtual double Pole() { return -1.; };
	virtual double Objet() { return -1; };
	virtual double Obwod() { return -1.; };

	virtual void dodaj(double a) {};
	virtual void odejmij(double a) {};
};



class odcinek :public Figura {
public:

	void setNazwa() { nazwa = "odcinek"; };

	odcinek();
	odcinek(double a);
	odcinek(const odcinek& old);
	~odcinek() {
		cout << " | Destruktor: odcinek |" << endl;
	};

	void dodaj(double a) { dl_bok[0] += a; };
	void odejmij(double a) { dl_bok[0] -= a; };
};

class Kwadrat :public Figura {
public:

	void setNazwa() { nazwa = "kwadrat"; };

	double pol;
	double Pole() {
		pol = 1;
		for (int i = 0; i < wymiar; i++) {
			pol *= dl_bok[i];
		};
		return pol;
	}

	double obw;
	double Obwod() {	
		return dl_bok[0]*4;
	};

	void dodaj(double a) { 
		for (int i = 0 ; i < wymiar ; i++)
		dl_bok[i] += a;
		
	};
	void odejmij(double a) { 
		for (int i = 0; i < wymiar; i++)
		dl_bok[i] -= a;
	};

	Kwadrat();
	Kwadrat(double a, double b);
	Kwadrat(const Kwadrat& old);
	~Kwadrat() {
		cout << " | Destruktor: Kwadrat |" << endl;
	};


};

class Prostopadloscian :public Figura {
public:

	void setNazwa() { nazwa = "prostopadloscian"; };

	double obj;
	double Objet() { 
		obj = 1;
		for (int i = 0; i < wymiar; i++) {
			obj *= dl_bok[i];
		};
		return obj;
	};


	double pol;
	double Pole() {
		pol = dl_bok[0] * dl_bok[1] * 2 + dl_bok[0] * dl_bok[2] * 2 + dl_bok[1] * dl_bok[2] * 2;
		return pol;
	}

	double obw = 0.;
	double Obwod() {
		obw = 0.;
		for (int i = 0; i < wymiar; i++) {
			obw += dl_bok[i]*4;
		};
		return obw;
	};

	void dodaj(double a) {
		for (int i = 0; i < wymiar; i++)
			dl_bok[i] += a;

	};
	void odejmij(double a) {
		for (int i = 0; i < wymiar; i++)
		 dl_bok[i] -= a;
	};

	Prostopadloscian();
	Prostopadloscian(double a, double b, double c);
	Prostopadloscian(const Prostopadloscian& old);
	~Prostopadloscian() {
		cout << " | Destruktor: Prostopadloscian |" << endl;
	};


};






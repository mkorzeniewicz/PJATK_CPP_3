#pragma once
#include "Osoba.h";

class Rachunek
{
private:
	Osoba* _wlasciciel;
	double _stanKonta;
public:
	Rachunek();
	Rachunek(Osoba*);
	~Rachunek();
};


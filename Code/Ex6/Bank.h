#pragma once
#include "Rachunek.h";
#include "Osoba.h"
#include <iostream>
#include <vector>
class Bank
{
private:
	std::vector<Rachunek*> _rachunki;
public:
	Bank();
	void otworzNowyRachunek(Osoba*);
	~Bank();
};
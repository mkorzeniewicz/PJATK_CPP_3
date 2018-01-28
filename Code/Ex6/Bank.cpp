#include "stdafx.h"
#include "Bank.h"

#include "Rachunek.h";
#include "Osoba.h"
#include <iostream>
#include <vector>


Bank::Bank()
{
	
}

void Bank::otworzNowyRachunek(Osoba* osoba)
{
	_rachunki.push_back(new Rachunek(osoba));
}

Bank::~Bank()
{
}

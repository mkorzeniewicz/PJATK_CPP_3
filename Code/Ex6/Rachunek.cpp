#include "stdafx.h"
#include "Rachunek.h"
#include "Osoba.h";

Rachunek::Rachunek()
{
}

Rachunek::Rachunek(Osoba* osoba) : _wlasciciel(osoba)
{

}


Rachunek::~Rachunek()
{
}

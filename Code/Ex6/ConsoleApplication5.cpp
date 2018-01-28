// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Osoba.h"

int main()
{
	char* imieOsobyPierwszej = "Jan";
	int wiek = 10;

	//Statyczna alokacja
	Osoba osoba1(2, "Tomasz");
	osoba1.show();
	//delete &osoba1; // nie trzeba ale mozna ( nie poleca sie )

	//Dynamiczna alokacja
	Osoba* osoba2 = new Osoba(wiek, imieOsobyPierwszej);
	osoba2->show();
	//(*osoba2).imie;
	//osoba2->imie;
	delete osoba2;

	Osoba* osoba = new Osoba();
	osoba->show();

	//Osoba& - bo przekazujemy obiekt a nie wskaznik
	Osoba& ref = *osoba;

	//w momencie tworzenia klasy dostajemy 2 konstruktory:
	// domyslny bezparametrowy 
	// taki z referencja do obiektu jako argument - tworzy kopie obiektu
	Osoba* osoba3 = new Osoba(ref); 
	osoba3->show();

    return 0;
	//jezeli nie zostala usunieta osoba1 to tutaj wywyola sie destruktor (statyczna)
	//dla dynamicznego osoba2 trzeba recznie wczesniej wykonac destruktor
}


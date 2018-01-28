#include "stdafx.h" //jezeli jest zewnetrzna biblioteka
#include <iostream> //jeeli jest integralna czesc cpp
#include "Osoba.h"


Osoba::Osoba(int wiek, char* imie) : _wiek(wiek), _imie(imie)
{
	//this->_wiek = wiek;
}

Osoba::Osoba() 
{
	this->_imie = new char[5]; // wszsytko co dynamiczne trzeba ustawic i usunac w destruktorze
	
}

void Osoba::show() 
{
	//this->_wiek
}

Osoba::~Osoba()
{
	//std::cout << this->_wiek << std::endl;
	delete _imie;
	//system("pause");
}

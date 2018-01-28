#pragma once
class Osoba
{
private:
	char* _imie;
	int _wiek;
public:
	Osoba(int, char*); //kontruktor
	Osoba();
	void show(); //show metoda
	~Osoba(); //destruktor
};


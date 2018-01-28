// ConsoleApplication1.cpp : Defines the entry point for the console application.
//http://en.cppreference.com/w/cpp/language/operators

#include "stdafx.h"
#include <iostream>

using namespace std;

class Osoba {
public:
	int wiek;
	char* imie;
	Osoba(int wiek, char* imie) {
		this->wiek = wiek;
		this->imie = imie;
	}
	Osoba(int wiek) {
		this->wiek = wiek; // (*this).wiek = wiek;
	}

	Osoba() {}

	Osoba& operator++() {
		cout << "uzyto ++" << endl;
		this->wiek++;
		return *this;
	}
	~Osoba() {
		delete imie;
	}
	void hello() {
		cout << imie << endl;
	}
};

class WyjatkowaOsoba : Osoba {
public:
	WyjatkowaOsoba(int wiek, char* imie) : Osoba(wiek, imie) {}
	void hello() {
		this->operator++(); //++*this;
		cout << "vip: " << imie << endl;
	}
};

class A {
public:
	void f() {
		cout << "A" << endl;
	}
};
class B {
public:
	void f() {
		cout << "B" << endl;
	}
};
class C : A,B {
public:
	using A::f;
	//void f() {
		// Pierwszy sposb : cout << "C" << endl;
		// Drugi sposb : 
		//this->A::f();
		//this->B::f();
	//}
};

int main()
{
	Osoba* jan = new Osoba(30);
	cout << jan->wiek;
	++(*jan);
	jan->hello();
	auto vip = new WyjatkowaOsoba(5, "Jasiek");
	vip->hello();

	auto a = new A();
	auto b = new B();
	auto c = new C();
	a->f();
	b->f();
	c->f();

	//przerobic polimorfizm dziedziczenie
	//przerobic unie

	system("pause");
    return 0;
}


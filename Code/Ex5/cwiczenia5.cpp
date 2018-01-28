// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include<iostream>

using namespace std;

union Unia {
	int x;
	long double y;
};

Element* lista;

struct Element {
	char* imie;
	Element* next;
};

Element* getNewElement();
void insert(Element* element);
void show();

int main()
{

	/*I. Wykorzystując technikę tworzenia unii, zdefiniuj typ złożony ze zmiennych typów int
	i long double.Następnie wykonaj poniższe operacje :
		• utwórz zmienną zdefiniowanej unii,
		• zainicjuj ją zmienną typu int,
		• wyświetl na ekran rozmiar utworzonej zmiennej i wartość pól unii,
		• zainicjuj unię zmienną typu long double,
		• wyświetl na ekran rozmiar utworzonej zmiennej i wartość pól unii.
		

	Unia unia{ 1 };
	//zmienna.x
	cout << "Rozmiar uni: " << sizeof(unia) << endl << "x: " << unia.x << ", y: " << unia.y << endl;

	cout << "zmienna x: " << endl << "rozmiar - " << sizeof(unia.x) << endl << "wartosc: " << unia.x << endl;
	cout << "zmienna y: " << endl << "rozmiar - " << sizeof(unia.y) << endl << "wartosc: " << unia.y << endl;

	unia = Unia{ 2.0 };

	cout << "Rozmiar uni: " << sizeof(unia) << endl << "x: " << unia.x << ", y: " << unia.y << endl;

	cout << "zmienna x: " << endl << "rozmiar - " << sizeof(unia.x) << endl << "wartosc: " << unia.x << endl;
	cout << "zmienna y: " << endl << "rozmiar - " << sizeof(unia.y) << endl << "wartosc: " << unia.y << endl;
	*/

	/*
	Utwórz strukturę Element o polach char* imie i Element next.Utwórz zmienną
		Element* lista, której początkową wartością będzie 0. Następnie utwórz funkcje :
	• Element* getNewElement() – pobierającą z klawiatury wartości zmiennej imie
		i opakowującą ją w strukturę typu Element;
	• void insert(Element*) – znajdującą element listy z polem next równym 0,
		któremu przypisze argument z jakim została wywołana;
	• void show() – wyświetającą wszystkie elementy znajdujące się w zmiennej lista.
		W funkcji main pętla nieskończona będzie powtarzać następujące kroki : getNewElement,
		insert, show, . . .

		*/

	lista = getNewElement();
	insert(lista);

	Person p1(10);
	Person p2{ 10 };
	Person* p3 = new Person(10);
	Person* p4 = new Person{ 10 };

	system("Pause");

    return 0;
}

Element* getNewElement() {
	Element* result = new Element{};
	char* imie = new char[100];
	cout << "Podaj imie: ";
	cin >> imie;
	result->imie = imie; //(*result).imie
	return result;
}

void insert(Element* root) {
	Element* iterator = root;
	while (iterator->next) {
		iterator = iterator->next;
	}
	iterator->next = getNewElement();
}

void show() {
	Element* iterator = *lista;
	while (iterator->next) {
		cout << iterator->imie;
		iterator = iterator->next;
	}
	iterator->next = getNewElement();
}


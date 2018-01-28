// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <cstdio>
#include <sstream>

using namespace std;

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
//void zad6();

void show(int** tab);
void pause();
void header(int numberOfTask);

//zad3
char inputData[100];

int main()
{
	/*zad1();
	zad2();
	zad3();
	zad4();*/
	zad5();
	//zad6();
	
	pause();
	return 0;
}

void zad1() {

	/*Utwórz trzy tablice o rozmiarze 3 elementów i wypełnij je dowolnymi wartościami.
		Następnie przygotuj trzyelementową tablicę wskaźników, której elementy będą wskazywały
		tablice z liczbami.Napisz funkcję show wyświetlającą na ekranie wartości
		wszystkich tablic.*/

	header(1);

	int tab0[3] = { 1,2,3 };
	int tab1[3] = { 4,5,6 };
	int tab2[3] = { 7,8,9 };

	int* pointerTab[] = {tab0, tab1, tab2};
	show(pointerTab);
}

void zad2() {
	//Zdefiniuj zmienną typu int i zainicjuj ją wartością “5”.Następnie utwórz wskaźnik do
	//	tej zmiennej.Potem utwórz odnośnik do zdefiniowanego wskaźnika.Następnie przygotuj
	//	dwuelementową tablicę, której elementami będą wskaźniki na przygotowany
	//	wskaźnik i odnośnik.Wreszcie wypisz na ekran wartość zmiennej int posługując się
	//	zadeklarowaną tablicą.
	header(2);

	int value = 5;
	int* pointer = &value;
	int* &link = pointer;

	int* tab[] = {pointer, link};

	cout << *tab[0] << endl;

}

void zad3() {
	//Dana jest globalna tablica zmiennych typu char o rozmiarze 100 elementów i nazwie
	//inputData.Używając operatora cin wprowadzamy do tej tablicy ciąg znaków.Następnie
	//określamy ilość wprowadzonych znaków i tworzymy dedykowaną, dynamicznie
	//tworzoną tablice o rozmiarze dopasowanym do długości wprowadzonego słowa.
	header(3);

	cout << "WPROWADZ SLOWO: ";

	cin >> inputData;
	
	char* end = inputData;
	while (*end)
		end++;

	int size = end - inputData;
	char* pointerTab = new char[size];

	for (int i = 0; i < size; i++) {
		pointerTab[i] = inputData[i];
	}
}

void zad4() {
	/*Program z poprzedniego punktu należy wzbogacić o dynamicznie tworzoną tablicę
	przechowującą wskaźniki do wszystkich wprowadzonych słów.Wprowadzenie kolejnego
	słowa będzie skutkować wyświetleniem wszystkich wprowadzonych do tej pory
	słów.Jeżeli w tablicy brakuje miejsca na kolejne słowa należy zwiększyć rozmiar
	dotychczasowej tablicy dwukrotnie*/

	header(4);

}

void fun1(int val);
void fun2(int* pointer);
void fun3(int &link);

void zad5() {
	/*Utwórz funkcje fun1, fun2 i fun3, które jako parametr będą przyjmować odpowiednio
	int, wskaźnik i odnośnik.Celem wszystkich funkcji będzie wyświetlenie wartości
	dostarczonych jako parametry, inkrementacja tych wartości i ponowne wyświetlenie.
	W funkcji main :
		• zadeklaruj i zainicjuj zmienną wrt typu int,
		• wyświetl jej wartość na ekran,
		• wywołaj funkcje fun1, fun2 i fun3 dostarczając jako parametr wrt,
		• ponownie wyświetl wartość zmiennej wrt.*/
	
	//wskaznik jest adresem
	//odnosnik jest aliasem

	header(5);

	int value = 5;

	cout << "Wartosc poczatkowa: " << value << endl;

	fun1(value);
	cout << "Wartosc po wykonaniu pierwszej funkcji " << value << endl;

	fun2(&value);
	cout << "Wartosc po wykonaniu drugiej funkcji " << value << endl;

	fun3(value);
	cout << "Wartosc po wykonaniu trzeciej funkcji " << value << endl;

	cout << "Wartosc koncowa: " << value << endl;
}

void fun1(int val) {
	cout << endl << "Wartosc przed wykonaniem pierwszej funkcji " << val << endl;
	val++;
}

void fun2(int* pointer) {
	cout << endl << "Wartosc przed wykonaniem drugiej funkcji " << *pointer;
	(*pointer)++;
}

void fun3(int &link) {
	cout << endl << "Wartosc przed wykonaniem trzeciej funkcji " << link;
	link++;
}

void header(int numberOfTask) {
	static bool firstHeader = true;
	if (!firstHeader) {
		cout << endl << endl;
	} else {
		firstHeader = false;
	}
	cout << "ZADANIE " << numberOfTask << endl << endl;
}

void show(int** tab) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << tab[i][j] << endl;
		}
	}
}

void pause() {
	cout << endl << endl;
	system("pause");
}



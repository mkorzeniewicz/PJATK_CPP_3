/*
Zaimplementuj funkcję int mystrlen(char*) zwracającą długość dostarczonego ciągu
znaków. Program powinien przedstawiać wykorzystanie arytmetyki wskaźników.
*/

#include<iostream>
#include <cstdio>
#include <sstream>

using namespace std;

bool firstHeader = true;

int getLength(char* text);
void header(int numberOfTask);
bool isPalindrom(char* str);
void checkAndDisplayIfPalindrom(char* str);
void pause();
int* split(char* str);

void zad1();
void zad2();
void zad3();

int main() {
	zad1();
	zad2();
	zad3();

	pause();
	return 0;
}

int getLength(char* text)
{
	int length = 0;
	while (*text) {
		length++;
		text++;
	}
	return length;
}

void checkAndDisplayIfPalindrom(char* str) {
	cout << str << (isPalindrom(str) ? " jest palindromem" : " nie jest palindromem") << endl;
}

void header(int numberOfTask) {
	if (!firstHeader) {
		cout << endl << endl;
	}
	else {
		firstHeader = false;
	}
	cout << "ZADANIE " << numberOfTask << endl << endl;
}

void pause() {
	getchar();
}

bool isPalindrom(char* str) {
	int length = getLength(str);

	// is number of letters even
	for (int i = 0; i < length; i++) {
		if (*(str + i) != *(str + length - 1 - i)) {
			return false;
		}
	}

	return true;
}

void zad1() {
	header(1);

	char* p1 = "pejot";
	cout << "Dlugosc slowa \"" << p1 << "\" jest rowna " << getLength(p1);
}

void zad2() {
	header(2);

	char* oddPalindrom = "kajak";
	char* notEvenPalindrom = "asddsa";
	char* notEvenNotPalindrom = "asdsda";
	char* oddNotPalindrom = "kajas";

	checkAndDisplayIfPalindrom(oddPalindrom);
	checkAndDisplayIfPalindrom(notEvenPalindrom);
	checkAndDisplayIfPalindrom(notEvenNotPalindrom);
	checkAndDisplayIfPalindrom(oddNotPalindrom);
}

void zad3() {
	header(3);

	char* indicator = "Ala ma kota, a kot ma ale";

//	int* split(indicator);

}

//int* split(char* str) {
//	while (*str) {
//		if
//	}
//
//}


// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int mul(int a, int b);
int dif(int a, int b);
int sum(int a, int b);
int sub(int a, int b);

void funCall(int** varArray, int varCount, int(*methodsArray[])(int, int), int methodsCount);

int main()
{
	cout << "zadanie 1" << endl;
	cout << "dane wejsciowe: 6, 3" << endl;

	int(*funPtr1)(int, int) = mul;
	int(*funPtr2)(int, int) = sum;
	int(*funPtr3)(int, int) = dif;
	int(*funPtr4)(int, int) = sub;

	cout << "mnozenie: " << funPtr1(6, 3) << endl;
	cout << "dodawanie: " << funPtr2(6, 3) << endl;

	cout << "zadanie2" << endl;

	const int methodsCount = 4;
	const int varCount = 4;

	int(*tabFunPtr[methodsCount])(int, int) = { funPtr1 ,funPtr2, funPtr3, funPtr4 };

	cout << "zadanie 3" << endl;
	
	int* varTab1 = new int[2];
	varTab1[0] = 2;
	varTab1[1] = 4;
	int* varTab2 = new int[2];
	varTab2[0] = 4;
	varTab2[1] = 8;
	int* varTab3 = new int[2];
	varTab3[0] = 8;
	varTab3[1] = 12;
	int* varTab4 = new int[2];
	varTab4[0] = 12;
	varTab4[1] = 4;
	int** pointerTab = new int*[4];
	pointerTab[0] = varTab1;
	pointerTab[1] = varTab2;
	pointerTab[2] = varTab3;
	pointerTab[3] = varTab4;	

	funCall(pointerTab, methodsCount, tabFunPtr, varCount);

	system("Pause");
    return 0;
}

void funCall(int** varArray, int varCount, int(*methodsArray[])(int, int), int methodsCount) {
	for (int i = 0; i < varCount; i++)
	{
		cout << "Zmienne: " << varArray[i][0] << ", " << varArray[i][1] << endl;
		for (int j = 0; j < methodsCount; j++)
		{
			cout << methodsArray[j](varArray[i][0], varArray[i][1]) << endl;
		}
		cout << endl;
	}
}

int mul(int a, int b) {
	return a*b;
}
int dif(int a, int b) {
	return a / b;
}
int sum(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}


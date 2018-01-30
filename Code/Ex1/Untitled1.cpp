#include<iostream>

using namespace std;

int main(){
	//zad1
	{	
		cout << "hello" << endl;
	}
	//zad2
	{
		//asd
		/*asd*/
		//!asd
		/** asd*/
		///231
	}
	//zad3
	{
		int a = 1;
		long b = 2;
		short c = 3;
		float d = 4.0;
		double e = 5.0;
		bool f = true;
		char g = 's';
		
		cout << a << endl << b << endl << c << endl << d << endl << e << endl << f << endl << g << endl;
	}
	//zad4
	{
		int a,b,c;
		cout << "Podaj trzy liczby:";
		cin >> a;
		cin >> b;
		cin >> c;
		cout << "Najwieksza to " << (a > b ? (a > c ? a : c):(b > c ? b : c)) << endl;
	}
	//zad5
	{
		int a = 0;
		int temp;
		int counter = 0;
		do{
			cout << "Podaj liczbe: "; 
			temp = a;
			cin >> a;
			if(temp > 0 && a < 0 || temp < 0 && a > 0){
				counter++;
			}
		}while(a != 0);
		cout << "Wprowadzono zero, liczba par z ró¿nymi znakami: " << counter << endl;
	}
	//zad6
	{
		enum samochod {FordT=1, Lexus=2};
		enum kolor {czerwony=1, niebieski=2, zielony=3};
	}
	//zad7
	{
		int wrt;
		while(true){
			cout << "Podaj ilosc obrotow: ";
			cin >> wrt;
			
			for(int i = wrt; i > 0; i--){
				cout << "Hello";
			}
			cout << endl;
			int temp = wrt;
			while(temp != 0){
				cout << "Hello";
				temp--;
			}
			cout << endl;
			temp = wrt;
			if(temp != 0){
				do{
					cout << "Hello";
					temp--;
				}while(temp != 0);
			}
			cout << endl;
		}
	}
	
	getchar();
	return 0;
}

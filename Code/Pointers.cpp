#include<iostream>

using namespace std;

void passByReference(int *reference);
void passByValue(int value);
void show(const int *wskaznik, int size);
void fill(int *wskaznik, int size);
char * producentWskaznika(void);
char producentWartosci(void);

int main(){
	
	{
		int *wskaznik; // gwizdolot
		int zmienna = 3;
		int drugaZmienna = 5;
		wskaznik = &zmienna; // ampersent jak Adres
	
		zmienna = 10;
		cout << *wskaznik << endl;
		*wskaznik = 20;
		cout << *wskaznik << endl;
		wskaznik = &drugaZmienna;
	 	
		cout << *wskaznik << endl;
	}
	{
		//Przyklad wskaznika jako l i r wartosci
		int zmienna = 6;
		int *wskaznik = &zmienna;
		
		int m;
		m = zmienna;
		m = *wskaznik; //gwizdolotem do wartosci zapisanej pod komorka
	
	}
	{	
		//PRaca z tablicami
		int *wskaznik;
		int tab[10];
		
		wskaznik = &tab[0]; // to samo co ponizej
		wskaznik = tab; // bo nazwa tablicy pokazuje na adres zerowego elementu tablicy
		
		for(int i = 0; i < 10; i++){
			*(wskaznik++) = i;
		}
		
		wskaznik = tab;
		
		cout << endl << "Elementy tablicy: ";
		for(int i = 0; i < 10; i++){
			cout << *wskaznik << ", ";
			wskaznik++;			
		}
		cout << endl;
		
		//Nazwa tablicy jest rownoczesnie adresem jej zerowego elementu
		
	}
	{
		int tab[10] = {0,1,2,3,4,5,6,7,8,9};
		int *ruchomyWskaznik = tab;
		int *wskaznikKonca = &tab[10];
		
		cout << endl << "Elementy tablicy: ";
		while(ruchomyWskaznik != wskaznikKonca){
			cout << *(ruchomyWskaznik++) << ", ";
		}
	}
	{
		int a = 10;
		
		cout << endl << endl << "Na poczatku zmienna ma wartosc " << a;
		passByValue(a);
		cout << endl << "Po wykonaniu passByValue zmienna ma wartosc " << a;
		passByReference(&a);
		cout << endl << "Po wykonaniu passByReference zmienna ma wartosc " << a;
		cout << endl;
	}
	{
		int tab[10] = {0,1,2,3,4,5,6,7,8,9};
		int *wskaznik = tab;
		
		cout << endl << "Elementy tablicy" << endl;
		for(int i = 0; i < 10; i++){
			cout << wskaznik[i] << ", ";
//			cout << *(wskaznik++) << ", ";
		}
	}
	{
		int tab[10];
		
		fill(tab, 10);
		show(tab, 10);
	}
	{
		char *wsk;
		wsk = new char;
		
		delete wsk;
		
		double *w;
		w = new double[15];
		delete []w;
	}
	{
		char *wskaznik;
		wskaznik = producentWskaznika();
		char value;
		value = producentWartosci();
		
		cout << endl << endl << value;
		delete wskaznik;
		//chyba tutaj jest wyciek pamieci
		
	}
	{
		int * wsk;
		wsk = new int(32);
		
		const double *mathPi;
		mathPi = new const double(3.1416);
		delete mathPi;
	}
	{
		int * tabPtr = new int[10];
		delete [] tabPtr;
	}
	{
		cout << endl << "Ile tablica ma miec elementow: ";
		int size;
		cin >> size;
		int * tabPtr = new int[size];
		
		*tabPtr = 44;
		tabPtr[0] = 44;
		
		*(tabPtr + 3) = 100;
		tabPtr[3] = 100;
	}
	{
		//tutaj piszemy dalej
		
	}
	{
		cout << endl << endl << "All good";
		getchar();
	}
	return 0;
}
char* producentWskaznika(void){
	char *w;
	w = new char;
	return w;
}
char producentWartosci(void){
	char *w;
	w = new char('s');
	return *w;
}
void fill(int *wskaznik, int size){
	for(int i = 0; i < size; i++){
		*(wskaznik++) = i;
	}
}
void show(const int *wskaznik, int size){
	cout << endl << "Elementy tablicy" << endl;
	for(int i = 0; i < size; i++){
		cout << wskaznik[i] << ", ";
	}
}

void passByValue(int value){
	value++;
}

void passByReference(int *reference){
	(*reference)++;
}

#include <cstdlib>
#include <iostream>

using namespace std;

int strlen(char* a){ //zadanie 1
	int n=0;
	while(a[n]!='\0'){
		n++;
	}
	return n+1;
}

bool isPalindrom(char* a){ //zadanie 2
	int size=strlen(a);//tu sobie wykorzysta³em funkcje z poprzedniego zadania
	int counter=0;

	for(int i=0; i<size/2;i++){
		if(a[i]!=a[size-2-i])return 0;
	}
	return true;
}


void makeAmbigram(char* a){
	int n=0;
	bool nieAmbigram=false;
	if(isPalindrom(a)){
		while(a[n]!='\0'){
			if(!(a[n]=='X' || a[n]=='Z' || a[n]=='O' || a[n]=='N' || a[n]=='M' || a[n]=='I' || a[n]=='H')){
				nieAmbigram=true;
				break;
			}
			n++;
		}
	}else nieAmbigram=true;
	if(!nieAmbigram) cout<< a<<endl;
	else cout<<"NIE MO¯NA UTWORZYÆ";
}
char** podziel(char* text, char* t[], int size)// char* text - tekst do podzielenia, char* t[] - tablica w której bêdziemy przechowywaæ s³owa(mo¿na zadeklarowaæ wewn¹trz funkcji ale wtedy trzeba dorobiæ liczenie s³ów i u¿yæ static), int size iloœæ elementów tablicy nie wiem czemu nie dzia³a wewn¹trz funkcji bêdê musia³ siê go zapytaæ:x
{       
       int a=0;//obecny znak textu
       int p=0;//pocz¹tek nowego s³owa
       int dl=0;//dlugosc nowego s³owa
       char* slowo[size];//tablica ze s³owami
       for(int i=0; i<size;i++){
               
               p=a;//oznaczamy pocz¹tek s³owa
               dl=0;
               for(;text[a]!=' ' && text[a]!='\0';a++){
                dl++;//liczmy d³ugoœæ s³owa(mo¿na u¿yæ funkcji z poprzedniego zadania ale i tak for musi zostaæ ¿eby okreœliæ koniec s³owa.
               }
               slowo[i]=new char[dl+1];//tworzymy tablice charow o d³ugoœci s³owa +1 bo trzeba dopisaæ znak zerowy
               for(int z=0;z<dl;z++,p++){
                slowo[i][z]=text[p];//dodajemy kolejne litery s³owa
               }
               slowo[i][dl]='\0';//dopisujemy znak zerowy do s³owa
             
               t[i]=slowo[i];//dopisujemy s³owo do tablicy
             
               a++;//przesuwamy obecny znak o jedne ¿eby omin¹æ spacje
       }
         
       return t;
} 
int main(int argc, char *argv[])
{
    //zadanie1
    /*
    char* text="programista nie ma wacka";
    cout<<strlen(text);
    */
    //zadanie2
    /*
    char* text="programista";
    cout<<isPalindrom(text);
    */
    //zadanie3
	/*
    char* a="Ala ma kota a kot ma ale";
    char* t[7];//ilosc slow trzeba w prowadzic tutaj 7
    char** tab=podziel(a, t, 7); 
	cout<<tab[6];
    */
    //zadanie4
	/*
    char* ambi="XOZOX";
	makeAmbigram(ambi);
    */
    //zadanie5
    /*
    niechce mi siê :x rusz ³bem programista i mnie wyrêcz :D
    */
	system("PAUSE");
	return EXIT_SUCCESS;
}

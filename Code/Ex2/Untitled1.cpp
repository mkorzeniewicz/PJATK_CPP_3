#include <iostream>
#include <cstring>

using namespace std;

int mystrlen(char * wsk);
bool isPalindrom(char * wsk);
void split(char * wsk);

int main(){
	//zad1
	{
		char * wsk = "KOT";
		cout << "Kot: " << mystrlen(wsk) << endl << endl;
	}
	//zad2
	{
		char * wsk = "KajaK"; 
		cout << "KajaK: " << isPalindrom("KajaK") << endl;
		cout << "KaaK: " << isPalindrom("KaaK") << endl;
		cout << "Kaczka: " << isPalindrom("Kaczka") << endl;
	}
	//zad3
	{
		
		char * wsk = "Ala ma kota";
		split(wsk);
		
		
		/*
		int counter = 0;
		while(tab[counter]){
			while(*(tab[counter])){
				cout << tabptr[i];
				tab[counter]++;
			}	
			counter++;
			cout << endl;
		}
		*/
		
		
	}
	//zad4
	{
		int a = 5;
		int b = 8;
		
		int * ptr = &a;
		int& ref = b;
		
		ref = *ptr;
		
		cout << "Zmienna a: " << *ptr << endl;
		cout << "Zmienna b: " << ref << endl;
	}
	//zad5
	{
		/*
		Dana jest stuelementowa tablica zmiennych typu char.
		Wprowadz do niej dowolny ci¹g znaków i sprawdŸ,
		czy zawiera ona ci¹gi znaków, które by³yby palindromami.
		Wypisz na konsolê tylko najkrótszy palindrom w ca³ym ci¹gu. 
		*/
	}
	//zad6
	{
		/*
		Utwórz 5 elementow¹ statyczn¹ tablicê zmiennych typu int i wype³nij j¹ dowolnymi wartoœciami.
		Nastêpnie utwórz wskaŸnik, pokazuj¹cy ostatni element tej tablicy.
		Dysponuj¹c wskaŸnikami pokazuj¹cymi elementy pierwszy i ostatni,
		napisz pêtlê wykorzystuj¹c¹ te wskaŸniki sumuj¹c¹ wszystkie elementy tej tablicy. 
		*/
		int size = 5;
		int * tab = new int[size];
		
		for(int i = 0; i < size; i++){
			*(tab + i) = i;
		}
		
		const int arr[5] = { 1, 2, 3, 4, 5 };
		
		const int * endPtr = arr + 4;
		
		int sum = 0;
		
		for(int i = 0; arr+i != endPtr+1; i++){
			sum += arr[i];
		}
		cout << "Suma: " << sum;
		
	}
	//zad7
	{
		/*
		Utwórz i wype³nij dowolnymi wartoœciami trzy tablice znaków. 
		Nastêpnie utwórz czteroelementow¹ tablicê wskaŸników i wype³nij jej pola wskaŸnikami do utworzonych tablic. 
		U¿yj pêtli aby wyœwietliæ wszystkie ci¹gi znaków
		*/
		
		char tab1[] = "oko";
		char tab2[] = "zab";
		char tab3[] = "dupa";
		
		char * ptab1 = tab1; 
		char * ptab2 = tab2;
		char * ptab3 = tab3;
		
		char * tab[] = {ptab1, ptab2, ptab3};
		
		cout << endl << endl;
		
		for(int i=0; i<3; i++){
			cout << tab[i] << endl;	
		}
	}
	
	getchar();
	return 0;
}

void split(char * wsk){
	int wordCounter = 0;
	char * temp = wsk;
	while(*temp){
		if(*temp == ' '){
			wordCounter++;	
		}
		*temp++;
	}
	
	char ** wordTab = new char* [wordCounter+1];
	
	wordCounter = 0;
	
	temp = wsk;
	char * tabptr;
	int count = 0;
	while(*wsk){
		if(*wsk != ' '){
			count++;
		}else {
			tabptr = new char[count];
			for(int i = 0; i < count; i++){
				tabptr[i] = temp[i];
			}
			wordTab[wordCounter++] = tabptr;
			temp = wsk+1;
			count = 0;
		}
		wsk++;
	}
	tabptr = new char[count];
	for(int i = 0; i < count; i++){
		tabptr[i] = temp[i];
	}
	wordTab[wordCounter++] = tabptr;
	temp = wsk+1;
	count = 0;
	
	/*
	for(int i = 0; i < wordCounter; i++){
		while(wordTab[i]){ // char *a
			cout << wordTab[i][0];
			cout << wordTab[i][1];
		}
		cout << endl;
	}
	*/
}

int mystrlen(char* wsk){
	int letterCount = 0;
	while(*wsk){
		wsk++;
		letterCount++;
	}
	return letterCount;
}

bool isPalindrom(char* wsk){
	int lengh = mystrlen(wsk);
		for(int i = 0; i < lengh/2; i++){
			if(wsk[i] != wsk[lengh - i - 1]){ // to samo co if( *(wsk + i) != *(wsk + lengh - i - 1) )
				return false;
			}
		}
	return true;
}

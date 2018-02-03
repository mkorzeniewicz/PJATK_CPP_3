#include <cstdlib>
#include <iostream>

using namespace std;

int strlen1(char* a){ //zadanie 1
    int n=0;
    char* z=a;
	for(;a[n]!='\0';n++)z++;
	return z-a+1;
}
bool isPalindrom(char* a){ //zadanie 2
	int size=strlen1(a);
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
			}
			n++;
		}
	}else nieAmbigram=true;
	if(!nieAmbigram) cout<< a<<endl;
	else cout<<"NIE MO¯NA UTWORZYÆ";
}
char** podzielNaWyrazy(char* txt, char* tablica[], int* rozmiar)
{   
    int dlugosc=0;
    int ilosc=0;
    int a=0;
    while(txt[a]!='\0'){
         dlugosc=0;
         for(;txt[a]!=' ' && txt[a]!='\t' && txt[a]!=',' && txt[a]!='.' && txt[a]!='"';a++)
			dlugosc++;
        if(dlugosc>0)ilosc++;
        a++;
    }
	a=0;
	int p=0;
	*rozmiar=ilosc;
	char* slowo[ilosc];
	for(int i=0; i<ilosc;i++){
		p=a;
		dlugosc=0;
		for(;txt[a]!=' ' && txt[a]!='\t' && txt[a]!=',' && txt[a]!='.' && txt[a]!='"' && txt[a]!='\0';a++)
			dlugosc++;
		if(dlugosc>0){
			slowo[i]=new char[dlugosc+1];
			for(int z=0;z<dlugosc;z++,p++)
				slowo[i][z]=txt[p];
			slowo[i][dlugosc]='\0';
			tablica[i]=slowo[i];
        }else i--;
		a++;
	}

	return tablica;
} 
int main(int argc, char *argv[])
{
    
   /* char* text="kajak";
    cout<<strlen1(text);
   makeAmbigram("XOX");
    */
 char* text="Ala ma kota, a kot ma ale";
    int el=0;
    char* t[el];
    char** tab=podzielNaWyrazy(text, t, &el);
    cout<<tab[0]<<endl;
     
    //zadanie 5
   /* int pierwsza = 5,
    druga = 8;

int* ptr = &pierwsza;
int& ref = druga;
cout<<ref << endl << ptr << endl << pierwsza << endl << druga << endl << endl;
    
ref = *ptr;

cout<<ref << endl << ptr << endl << pierwsza << endl << druga << endl;
*/
    system("PAUSE");
    return EXIT_SUCCESS;
}

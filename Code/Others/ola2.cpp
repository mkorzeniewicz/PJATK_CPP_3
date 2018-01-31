//zad.1 
 int mystrlen(char* x){
 	cout<< length<< endl;
	int length = 0;
	while (*x) {
		length++;
		x++;
		cout << *x<< endl;
	}
	return length;
	
		
		char *p1 = "pejot";
		cout << *p1 <<endl;
	//*p1 = 'p'
//	if	(*(p1 + 1) == 'e') cout<< "true" << endl;
	cout<< p1[0] << endl;p
	p1++;
	cout << *p1<< endl;e
	cout << p1 << endl; 
		//cout << *p1<< endl; ejot
		//p1++; 
		
//zad.2 
bool isPalindrom(char *wyraz)
{
int zakres = 0;
while(wyraz[zakres])
zakres++;
for(int i = 0; i < zakres / 2; i++)
{
if(wyraz[i] != wyraz[(zakres-1)-i])
return true;
}
}

int main()
{
if( isPalindrom("abranarba")) cout << "true" << endl;

//zad.3 
char * ala = "Ala ma kota, a kot ma ale";


int count = 0;
char tab1 [] = new char[];

while(*ala){
	if(*ala == ' ') {
	ala ++;
	count++;
	continue;	
	}
	char * tab1 = *ala;
	ala++;
	
zad.4

zad.6
static int tab[5] = {1,2,3,4,5};

int * pierwszy = &tab[0];
int * ostatni = &tab[4];
int suma=0;
int * pomocniczy;

cout << *pierwszy <<endl<< *ostatni <<endl;

do{
		suma+= *pierwszy;
	
	pierwszy++;
}while(pierwszy != (ostatni+1));

cout << suma <<endl;

zad.7

           const char **v;
           const char *t[] = {"abcd", "efghi", "jklmno" };  
           v = t;                                           
           cout << "v+2         = " << v+2         << endl;
           cout << "v[2]        = " << v[2]        << endl;
           cout << "*(v+2)      = " << *(v+2)      << endl;
       
           cout << "*(*(t+1)+2) = " << *(*(t+1)+2) << endl; 
           cout << "t[1][2]     = " << t[1][2]     << endl;
      
          cout << "*(*(v+1)+2) = " << *(*(v+1)+2) << endl;
        cout << "v[1][2]     = " << v[1][2]     << endl;

char tab1[] = "oko";
char tab2[] = "zab";
char tab3[] = "dup";

char * ptab1 = tab1; 
char * ptab2 = tab2;
char * ptab3 = tab3;


cout << "--"<< endl;
cout << ptab1<< endl;
cout << *ptab1 << endl;

char * tab[] = {ptab1, ptab2, ptab3};// tu sa cale wyrazy
char tab0[] = {*ptab1, *ptab2, *ptab3}; //to na same litery wskazuje o,k, d


char x = *(*(tab+1)+2);
cout << x<< endl;
for(int i=0; i<3; i++){

cout << tab[i]<< endl;
cout << tab[i][2]<< endl;		
}

zad.8??
char tab1[] = "oko";
char tab2[] = "zab";
char tab3[] = "dup";
char tab4[] = "cap";


char * ptab1 = tab1; 
char * ptab2 = tab2;
char * ptab3 = tab3;
char * ptab4 = tab4;


char * tab[4] = {ptab1, ptab2, ptab3};// tu sa cale wyrazy
char * tabt[4];
for(int i=2; i<4; i++){
	tab[i+((i>=1)?1:0)] = tabt[i];
}

tabt[1] = ptab4;
for(int i=0; i<4; i++){
	cout<< tabt[i]<<endl;
}
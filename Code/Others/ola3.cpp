zad.1 
void show (int** tab){
for(int i=0; i<3; i++){
	for(int k=0; k<3; k++){
		cout<< tab[i]<<endl;
		cout<< tab[i][k]<<endl;
	}
}	
}

int main()
{

int tab1[] = {1,2,3};
int tab2[] = {4,5,6};
int tab3[] = {7,8.9};

int * ptab1 = tab1; 
int * ptab2 = tab2;
int * ptab3 = tab3;

int * taball[] = {ptab1, ptab2, ptab3};


for(int i=0; i<3; i++){
	cout<< taball[i]<<endl;
}

show(taball);

void show(int**t) {
		for (int i = 0; i < 3; i++) {
			int*row = t[i];
			for (int j = 0; j < 3; j++){
				cout << row[j] << endl;
			}
		}

	};
	
int main()
{

			int tab0[]{ 1,2,3 };
		//typeoftab0=int*
		int tab1[]{ 1,2,3 };
		int tab2[]{ 1,2,3 };

		int* x[3] = { tab0,tab1, tab2 };
		//x=int**

show(x);

zad.2
int x = 5;
int * px = &x;
int *& ref = px;

int * tab[] = {px, ref};

cout << tab[0][0] << endl;
cout << *tab[0] << endl;
cout << **tab << endl;
cout << tab[0] << endl;

zad.3
char inputData[100];
	//cout << "Podaj liczbe calkowita: ";
	int temp;
	
		cin >> inputData;
		char* end = inputData;
		while (*end) {
			end++; //funkcja przeszkakujaca o 1 wskaznik
		}
		int length = end - inputData;
		char * jnt = new char[length];

		for (int i = 0; i < length; i++) {
			jnt[i] = inputData[i];
			cout<< inputData[i] << endl;
		}
		
zad.4??

zad.5
void fun1(int x){
	cout << x <<endl;
	x++;
	cout << x << endl;
}

void fun2(int * x){
		cout << x <<endl;
		cout << *x <<endl;
	x++;
	cout << x << endl;
}

void fun3(int & x){
		cout << x <<endl;
		cout << &x <<endl;
	x++;
	cout << x << endl;
}

	
int main()
{

int x = 5;
int * px = &x;
int & rx = x;
fun1(x);
fun2(&x); //px
fun3(x);	//rx

zad.6
void longestSubStr(char* ciag, char& znak) {
 
    char* globalStart = 0;
 
    int globalLength = 0;
 
    while (*ciag) {
 
        if (*ciag == znak) {
 
            char* localStart = ciag;
 
            while (*ciag == znak)
 
                ciag++;
 
            if (ciag - localStart > globalLength) {
 
                globalStart = localStart;
 
                globalLength = ciag - localStart;
 
            }
 
        } else
 
            ciag++;
 
    }
 
    if (globalLength)
 
        cout << globalStart << '\n'
 
             << globalStart + globalLength << endl;
 
}
int main() {
 
    {
 
        char* str = "aaabaaccccaaaa";
 
        longestSubStr( str, *str);
 
    }

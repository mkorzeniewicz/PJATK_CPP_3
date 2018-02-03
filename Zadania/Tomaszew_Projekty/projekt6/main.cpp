#include <cstdlib>
#include <iostream>

using namespace std;
/*
//zadanie 1
template <typename T1>
T1 najwiekszy(T1* tab, int size)
{
     T1 max=tab[0];
     for(int i=1;i<size;i++)
        if(tab[i]>max)
          max=tab[i];
    return max;
}
//zadanie 2
template <typename T1, typename T2>
T1 sumuj (T1 arg1, T2 arg2){
   return (arg1 + arg2);
}
 
char* sumuj (char * arg1, char * arg2){
   return arg1;
}
//zadanie 3
template <typename T1>
T1 wskaznik(T1* arg){
   return *arg;
}
template <typename T1>
T1 referencja(T1 &arg){
   return arg;
}
template <typename T1>
void tablica(T1 *arg, int size){
   for(int i=0; i<size; i++){
           cout<<arg[i]<<endl;
   }
}
template <typename T1>
T1 funkcja(T1 (*arg)()){
   arg();
}

void test(){
    cout<<"test";
}*/
template <typename T1>
T1* add(T1 arg, T1 *tab, int* size){
    *size=*size+1;
    T1 *temp_tab = new T1[*size];
 
    for (int i = 0; i < *size-1; i++)
    {
        temp_tab[i] = tab[i];
    }
    temp_tab[*size-1]=arg;
    delete []tab;
 
 
    return temp_tab;
}
char** add(char* arg, char **tab, int* size){
    *size=*size+1;
    char**temp_tab = new char*[*size];
 
    for (int i = 0; i < *size-1; i++)
    {
        temp_tab[i] = tab[i];
    }
    temp_tab[*size-1]=arg;
    delete []tab;
 
 
    return temp_tab;
}
template <typename T1>
void show(T1 *tab, int size){
     for(int i=0; i<size; i++){
             cout<<tab[i]<<endl;
     }
     cout<<endl;
}
template <typename T1>
void sortx(T1 *tab, int size, bool order){
    
    T1 tmp=0;
    for (int i=0;i<size; i++){
    for (int j=0;j<size-1; j++){
    if(order){
        if (tab[j]>tab[j+1])
        {
            tmp = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = tmp;
        }
    }else{
        if (tab[j]<tab[j+1])
        {
            tmp = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = tmp;
        }  
    }
}

}
}
void sortx(char **tab, int size, bool order){
	char* tmp=0;
    int a=0;
	bool dalej=true;
	for (int i=0;i<size; i++){
		for (int j=0;j<size-1; j++){
			dalej=true;
			a=0;
			if(order){
				while(tab[j][a]!='\0' && tab[j+1][a]!='\0' && dalej){
                    if((int)tab[j][a]>(int)tab[j+1][a]){
						tmp = tab[j];
						tab[j] = tab[j+1];
						tab[j+1] = tmp;

					}else if(tab[j][a]!=tab[j+1][a]){
						dalej=false;
					}else a++;	
				}
			}else{
				while(tab[j][a]!='\0' && tab[j+1][a]!='\0' && dalej){
                    if((int)tab[j][a]<(int)tab[j+1][a]){
						tmp = tab[j];
						tab[j] = tab[j+1];
						tab[j+1] = tmp;

					}else if(tab[j][a]!=tab[j+1][a]){
						dalej=false;
					}else a++;	
				}
			}
		}
	}
}
int main(int argc, char *argv[])
{
   // double tab[]={1,2,3,4};
    //tablica(tab[],4);
    /*void (*f)();
    f=&test;
    funkcja(f);*/
    int sizei=0,sizew=0,sizep=0;
    char** imie = new char*[sizei];
    int* wiek = new int[sizew];
    bool* plec = new bool[sizep];
    ///////////////
    imie=add("Adam", imie, &sizei);
    imie=add("Mateusz", imie, &sizei);
    imie=add("Bartus", imie, &sizei);
    /////////////////
    wiek=add(20, wiek, &sizew);
    wiek=add(22, wiek, &sizew);
    wiek=add(4, wiek, &sizew);
    wiek=add(120, wiek, &sizew);
    ////////////
    plec=add(true, plec, &sizep);
    plec=add(false, plec, &sizep);
    plec=add(true, plec, &sizep);
    plec=add(false, plec, &sizep);
    ////////////
    ///////////
    sortx(wiek, sizew, false);
    sortx(plec, sizep, false);
    sortx(imie, sizei, false);
    ///////////
    show(wiek,sizew);
    show(imie,sizei);
    show(plec,sizep);
    delete []plec;
    delete []wiek;
    delete []imie;

    system("PAUSE");
    return EXIT_SUCCESS;
}

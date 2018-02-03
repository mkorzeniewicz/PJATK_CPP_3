#include <cstdlib>
#include <iostream>

using namespace std;
void fun1(int a){
     cout<<a<<endl;
     a++;
     cout<<a<<endl;
}
void fun2(int* a){
     cout<<*a<<endl;
     (*a)++;
     cout<<*a<<endl;
}
void fun3(int &a){
     cout<<a<<endl;
     a++;
     cout<<a<<endl;
}
void fun(char &text, char *szukaj){
     char *textN=&text;
     int start=0, licz=1, najdluzszy=0,kciagu=0, poczatek=0;
     bool koniec=false, nastepny=false;
          for(int i=0; textN[i]; i++){
                 if(!nastepny){
                   if(licz>najdluzszy){
                     najdluzszy=licz;
                     start=poczatek;
                     kciagu=poczatek;
                     for(int z=0; szukaj[z]; z++){
                      kciagu++;
                     }
                    kciagu=najdluzszy*kciagu-1;
                   }
                   poczatek=i;
                   licz=1;
                 }
                 koniec=false;
                 
                 for(int j=0; szukaj[j] && !koniec; j++){
                   if(textN[i]!=szukaj[j]){
                     koniec=true;
                   }
                   i++;
                 }
                 if(koniec){
                     i--;
                     nastepny=false;
                 }else{
                     nastepny=true;
                     licz++;
                 }
          }
          char *ptws=&textN[start];
          char *ptwk=&textN[kciagu];
          cout<< ptws <<endl<< ptwk ;
}
void show(int ** t4, int elem){
     for(int i=0; i<elem;i++){
       cout<<*(t4+i)<<endl<<endl;
       for(int a=0; a<elem;a++){
          cout<<t4[i][a]<<endl;
       }
       cout<<endl;
     }
} 
void fun(void* start, void* now){
      cout<<now<<endl;
      int* lol = reinterpret_cast<int*>(now);
     if(start!=now)fun(start, reinterpret_cast<void*>(*lol));
} 
int main(int argc, char *argv[])
{
    //zadanie1
    /*int wtr = 10;
    cout<< wtr<<endl;
    fun1(wtr);
    fun2(&wtr);
    fun3(wtr);
    cout<<wtr<<endl;*/
    //zadanie 2
    char *ciag="abababaaaaaabbbbaaaaabbbbbbcccccccaaaaaaaaaaaaaaaaaaaaaaaa";
    char *znajdz="ab";
    cout<<ciag<<endl;
    fun(*ciag, znajdz);
    cout<<endl;
    //zadanie3
    /*
    int tab1[3]={1,2,3};
    int tab2[3]={1,0,4};
    int tab3[3]={2,4,5};
    int* tab4[3]={tab1, tab2, tab3};
    show(tab4, 3); 
    */
    //zadanie 4
    /*
    int a=5;
    int *pa=&a;
    int* (&ppa)=pa;
    int* tab[2]={pa, ppa};
    cout<< *tab[0]<<endl;
    cout<< *tab[1]<<endl; 
    */
    struct WSKAZNIKI{ 
       
    }
    //zadanie 5
    /*
    void *p1, *p2, *p3, *p4;
    p1=&p2;
    p2=&p3;
    p3=&p4;
    p4=&p1;
   
    fun(&p1,p1); */
    system("PAUSE");
    return EXIT_SUCCESS;
}

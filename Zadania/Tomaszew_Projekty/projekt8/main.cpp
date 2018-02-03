#include <cstdlib>
#include <iostream>

using namespace std;
struct Element 
{
    char* imie;
    Element* next;
};

Element* lista = 0; 
Element* GetNextElement(){
    char* imie = new char[1024]; 
    cin >> imie;
    Element* n = new Element; 
    n->imie = imie; 
    n->next = 0; 

    return n; 
}

void insert(Element* element){
    if (lista != 0) {
        Element* tmp = lista; 
        while (tmp->next != 0) 
            tmp = tmp->next; 

        tmp->next = element; 
    }
    else
        lista = element; 
}

void show(){
    Element* tmp = lista;
    while (tmp != 0){
        cout << tmp->imie << endl; 
        tmp = tmp->next; 
    }
    cout << endl;
}
int main(int argc, char *argv[])
{
  /*  union Test{
          int p1;
          long double p2;
    } zmienna;
    zmienna.p1=1;
    cout<<sizeof(zmienna.p1)<<endl;
    cout<<zmienna.p1<<endl;
    cout<<zmienna.p2<<endl;
    zmienna.p2=6;
    cout<<sizeof(zmienna.p2)<<endl;
    cout<<zmienna.p1<<endl;
    cout<<zmienna.p2<<endl;*/
    //////////////////////////////
   /*
   class Test1{
         public:
          char* imie;
          int wiek;
          bool plec;
    } test1;
    struct Test2{
          char* imie;
          int wiek;
          bool plec;
    } test2;

    test2.imie="vcvxcv";
    test1.wiek=12;
    test2.wiek=14;
    test1.bool=true;
    test2.bool=true;
    */
    /*
    class Heremetyzacja{
          public:
                 int a;
          private:
                  int b;
          protected:
                    int c;
          
    } herm;
    
      herm.a=1;
      herm.b=2;
      herm.c=3;
      */


   while (true){
        Element* nowy = GetNextElement();
        insert(nowy);
        show();
    }


    system("PAUSE");
    return EXIT_SUCCESS;
}

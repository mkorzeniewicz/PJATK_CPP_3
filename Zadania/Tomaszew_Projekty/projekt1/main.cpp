#include <cstdlib>
#include <iostream>
#define lang polski
using namespace std;

int globalna=1; //dostêp wszêdzie w programie

int main(int argc, char *argv[])
{
    cout<<"HELLO"<<endl;
    
    #ifdef lang
        cout<<"Witaj"<<endl;
    #else
        cout<<"Witaj"<<endl;
    #endif
    
    //tylko
    //jedna
    //linia
    /* 
       wiele 
       lini
    
    */
    #pragma comment(compiler)
    
    cout<<globalna<<endl<<endl;
    while(globalna<10){
        int zmienna=globalna+2;
        globalna++;
        cout<<zmienna<<endl;
    }
    //cout<<zmienna<<endl;
    int a = 1;
    double b = 8.5;
    float c = 43451;
    long d = 44545;
    short e = 2;
    char f = 'c';
    bool g = true;     

   
    cout << a << b << c << d << e << f << g << endl;  
    
    int x;
    cout<<"PODAJ WARTOSC LICZBOWA ZMIENNEJ X"<<endl;
    cin>>x;
    cout<<"wartoœæ zmiennej ustawina na: "<<x<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

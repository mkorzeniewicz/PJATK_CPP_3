#include <cstdlib>
#include <iostream>
#define zadanie 5
using namespace std;

int main(int argc, char *argv[])
{
    //zad1
    #if(zadanie==1)
        char a='x';
        int b=1;
        double c=2.45;
        char* wsk1=&a;
        int* wsk2=&b;
        double* wsk3=&c;
        cout<<a<<"-"<<wsk1<<endl<<b<<"-"<<wsk2<<endl<<c<<"-"<<wsk3<<endl;
    #elif(zadanie==2)
        int a=10;
        int* ptr1=&a;
        int* ptr2=&a;
        cout<<"a:"<<a<<endl;
        cout<<"ptr1:"<<*ptr1<<endl;
        cout<<"ptr2:"<<*ptr2<<endl;
        *ptr1=20;
        cout<<endl;
        cout<<"a:"<<a<<endl;
        cout<<"ptr1:"<<*ptr1<<endl;
        cout<<"ptr2:"<<*ptr2<<endl;
    #elif(zadanie==3)
        int wrt=10;
        int* ptr1=&wrt;
        int** ptr2=&ptr1;
        cout<<"wrt:"<<wrt<<endl;
        cout<<"ptr1:"<<*ptr1<<endl;
        cout<<"ptr2:"<<*ptr2<<endl;
    #elif(zadanie==4)
        enum owoce{jabko, banan, pomarancza, wisnia, mandarynka=3, czeresnia, kiwi, ananas};
        owoce a=jabko;
        a=banan;
        owoce b=mandarynka;
        cout<<a<<endl;
        cout<<b<<endl;
    #elif(zadanie==5)
        string Tab="fantasmagoria";
        char* ptr1=&Tab[0];
        char* ptr2=&Tab[12];
        //cout<<(ptr1+ptr2)<<endl;
        /*int* w1 = (int*) ptr1;
        int* w2 = (int*) ptr2;
        cout<<(w2-w1)<<endl;*/
        cout<<(ptr2-ptr1)<<endl;
    #endif
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

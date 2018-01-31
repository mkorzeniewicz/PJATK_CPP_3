#include <iostream>
using namespace std;


struct SomeOne{
    char* imie;
    int wiek;
    bool sex;
};

class MyClass{

public:
    char* imie;
    int wiek;
    bool sex;
};


int main() {

    SomeOne someOne;

    MyClass myClass;

    char nameOne[] = {"Ala"};

    char nameOther[] = {"Baba"};

    someOne.imie = nameOne;
    someOne.sex = 1;
    someOne.wiek = 15;

    myClass.imie = nameOther;
    myClass.sex = 0;
    myClass.wiek = 20;

    MyClass* ptr;

    ptr = &myClass;


    cout<< someOne.imie << endl;
    cout << myClass.imie << endl;
}


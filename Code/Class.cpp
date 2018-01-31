#include <iostream>
using namespace std;

class Osoba{

public:
    Osoba();
    string imie;
    int wiek;
    bool sex;
};

//Osoba::Osoba(){
//    imie = {"Alice"};
//    wiek = 17;
//    sex = 1;
//}

Osoba::Osoba() :

        imie("Anna"), wiek(69), sex(true)
{
    cout << imie << endl;
    cout << wiek << endl;
    cout << sex << endl;
}


int main() {


    Osoba osoba;

    cout << osoba.imie << endl;
    cout << osoba.wiek << endl;
    cout << osoba.sex << endl;
}

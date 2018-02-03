#include <cstdlib>
#include <iostream>

using namespace std;
class Osoba{
      char* imie;
      int wiek;
      
      public:
             Osoba(){
                    char input[100];
                    cout << "podaj imie: ";
                    cin >> input;
                    imie = new char[ strlen(input) + 1];
                    memcpy( imie, input, strlen(input) + 1);
                    cout << "podaj wiek: ";
                    cin >> wiek;
                    cout<<"UTWORZONO OBIEKT"<<endl;
             }
             Osoba(char* imie, int wiek){ 
                    this->imie = new char[ strlen(imie) + 1];
                    memcpy( this->imie, imie, strlen(imie) + 1);
                    this->wiek=wiek;
                    cout<<"UTWORZONO OBIEKT"<<endl; 
             }
             Osoba(Osoba &o){
                    this->imie = new char[ strlen(o.imie) + 1];
                    memcpy( this->imie, o.imie, strlen(o.imie) + 1);
                    wiek=o.wiek;
             }
             ~Osoba(){
                    cout<<"ZNISZCZONO OBIEKT"<<endl;
                    delete[] imie;
             }
             void show(){
                  cout<<"imie "<<imie<<endl;
                  cout<<"wiek "<<wiek<<endl;
             }
             friend void show (Osoba &p);
};
void show (Osoba &p)
{ 
  cout<<p.wiek<<endl;
  cout<<p.imie<<endl;
} 

int main(int argc, char *argv[])
{
    Osoba* o = new Osoba();
    o->show();
    Osoba &ref = *o; 
    Osoba* o1 = new Osoba(ref);
     o->show();
      o1->show();
    delete o;
     o1->show();
    system("PAUSE");
    return EXIT_SUCCESS;
}

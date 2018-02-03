#include <cstdlib>
#include <iostream>
#include <new>
using namespace std;
char * inputData[100];
int main(int argc, char *argv[])
{
    /*
    //zadanie 1
    char* tab=new char[10];

    cin>>tab;
    cout<< tab;
    delete []tab;
    */
    
    
    
    /*
    //zadanie 2
    int licz=0;
    cin >> inputData;
    for(int i=0; inputData[i]!='\0'; i++){
            licz++;
    }
    char* newInput= new char[licz];
    delete []newInput;
    */
    
    
    /*
    //zadanie3
    int ile=1,licz=0;
    char** tab= new char*[ile];
    int wprowadzone=0;
    while(true){
       if(wprowadzone == ile){
          char** tab_temp=new char*[2*ile];
          for(int i=0; i<ile; i++){
            tab_temp[i]=tab[i];
          }
          ile*=2;
          tab=tab_temp;
       }
       cin>>inputData;
       licz=0;
       for(int i=0; inputData[i]!='\0'; i++){
            licz++;
       }
       cout<<endl;
       tab[wprowadzone]=new char[licz+1];
       for(int i=0; inputData[i]!='\0'; i++){
            tab[wprowadzone][i]=inputData[i];
       }
       tab[wprowadzone][licz]='\0';
       
       wprowadzone++;
       for(int i=0; i<wprowadzone; i++){
               cout<<tab[i]<<endl;
       }
       cout<<wprowadzone<<endl;
       cout<<endl;
    }
    delete []tab;
    */
    /*
    //zadanie 5 i 6
    struct Osoba{
           char* imie;
           int wiek;
           bool plec;
           void show(){
                cout<<imie<<endl;
                cout<<wiek<<endl;
                cout<<plec<<endl;
           }
    }osoba;
    osoba.imie="Mateusz";
    osoba.wiek=21;
    osoba.plec=true;
    osoba.show();
    //cout<< osoba.wiek;
    //cout<< osoba.imie;
    //cout<< osoba.plec;
   // cout<< osoba;
    */
    const int mega = 1024*1024, step = 100*mega;
    bool lol=true;
    for(int size = step; lol ;size += step){
            try{
            char* buf = new char[size];
            delete[] buf;
            }catch(bad_alloc){
               cout<< "NIE UDALO SIE: "
                   << size/mega << " MB"<<endl;
                   lol=false;
            }
            if(lol)
            cout<< "       udalo sie:"
                << size/mega << " MB" <<endl;
    }


    system("PAUSE");
    return EXIT_SUCCESS;
}

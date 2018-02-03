#include <cstdlib>
#include <iostream>

using namespace std;
class Cplx{
      double rz;
      double u;
      public:
      Cplx(double rz, double u){
           this->rz=rz;
           this->u=u;
      }
      void add(Cplx l){
           rz+=l.rz;
           u+=l.u;
      }
      void sub(Cplx* l){
           rz-=l->rz;
           u-=l->u;
      }
      void mul(Cplx& l){
           rz=(rz*l.rz)-(u-l.u);
           u=(u*l.rz)+(rz+l.u);
      }
      void inc(){
           rz+=1;
      }
      void show(){
           if(rz!=0);
                cout<<rz;
           if(u>0)
                cout<<"+"<<u<<"i"<<endl;
           else if(u<0)
                cout<<u<<"i"<<endl;
      }
    //ZAD 2
    void operator ++(){
        rz++;
    }
    //ZAD 3
    Cplx operator+ (Cplx& l){
        return Cplx((rz+l.rz),(u+l.u));   
    }
    friend Cplx operator-(Cplx& l, Cplx& l1);
    friend ostream& operator<<(ostream& str, Cplx& l);
};
Cplx operator-(Cplx& l, Cplx& l1){
     return Cplx((l.rz-l1.rz),(l.u-l1.u));
}
ostream& operator<<(ostream& str, Cplx& l){
        if(l.rz!=0);
            str<<l.rz;
        if(l.u>0)
            str<<"+"<<l.u<<"i"<<endl;
        else if(l.u<0)
            str<<l.u<<"i"<<endl;
    return str;
}

class Osoba{
      char* imie;
      char* nazwisko;
      int wiek;
      Osoba* dzieci;
      public:
             Osoba(){
                    char input[100];
                    cout << "podaj imie: ";
                    cin >> input;
                    imie = new char[ strlen(input) + 1];
                    memcpy( imie, input, strlen(input) + 1);
                     cout << "podaj nazwisko: ";
                    cin >> input;
                    nazwisko = new char[ strlen(input) + 1];
                    memcpy( nazwisko, input, strlen(input) + 1);
                    cout << "podaj wiek: ";
                    cin >> wiek;
             }
             Osoba(char* imie, char* nazwisko, int wiek, Osoba* dzieci){ 
                    this->imie = new char[ strlen(imie) + 1];
                    memcpy( this->imie, imie, strlen(imie) + 1);
                    this->nazwisko = new char[ strlen(nazwisko) + 1];
                    memcpy( this->nazwisko, nazwisko, strlen(nazwisko) + 1);
                    this->wiek=wiek;
             }
             Osoba(Osoba &o){
                    this->imie = new char[ strlen(o.imie) + 1];
                    memcpy( this->imie, o.imie, strlen(o.imie) + 1);
                    this->nazwisko = new char[ strlen(o.nazwisko) + 1];
                    memcpy( this->nazwisko, o.nazwisko, strlen(o.nazwisko) + 1);
                    addDzieci(o.dzieci);
                    wiek=o.wiek;
             }
             Osoba(Osoba *o){
                    this->imie = new char[ strlen(o->imie) + 1];
                    memcpy( this->imie, o->imie, strlen(o->imie) + 1);
                    this->nazwisko = new char[ strlen(o->nazwisko) + 1];
                    memcpy( this->nazwisko, o->nazwisko, strlen(o->nazwisko) + 1);
                    addDzieci(o->dzieci);
                    wiek=o->wiek;
             }
            void addDzieci(Osoba* dz){
                 int counter=0;
                 while(dz!=null){
                    counter++;
                 }
                 dzieci=new (*Osoba)[counter];
                 for(int i=0;i<counter;i++){
                     dzieci[i]=dz[i];
                 }
             }
             ~Osoba(){
                    delete[] imie;
                    delete[] nazwisko;
                    int a =0;
                    while(dzieci != null){
                        delete dzieci[a];
                        a++;
                    }
             }
             void opertator++(){
                  wiek++;
             }
             void operator-(char pattern){
                char* copy=new char[strlen(imie)+1];;
                for(int i=0;i<strlen(imie);i++)
                    if(imie[i]!=pattern){
                        copy[i]=imie[i];
                    }
                    imie=new char(strlen(copy));
                    strcpy(imie,copy);
            }
            void operator +(char pattern){
                int counter=0;
                char*copy=imie;
                while(imie!=NULL)
                    counter++;
                imie=new char[strlen(imie)+2];
                strcpy(imie,copy);
                imie[counter-1]=pattern;
            }
             bool operator==(Osoba& o){
                 if(o.wiek == wiek && o.nazwisko == nazwisko && o.imie==imie){
                     int c=0;
                     while(dzieci != null){
                         c++;
                     }
                     int c1=0;
                     while(o.dzieci != null){
                         c1++;
                     }
                     if(c==c1){
                         int a=0;
                         while(dzieci != null){
                            if(dzieci[a] == o.dzieci[a])
                            a++;
                            else return false;
                         }       
                         return true;
                     }else return false;
                 }else return false; 
             }
             bool operator==(Osoba* o){
                 if(wiek == o->wiek && nazwisko == o->nazwisko && imie==o->imie){
                     int c=0;
                     while(dzieci != null){
                         c++;
                     }
                     int c1=0;
                     while(o->dzieci != null){
                         c1++;
                     }
                     if(c==c1){
                         int a=0;
                         while(dzieci != null){
                            if(dzieci[a] == o->dzieci[a])
                            a++;
                            else return false;
                         }       
                         return true;
                     }else return false;
                 }else return false; 
             }
};
int main(int argc, char *argv[])
{
    Cplx l=Cplx(10,3);
    cout<<l;
    system("PAUSE");
    return EXIT_SUCCESS;
}

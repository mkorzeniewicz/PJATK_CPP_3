#include <cstdlib>
#include <iostream>

using namespace std;
class Osoba{
	char *imie;
	int wiek;
	public:
	static int ID;
	class Konto{
		private:
			int numer;
			double stan;
		public:
			Konto(){
			}
			Konto(int nr){
				numer=nr;
			}
			void wplata(double ile){
				stan+=ile;
			}
			void wyplata(double ile){
				stan-=ile;
			}
			double stanK(){
                return stan;
            }
            int nrKonta(){
                return numer;
            }
	};
	Konto konto;
	Osoba(char* imie, int wiek){
		this->imie=strcpy(new char[strlen(imie)+1], imie);
		this->wiek=wiek;
		ID++;
		konto=Konto(ID);
	}
	~Osoba(){
		delete[] imie;
	}
};
int Osoba::ID=0;

class Lodziarnia{
    private:
        struct Tr{
                double kwota;
                int nr;
                 
                Tr(){
                    kwota=0;
                    nr=0;
                }
                Tr(double k, int n){
                    kwota=k;
                    nr=n;
                }
        };

        Tr* (*tab);
	public:
        static int iloscTr;
		char* (*nLodow);
		double* cLodow;
		Lodziarnia(){
            nLodow=new char*[3];
            cLodow=new double[3];
            nLodow[0]="waniliowe";
            cLodow[0]=0.5;
            nLodow[1]="czekoladowe";
            cLodow[1]=0.6;
            nLodow[2]="wisniowe";
            cLodow[2]=0.9;
		}
		~Lodziarnia(){
            delete[] nLodow;
            delete[] cLodow;
            for(int i=0; i< iloscTr;i++){
                delete tab[i];
            }
            delete[] tab;
        }
        void adTr(Tr* t){
            Tr* (*tab1)=new Tr*[iloscTr+1];
            for(int i=0;i<iloscTr+1;i++)
                tab1[i]=tab[i];
            tab1[iloscTr]=t;
            delete[] tab;
            tab=new Tr*[iloscTr+1];
            for(int i=0;i<iloscTr+1;i++)
                tab[i]=tab1[i];
            delete[] tab1;
            iloscTr++;
        }
        void sp(Osoba* o, double kwota){
            o->konto.wyplata(kwota);
            adTr(new Tr(kwota, o->konto.nrKonta()));
        }
        int operator [](int arg){
            return tab[arg]->nr;
        }
        double operator ()(int arg){
            return tab[arg]->kwota;
        }
};
int Lodziarnia::iloscTr=0;
int main(int argc, char *argv[])
{
	Osoba* o = new Osoba("m",12);
	o->konto.wplata(10);
    Lodziarnia l = Lodziarnia();
    double* (Lodziarnia::*cL);
    cL = &Lodziarnia::cLodow;   
    char** (Lodziarnia::*nL);
    nL = &Lodziarnia::nLodow;  
    int koniec=0; 
    int ile=0;
    cout<<"================WITAJ W LODZARNI================"<<endl;
    while(!koniec){
        cout<<"ile galek sobie zyczysz?: ";
        cin>>ile;
        cout<<endl<<"Dostepne smaki(wybierz numer): "<<endl;
        ///////////////////////////
        int nr=1;
        ///////////////////////////
        while(nr<=3){
            cout<<nr<<". "<<(l.*nL)[nr-1]<<" za "<<(l.*cL)[nr-1]<<endl;
            nr++;
        }
        ///////////////////////////
        int g=0;
        double kwota=0;
        ///////////////////////////
        for(int i=0; i<ile;i++){
            cout<<"smak galki "<<(i+1)<<"(numer): ";
            cin>>g;
            kwota+=(l.*cL)[g-1];
        }
       ///////////////////////////
        if(o->konto.stanK()>=kwota){
            l.sp(o,kwota);
            cout<<"dokonano zakupu konto zostalo obciazone na kwote: "<<kwota<<endl;
        }else{
            cout<<"brak srodkow na koncie, popros mame o doladowanie"<<endl;
            cout<<"z okazji dnia dziecka mam sie lituje konto doladowane na kwote: 10"<<endl;
            o->konto.wplata(10);
        }
        ///////////////////////////
        
        cout<<"stan konta: " <<o->konto.stanK()<<endl;
        cout<<endl<<"dokonane tranzakcje: "<<Lodziarnia::iloscTr<<endl;
        ///////////////////////////
        for(int i=0;i<Lodziarnia::iloscTr; i++){
            cout<<"--------------tranzakacja nr "<<(i+1)<<"--------------"<<endl;
            cout<<"konto nr: "<<l[i]<<endl;
            cout<<"kwota: "<<l(i)<<endl;
        }
        ///////////////////////////
        cout<<endl<<"Koniec? tak(1)/nie(0)";
        cin>>koniec;
    }
	delete o;
    return 0;
}

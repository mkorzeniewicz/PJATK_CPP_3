#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;
class OsobaCL
{
protected:
    string m_imie;
    string m_nazwisko;
    OsobaCL * m_nastepnaOsoba;
public:
    void Inicjuj();
    void Sprzatnij();
    void Wypelnij();
    OsobaCL * GetNastepnaOsoba();
    void ShowDaneOsoby( int fImieWidth = 12, int fNazwiskoWidth = 20 );
    void DodajOsobeNaKoniec();
};

void OsobaCL::Inicjuj()
{
    m_nastepnaOsoba = NULL;
}

void OsobaCL::Sprzatnij()
{
    if( m_nastepnaOsoba != NULL )
    {
        m_nastepnaOsoba->Sprzatnij();
        delete m_nastepnaOsoba;
        m_nastepnaOsoba = NULL;
    }
}

OsobaCL * OsobaCL::GetNastepnaOsoba()
{
    return( m_nastepnaOsoba );
}

void OsobaCL::Wypelnij()
{
    cout << "Podaj imie: ";
    cin >> m_imie;
    cout << "Podaj nazwisko: ";
    cin >> m_nazwisko;
}

void OsobaCL::ShowDaneOsoby( int fImieWidth, int fNazwiskoWidth )
{
    cout << setw( fImieWidth ) << m_imie << " " << setw( fNazwiskoWidth ) << m_nazwisko << endl;
}

void OsobaCL::DodajOsobeNaKoniec()
{
    //Szukanie ostatniej osoby
    OsobaCL * tOstatniaOsoba = this; //Zapisanie wskaŸnika obecnej osoby do zmiennej
    while( tOstatniaOsoba->m_nastepnaOsoba != NULL ) tOstatniaOsoba = tOstatniaOsoba->m_nastepnaOsoba;
    
    //Utworzenie nowej osoby i zapisanie do ostatniej osoby
    OsobaCL * tNowaOsoba = new OsobaCL;
    tNowaOsoba->Inicjuj();
    tNowaOsoba->Wypelnij();
    tOstatniaOsoba->m_nastepnaOsoba = tNowaOsoba;
}

int main()
{
    /*Utworzenie pierwszej osoby*/
    OsobaCL * tPierwszaOsoba = new OsobaCL;
    tPierwszaOsoba->Inicjuj();
    
    /*Wype³nienie pierwszej osoby*/
    tPierwszaOsoba->Wypelnij();
    
    /*Wczytywanie kolejnych osób*/
    char tZnak;
    do
    {
        cout << "Czy chcesz dodac nowa osobe? (T/N) ";
        do
        {
            tZnak = getch();
        } while(( tZnak != 'n' ) &&( tZnak != 'N' ) &&( tZnak != 't' ) &&( tZnak != 'T' ) );
        
        cout << tZnak << endl;
        if(( tZnak == 't' ) ||( tZnak == 'T' ) ) tPierwszaOsoba->DodajOsobeNaKoniec(); //Dodawanie nowej osoby
        
    } while(( tZnak != 'n' ) &&( tZnak != 'N' ) );
    
    /*Wyœwietlanie wszystkich osób*/
    OsobaCL * tWyswietlOsoby = tPierwszaOsoba;
    while( tWyswietlOsoby != NULL )
    {
        tWyswietlOsoby->ShowDaneOsoby();
        tWyswietlOsoby = tWyswietlOsoby->GetNastepnaOsoba();
    }
    
    /*Zwalnianie pamiêci*/
    tPierwszaOsoba->Sprzatnij();
    delete tPierwszaOsoba;
    
    getch();
    return( 0 );
}

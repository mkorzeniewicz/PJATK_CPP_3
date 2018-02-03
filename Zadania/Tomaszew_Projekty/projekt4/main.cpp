#include <cstdlib>
#include <iostream>

using namespace std;

int strlen1(char* a){ 
    int n=0;
    char* z=a;
    for(;a[n]!='\0';n++)z++;
    return z-a+1;
} 

void fun (char &text, char* text2)
{
     char* kurwa = &text;
 	 char* poczatek, *koniec;
 	 int dlugosc = strlen1(kurwa)-1;
	 int dlugosc2 = strlen1(text2)-1;
	 int dlugoscMIN, dlugoscMAX, start, licznik=0, bigest=0;
	 char* smallT;
	 char* bigT;
	 bool stop=false;
	 if (dlugosc<dlugosc2){
	 dlugoscMIN=dlugosc;
	 dlugoscMAX=dlugosc2;
     smallT =kurwa;
	 bigT=text2;
	 }else{
	 dlugoscMIN=dlugosc2;
	 dlugoscMAX=dlugosc;
	 smallT=text2;
	 bigT=kurwa;
     }

	for (int i=0; i<dlugoscMIN; i++)
	{
        
	 	for (int j=0; j<dlugoscMAX; j++)
	 	{
            licznik=0;
		 	if (smallT[i] == bigT[j])
		 	{	
                stop=false;
                for(int a=i, z=j; a<dlugoscMIN && !stop; a++, z++){
                    if(smallT[a]==bigT[z]){
                      licznik++;
                    }else stop=true;
                          
                }
                if(licznik>bigest){
                   bigest=licznik;
                   poczatek=&smallT[i];
                   koniec=smallT+(i+(licznik-1));
                }
 			}
            	   			
	 	 }
	}
	cout<<"najdluzszy podciag ma dlugosc: "<<bigest<<endl;
	cout<<"podciag zaczyna sie w: "<<&poczatek<<" i konczy w: "<<&koniec<<endl;
	cout<<"podciag to: ";
	while(poczatek!=koniec+1){
       cout<<*poczatek;
       poczatek++;
    }
    cout<<endl;
}


int main(int argc, char *argv[])
{    	 
    char* text = "abbxbxxxx";
    char* text2= "bbbaxxfasxx";

	fun(*text, text2);
    
	
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*
void fun(void* start, void* now){
     //cout<<start<<endl;
      cout<<now<<endl;
      //if(start!=now)cout<<"dupa";
      int* lol = reinterpret_cast<int*>(now);
     // cout<<<<endl;

     if(start!=now)fun(start, reinterpret_cast<void*>(*lol));
}

int main(int argc, char *argv[])
{   	 
    void *p1, *p2, *p3, *p4;
    p1=&p2;
    p2=&p3;
    p3=&p4;
    p4=&p1;
   
    fun(&p1,p1);
	
    
    system("PAUSE");
    return EXIT_SUCCESS;
}*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //zadanie 1
    /*
    int i=20;
    cout<<"i:"<<i<<endl;
    int* ptr1=&i;
    int* ptr2=&i;
    *ptr1=10;
    cout<<"i:"<<i<<endl;
    cout<<"ptr1:"<<ptr1<<endl;
    cout<<"ptr2:"<<ptr2<<endl;
    */
    //zadanie 2
    /*int WTR=10;
    int* ptr1=&WTR;
    int** ptr2=&ptr1;
    cout<<"WTR:"<<WTR<<endl;
    cout<<"ptr1:"<<ptr1<<","<<*ptr1<<endl;
    cout<<"ptr2:"<<ptr2<<","<<*ptr2<<","<<**ptr2<<endl;
    */
    //zadanie 3
    /*enum{jabko, wisnia, banan=6, pomarancz};
    cout<<jabko<<endl<<wisnia<<endl<<banan<<endl<<pomarancz<<endl;*/
    //zadanie 4
    
   /* string Tab="fantasmagoria";
    char* ptr1=&Tab[0];
    char* ptr2=&Tab[12];
    cout<<*Tab.begin()<<endl;
    cout<<&Tab.end()<<endl;
    cout<<&ptr1<<endl;*/
   // cout<<(*ptr1-*ptr2)<<endl;
  string str ("Test string");
  char* ptr1=&str[10];
  //*ptr1='x';
  for (size_t i=0; i < str.length(); i++)
  {
      
    cout << str[10]<<endl;
  }

    system("PAUSE");
    return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>

using namespace std;
int mul(int l1, int l2){
    return l1*l2;
}
int dzielenie(int l1, int l2){
    if(l2==0)
         return 0;
    else 
         return l1/l2;
}
int sum(int l1, int l2){
    return l1+l2;
}
int sub(int l1, int l2){
    return l1-l2;
}
void funCall(int tab1[][2], int ile1, int (*tab2[])(int,int), int ile2){
     for(int i =0; i<ile1; i++){
            for(int j=0; j<ile2; j++){
                  cout<< tab2[j](tab1[i][0],tab1[i][1])<<endl;
            }
            cout<<endl;
     }
}
int main(int argc, char *argv[])
{
    //cout<<dzielenie(4,2);
    int (*funPtr1)(int l1, int l2) = &mul;   
    int (*funPtr2)(int l1, int l2) = &sum;
    cout<< (*funPtr1)(4,2)<<endl;
    cout<< (*funPtr2)(4,2)<<endl;
    cout<<endl;
    int ile2=4;
    int (*tabFunPtr[ile2])(int l1, int l2);
    tabFunPtr[0]=&mul;
    tabFunPtr[1]=&dzielenie;
    tabFunPtr[2]=&sum;
    tabFunPtr[3]=&sub;
    int ile1=2;
    int tab[ile1][2];
    tab[0][0]=4;
    tab[0][1]=2;
    tab[1][0]=30;
    tab[1][1]=5;
    funCall(tab,ile1, tabFunPtr, ile2); 
    system("PAUSE");
    return EXIT_SUCCESS;
}

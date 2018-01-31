#include <iostream>
using namespace std;


int mul(int a, int b){
    cout << a << " * " << b << " = " << a*b << endl;
    return a*b;
}

int dif(int a, int b){
    cout << a << " / " << b << " = " << a/b << endl;
    return a/b;
}

int sum(int a, int b){
    cout << a << " + " << b << " = " << a+b << endl;
    return a+b;
}

int sub(int a, int b){
    cout << a << " - " << b << " = " << a-b << endl;
    return a-b;
}

void funCall(int *arr, int sizeArr, int ( **arrPt)(int, int), int sizeArrPt){

    for(int i = 0; i < sizeArr*2; i++){
        for(int j = 0; j < sizeArr*2; j++){
            for(int k = 0; k < sizeArrPt; k++){
                arrPt[k](arr[i],arr[j]);
            }
            cout << endl;
        }
    }
}

int main(){


    int a = 6;
    int b = 3;


    int (* funMul)(int, int) = &mul;
    int (* funSum) (int, int) = &sum;
    int (* funDif)(int, int) = &dif;
    int (* funSub)(int, int) = &sub;

    int (* tabFunPtr[4]) (int, int) = { funMul, funDif, funSum, funSub };

    int pairNums[][2] = { {1, 5},
                          {3, 4} };

    funCall( (int *) pairNums, 2, tabFunPtr, 4);

}

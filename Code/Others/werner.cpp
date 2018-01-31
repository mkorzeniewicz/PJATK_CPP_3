//werner

//3







//
//#include <iostream>
//using namespace std;
//
//int myTextLen(char* text){
//    int length;
//    for(int i = 0; *text++ != '\0'; i++){
//        length = i;
//    }
//    cout << length << endl;
//}
//
//int fib(int x){
//
//    if(x < 2){
//        return x;
//    }else{
//        return fib(x - 1) + fib(x - 2);
//    }
//}
//
//int main(){
//
//    int fibs[20];
//
//    fibs[0] = 1;
//    fibs[1] = 1;
//
//    cout << "biggest " << fib(11) << endl;
//
//    for(int i = 1; i < 20; i++){
//        cout << fib(i) << " ";
//    }
//
//    cout << endl;
//    for(int i = 2; i < 20; i++){
//        fibs[i] = fibs[i-1] + fibs[i-2];
//        cout << fibs[i] << " ";
//    }
//
//
//    string text = "kupa";
//
//    char arr[] = "alkak";
//
//    int textLength = myTextLen(arr);
//
//
//}



// Dynamiczne alokowanie pamięci w cpp przy użyciu wskaźników.

//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int howMuch;
//
//    int *array;
//    cin >> howMuch;
//
//    array = new int[howMuch]; // jak uzywamy new to potem wypada zniszczyc
//
//    for(int i = 0; i < howMuch ; i++){
//        cout << array << endl;
//        array++;
//    }
//
//
//    delete [] array; // tu niszczymy
//
//}


//#include <iostream>
//using namespace std;
//
//double average(double *array, int howMuch){
//    double sum = 0;
//
//    for(int i = 0; i < howMuch; i++){
//        sum += *array;
//        array++;
//    }
//
//    return sum / howMuch;
//}
//
//int main(){
//
//    double arr[3];
//
//    arr[0] = 1.5;
//    arr[1] = 2.3;
//    arr[2] = 0.75;
//
//
//    cout << average(arr, 3) << endl;
//
//}


//#include <iostream>
//using namespace std;
//
//double average(double &a, double &b, double &c){
//    return (a + b + c) / 3;
//}
//
//int main(){
//
//    double a, b, c;
//
//    a = 1.5;
//    b = 2.3;
//    c = 0.75;
//
//    double * pToA = &a;
//
//
//    cout << average(*pToA, b, c) << endl;
//
//}


//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//
//double getClosestToAvg(double *array, int size) {
//
//    double avg = 0;
//
//    for(int i = 0; i < size; i++){
//        avg += array[i];
//        cout << array[i] << " ";
//
//    }
//    cout << endl;
//    avg = abs(avg / size);
//
//    cout << "avg: " << avg << endl;
//
//    double closest = avg;
//    int tmp = 0;
//    double diff;
//
//    for(int i = 0; i < size; i++) {
//
//        diff = abs(array[i] - avg);
//        cout << "diff1: " << diff << endl;
//        if(closest >= diff){
//            cout << "diff2: " << diff << endl;
//
//            closest = diff;
//            tmp = i;
//        }
//    }
//    cout << endl;
//    return array[tmp];
//}
//
//
//int main(){
//
//    double num1, num2, num3, num4, num5;
//    cout << "Give me five numbers " << endl;
//
//    cin >> num1 >> num2 >> num3 >> num4 >> num5;
//
//    double arr[5] = {num1, num2, num3, num4, num5};
//
////    double ar[5] = {1.5, 3.14, 7.5, 1.25, 3.42};
//
//
//    cout << endl;
//    cout << getClosestToAvg(arr, 5);

//}


//
//#include <iostream>
//using namespace std;
//
//bool isPalindrome(char* word){
//    cout << endl;
//
//    int countW = 0;
//    for(int i = 0; word[i] != '\0'; i++){
//        countW++;
//    }
//
//    char wordFromBack[countW];
//    int j = 0;
//    for(int i = countW - 1; i >= 0; i--){
//        wordFromBack[j] = word[i];
//        j++;
//    }
//
//    cout << endl;
//
//
//    for(int i = 0; word[i] != '\0'; i++){
//        if(wordFromBack[i] != word[i]){
//            cout << wordFromBack[i] << endl;
//            cout << word[i] << endl;
//            return false;
//        }
//    }
//
//    return true;
//}
//int main(){
//
//    char arr[] = "lato";
//
//    bool isP = isPalindrome(arr);
//
//    cout << "Is " << arr << " a palindrome? " << isP << endl;
//
//}



//void splitOnWords(char * text){
//
//    int countWords = 1;
//    for(int i = 0; text[i] != '\0'; i++){
//        if(text[i] == ' '){
//            countWords++;
//        }
//    }
//
//
//    for(int i = 0; text[i] != '\0'; i++){
//        if(text[i] == ' '){
//
//        }
//    }
//}
//
//
//#include <iostream>
//using namespace std;
//
//int main(){
//
//    char alaMa[] = "Ala ma kota, a kot ma ale";
//
//    splitOnWords(alaMa);
//
//}




//
//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int first = 5;
//    int sec = 8;
//
//    int *ptr = &first;
//    int &ref = sec;
//
//    ref = *ptr;
//
//    cout<< "first: " << first << endl;
//    cout << "sec: " <<  sec << endl;
//    cout << "ptr: " << *ptr << endl;
//    cout << "ref: " << ref << endl;
//}



//#include <iostream>
//using namespace std;
//
//int main(){
//
//    static int arr[5] = {1, 2, 3, 4, 5};
//
//    int * ptrFirst = arr;
//    int * ptrLast = arr + 4;
//
//
//    cout << *ptrFirst << endl;
//    cout << *ptrLast << endl;
//
//    int sum = 0;
//
//    for(; *ptrFirst <= *ptrLast; ptrFirst++){
//        sum += *ptrFirst;
//    }
//
//    cout << sum << endl;
//
//}

//#include <iostream>
//using namespace std;
//
//int main(){
//
//
//    char ala[] = "Ala ";
//    char ma[] = "ma ";
//    char kota[] = "kota ";
//
//    char toma[] = "toma ";
//
//    char *pointers[4] ={ala, ma, kota};
//
//    for(int i = 4; i > 0; i--){
//
//        if(i == 1){
//            pointers[i] = toma;
//            break;
//        }
//        pointers[i] = pointers[i - 1];
//    }
//
//
//    for(int i = 0; i < 4; i++){
//        cout << pointers[i] ;
//    }
//}



//#include <iostream>
//using namespace std;
//
//
//int mul(int a, int b){
//    cout << a << " * " << b << " = " << a*b << endl;
//    return a*b;
//}
//
//int dif(int a, int b){
//    cout << a << " / " << b << " = " << a/b << endl;
//    return a/b;
//}
//
//int sum(int a, int b){
//    cout << a << " + " << b << " = " << a+b << endl;
//    return a+b;
//}
//
//int sub(int a, int b){
//    cout << a << " - " << b << " = " << a-b << endl;
//    return a-b;
//}
//
//void funCall(int *arr, int sizeArr, int ( **arrPt)(int, int), int sizeArrPt){
//
//    for(int i = 0; i < sizeArr*2; i++){
//        for(int j = 0; j < sizeArr*2; j++){
//            for(int k = 0; k < sizeArrPt; k++){
//                arrPt[k](arr[i],arr[j]);
//            }
//            cout << endl;
//        }
//    }
//}
//
//int main(){
//
//
//    int a = 6;
//    int b = 3;
//
//
//    int (* funMul)(int, int) = &mul;
//    int (* funSum) (int, int) = &sum;
//    int (* funDif)(int, int) = &dif;
//    int (* funSub)(int, int) = &sub;
//
//    int (* tabFunPtr[4]) (int, int) = { funMul, funDif, funSum, funSub };
//
//    int pairNums[][2] = { {1, 5},
//                          {3, 4} };
//
//    funCall( (int *) pairNums, 2, tabFunPtr, 4);
//
//}


#include <iostream>
using namespace std;

template <typename Arr>
int getBiggest(Arr * array, int size){

    int tmp = array[0];
    int biggest = tmp;

    for(int i = 0; i < size; i++){
        tmp = array[i];

        if(biggest < tmp){
            biggest = tmp;
        }
    }
    cout << endl;
    return biggest;
}


int main(){

    int array[] = {-4, -4, -4, -4, -4};

    cout << getBiggest(array, 5) << endl;

}

// cd cz4 zad V


//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int array[] = {-4, -4, -4, -4, -4};
//
//    int a = 4;
//    int b = 5;
//
//    int mul = [] (int c, int d)-> int { return (c*d);}(a, b) ;
//    int dif = [] (int c, int d)-> int { return c/d;}(a, b) ;
//    int sum = [] (int c, int d)-> int { return c+d;}(a, b) ;
//    int sub = [] (int c, int d)-> int { return  c-d;}(a, b);
//
//    cout<< "a*b = " << mul << endl;
//    cout<< "a/b = " << dif << endl;
//    cout<< "a+b = " << sum << endl;
//    cout<< "a-b = " << sub << endl;
//}



//#include <iostream>
//using namespace std;
//
//int main() {
//
//
//    long long *howBig;
//    for(long long i;i < 9999; i++){
//        long long *array = new long long[i];
//        howBig = &i;
//        delete array;
//    }
//
//    cout << "Array of size " << *howBig << "was made" << endl;
//
//// nie dziala za bardzo
//
//}


//union unia{
//    int uInt;
//    long double uLongDouble;
//
//};
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//
//    unia myUnia;
//    myUnia.uInt = 5;
//
//    cout << myUnia.uInt << endl;
//    cout << myUnia.uInt << " " << myUnia.uLongDouble << endl;
//
//    myUnia.uLongDouble = 4.5;
//
//    cout << endl;
//    cout << myUnia.uLongDouble << endl;
//    cout << myUnia.uInt << " " << myUnia.uLongDouble << endl;
//
//}


//#include <iostream>
//using namespace std;
//
//struct Element{
//
//    char* imie;
//    Element next;
//};
//
//Element* lista = 0;
//
//Element* getNewElement(){
//
//    Element *n;
//
//    cin >> n->imie;
//
//    return n;
//
//}
//
//void insert(Element* element){
//
//    while (lista){
//        Element* tmp = lista;
//
//    }
//
//}
//
//int main() {
//
//
//
//}


//#include <iostream>
//using namespace std;
//
//
//struct SomeOne{
//    char* imie;
//    int wiek;
//    bool sex;
//};
//
//class MyClass{
//
//public:
//    char* imie;
//    int wiek;
//    bool sex;
//};
//
//
//int main() {
//
//    SomeOne someOne;
//
//    MyClass myClass;
//
//    char nameOne[] = {"Ala"};
//
//    char nameOther[] = {"Baba"};
//
//    someOne.imie = nameOne;
//    someOne.sex = 1;
//    someOne.wiek = 15;
//
//    myClass.imie = nameOther;
//    myClass.sex = 0;
//    myClass.wiek = 20;
//
//    MyClass* ptr;
//
//    ptr = &myClass;
//
//
//    cout<< someOne.imie << endl;
//    cout << myClass.imie << endl;
//}


//#include <iostream>
//using namespace std;
//
//class Osoba{
//
//public:
//    Osoba();
//    string imie;
//    int wiek;
//    bool sex;
//};
//
////Osoba::Osoba(){
////    imie = {"Alice"};
////    wiek = 17;
////    sex = 1;
////}
//
//Osoba::Osoba() :
//
//        imie("Anna"), wiek(69), sex(true)
//{
//    cout << imie << endl;
//    cout << wiek << endl;
//    cout << sex << endl;
//}
//
//
//int main() {
//
//
//    Osoba osoba;
//
//    cout << osoba.imie << endl;
//    cout << osoba.wiek << endl;
//    cout << osoba.sex << endl;
//}




//
//#include <iostream>
//using namespace std;
//
//class Klasa{
//public:static void f(){}
//};
//
//void bar(char *c){
//    *c = 'c';
//}
//
//struct {
//    int bar;
//}*foo;
//
//
//void boo(double d, long l, char c = 'c');
//
//int main() {
//
//
//    char* k = (char*) malloc(sizeof(char));
//    delete [] k;
//
//
//    Klasa::f();
////    Klasa *klas;
////    klas->f();
//
//
//
//    return 0;

//}


// 4






//
//#include <iostream>
//using namespace std;
//
//int myTextLen(char* text){
//    int length;
//    for(int i = 0; *text++ != '\0'; i++){
//        length = i;
//    }
//    cout << length << endl;
//}
//
//int fib(int x){
//
//    if(x < 2){
//        return x;
//    }else{
//        return fib(x - 1) + fib(x - 2);
//    }
//}
//
//int main(){
//
//    int fibs[20];
//
//    fibs[0] = 1;
//    fibs[1] = 1;
//
//    cout << "biggest " << fib(11) << endl;
//
//    for(int i = 1; i < 20; i++){
//        cout << fib(i) << " ";
//    }
//
//    cout << endl;
//    for(int i = 2; i < 20; i++){
//        fibs[i] = fibs[i-1] + fibs[i-2];
//        cout << fibs[i] << " ";
//    }
//
//
//    string text = "kupa";
//
//    char arr[] = "alkak";
//
//    int textLength = myTextLen(arr);
//
//
//}



// Dynamiczne alokowanie pamięci w cpp przy użyciu wskaźników.

//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int howMuch;
//
//    int *array;
//    cin >> howMuch;
//
//    array = new int[howMuch]; // jak uzywamy new to potem wypada zniszczyc
//
//    for(int i = 0; i < howMuch ; i++){
//        cout << array << endl;
//        array++;
//    }
//
//
//    delete [] array; // tu niszczymy
//
//}


//#include <iostream>
//using namespace std;
//
//double average(double *array, int howMuch){
//    double sum = 0;
//
//    for(int i = 0; i < howMuch; i++){
//        sum += *array;
//        array++;
//    }
//
//    return sum / howMuch;
//}
//
//int main(){
//
//    double arr[3];
//
//    arr[0] = 1.5;
//    arr[1] = 2.3;
//    arr[2] = 0.75;
//
//
//    cout << average(arr, 3) << endl;
//
//}


//#include <iostream>
//using namespace std;
//
//double average(double &a, double &b, double &c){
//    return (a + b + c) / 3;
//}
//
//int main(){
//
//    double a, b, c;
//
//    a = 1.5;
//    b = 2.3;
//    c = 0.75;
//
//    double * pToA = &a;
//
//
//    cout << average(*pToA, b, c) << endl;
//
//}


//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//
//double getClosestToAvg(double *array, int size) {
//
//    double avg = 0;
//
//    for(int i = 0; i < size; i++){
//        avg += array[i];
//        cout << array[i] << " ";
//
//    }
//    cout << endl;
//    avg = abs(avg / size);
//
//    cout << "avg: " << avg << endl;
//
//    double closest = avg;
//    int tmp = 0;
//    double diff;
//
//    for(int i = 0; i < size; i++) {
//
//        diff = abs(array[i] - avg);
//        cout << "diff1: " << diff << endl;
//        if(closest >= diff){
//            cout << "diff2: " << diff << endl;
//
//            closest = diff;
//            tmp = i;
//        }
//    }
//    cout << endl;
//    return array[tmp];
//}
//
//
//int main(){
//
//    double num1, num2, num3, num4, num5;
//    cout << "Give me five numbers " << endl;
//
//    cin >> num1 >> num2 >> num3 >> num4 >> num5;
//
//    double arr[5] = {num1, num2, num3, num4, num5};
//
////    double ar[5] = {1.5, 3.14, 7.5, 1.25, 3.42};
//
//
//    cout << endl;
//    cout << getClosestToAvg(arr, 5);

//}


//
//#include <iostream>
//using namespace std;
//
//bool isPalindrome(char* word){
//    cout << endl;
//
//    int countW = 0;
//    for(int i = 0; word[i] != '\0'; i++){
//        countW++;
//    }
//
//    char wordFromBack[countW];
//    int j = 0;
//    for(int i = countW - 1; i >= 0; i--){
//        wordFromBack[j] = word[i];
//        j++;
//    }
//
//    cout << endl;
//
//
//    for(int i = 0; word[i] != '\0'; i++){
//        if(wordFromBack[i] != word[i]){
//            cout << wordFromBack[i] << endl;
//            cout << word[i] << endl;
//            return false;
//        }
//    }
//
//    return true;
//}
//int main(){
//
//    char arr[] = "lato";
//
//    bool isP = isPalindrome(arr);
//
//    cout << "Is " << arr << " a palindrome? " << isP << endl;
//
//}



//void splitOnWords(char * text){
//
//    int countWords = 1;
//    for(int i = 0; text[i] != '\0'; i++){
//        if(text[i] == ' '){
//            countWords++;
//        }
//    }
//
//
//    for(int i = 0; text[i] != '\0'; i++){
//        if(text[i] == ' '){
//
//        }
//    }
//}
//
//
//#include <iostream>
//using namespace std;
//
//int main(){
//
//    char alaMa[] = "Ala ma kota, a kot ma ale";
//
//    splitOnWords(alaMa);
//
//}




//
//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int first = 5;
//    int sec = 8;
//
//    int *ptr = &first;
//    int &ref = sec;
//
//    ref = *ptr;
//
//    cout<< "first: " << first << endl;
//    cout << "sec: " <<  sec << endl;
//    cout << "ptr: " << *ptr << endl;
//    cout << "ref: " << ref << endl;
//}



//#include <iostream>
//using namespace std;
//
//int main(){
//
//    static int arr[5] = {1, 2, 3, 4, 5};
//
//    int * ptrFirst = arr;
//    int * ptrLast = arr + 4;
//
//
//    cout << *ptrFirst << endl;
//    cout << *ptrLast << endl;
//
//    int sum = 0;
//
//    for(; *ptrFirst <= *ptrLast; ptrFirst++){
//        sum += *ptrFirst;
//    }
//
//    cout << sum << endl;
//
//}

//#include <iostream>
//using namespace std;
//
//int main(){
//
//
//    char ala[] = "Ala ";
//    char ma[] = "ma ";
//    char kota[] = "kota ";
//
//    char toma[] = "toma ";
//
//    char *pointers[4] ={ala, ma, kota};
//
//    for(int i = 4; i > 0; i--){
//
//        if(i == 1){
//            pointers[i] = toma;
//            break;
//        }
//        pointers[i] = pointers[i - 1];
//    }
//
//
//    for(int i = 0; i < 4; i++){
//        cout << pointers[i] ;
//    }
//}



//#include <iostream>
//using namespace std;
//
//
//int mul(int a, int b){
//    cout << a << " * " << b << " = " << a*b << endl;
//    return a*b;
//}
//
//int dif(int a, int b){
//    cout << a << " / " << b << " = " << a/b << endl;
//    return a/b;
//}
//
//int sum(int a, int b){
//    cout << a << " + " << b << " = " << a+b << endl;
//    return a+b;
//}
//
//int sub(int a, int b){
//    cout << a << " - " << b << " = " << a-b << endl;
//    return a-b;
//}
//
//void funCall(int *arr, int sizeArr, int ( **arrPt)(int, int), int sizeArrPt){
//
//    for(int i = 0; i < sizeArr*2; i++){
//        for(int j = 0; j < sizeArr*2; j++){
//            for(int k = 0; k < sizeArrPt; k++){
//                arrPt[k](arr[i],arr[j]);
//            }
//            cout << endl;
//        }
//    }
//}
//
//int main(){
//
//
//    int a = 6;
//    int b = 3;
//
//
//    int (* funMul)(int, int) = &mul;
//    int (* funSum) (int, int) = &sum;
//    int (* funDif)(int, int) = &dif;
//    int (* funSub)(int, int) = &sub;
//
//    int (* tabFunPtr[4]) (int, int) = { funMul, funDif, funSum, funSub };
//
//    int pairNums[][2] = { {1, 5},
//                          {3, 4} };
//
//    funCall( (int *) pairNums, 2, tabFunPtr, 4);
//
//}


#include <iostream>
using namespace std;

template <typename Arr>
int getBiggest(Arr * array, int size){

    int tmp = array[0];
    int biggest = tmp;

    for(int i = 0; i < size; i++){
        tmp = array[i];

        if(biggest < tmp){
            biggest = tmp;
        }
    }
    cout << endl;
    return biggest;
}


int main(){

    int array[] = {-4, -4, -4, -4, -4};

    cout << getBiggest(array, 5) << endl;

}

// cd cz4 zad V


//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int array[] = {-4, -4, -4, -4, -4};
//
//    int a = 4;
//    int b = 5;
//
//    int mul = [] (int c, int d)-> int { return (c*d);}(a, b) ;
//    int dif = [] (int c, int d)-> int { return c/d;}(a, b) ;
//    int sum = [] (int c, int d)-> int { return c+d;}(a, b) ;
//    int sub = [] (int c, int d)-> int { return  c-d;}(a, b);
//
//    cout<< "a*b = " << mul << endl;
//    cout<< "a/b = " << dif << endl;
//    cout<< "a+b = " << sum << endl;
//    cout<< "a-b = " << sub << endl;
//}



//#include <iostream>
//using namespace std;
//
//int main() {
//
//
//    long long *howBig;
//    for(long long i;i < 9999; i++){
//        long long *array = new long long[i];
//        howBig = &i;
//        delete array;
//    }
//
//    cout << "Array of size " << *howBig << "was made" << endl;
//
//// nie dziala za bardzo
//
//}


//union unia{
//    int uInt;
//    long double uLongDouble;
//
//};
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//
//    unia myUnia;
//    myUnia.uInt = 5;
//
//    cout << myUnia.uInt << endl;
//    cout << myUnia.uInt << " " << myUnia.uLongDouble << endl;
//
//    myUnia.uLongDouble = 4.5;
//
//    cout << endl;
//    cout << myUnia.uLongDouble << endl;
//    cout << myUnia.uInt << " " << myUnia.uLongDouble << endl;
//
//}


//#include <iostream>
//using namespace std;
//
//struct Element{
//
//    char* imie;
//    Element next;
//};
//
//Element* lista = 0;
//
//Element* getNewElement(){
//
//    Element *n;
//
//    cin >> n->imie;
//
//    return n;
//
//}
//
//void insert(Element* element){
//
//    while (lista){
//        Element* tmp = lista;
//
//    }
//
//}
//
//int main() {
//
//
//
//}


//#include <iostream>
//using namespace std;
//
//
//struct SomeOne{
//    char* imie;
//    int wiek;
//    bool sex;
//};
//
//class MyClass{
//
//public:
//    char* imie;
//    int wiek;
//    bool sex;
//};
//
//
//int main() {
//
//    SomeOne someOne;
//
//    MyClass myClass;
//
//    char nameOne[] = {"Ala"};
//
//    char nameOther[] = {"Baba"};
//
//    someOne.imie = nameOne;
//    someOne.sex = 1;
//    someOne.wiek = 15;
//
//    myClass.imie = nameOther;
//    myClass.sex = 0;
//    myClass.wiek = 20;
//
//    MyClass* ptr;
//
//    ptr = &myClass;
//
//
//    cout<< someOne.imie << endl;
//    cout << myClass.imie << endl;
//}


//#include <iostream>
//using namespace std;
//
//class Osoba{
//
//public:
//    Osoba();
//    string imie;
//    int wiek;
//    bool sex;
//};
//
////Osoba::Osoba(){
////    imie = {"Alice"};
////    wiek = 17;
////    sex = 1;
////}
//
//Osoba::Osoba() :
//
//        imie("Anna"), wiek(69), sex(true)
//{
//    cout << imie << endl;
//    cout << wiek << endl;
//    cout << sex << endl;
//}
//
//
//int main() {
//
//
//    Osoba osoba;
//
//    cout << osoba.imie << endl;
//    cout << osoba.wiek << endl;
//    cout << osoba.sex << endl;
//}




//
//#include <iostream>
//using namespace std;
//
//class Klasa{
//public:static void f(){}
//};
//
//void bar(char *c){
//    *c = 'c';
//}
//
//struct {
//    int bar;
//}*foo;
//
//
//void boo(double d, long l, char c = 'c');
//
//int main() {
//
//
//    char* k = (char*) malloc(sizeof(char));
//    delete [] k;
//
//
//    Klasa::f();
////    Klasa *klas;
////    klas->f();
//
//
//
//    return 0;

//}


//5

//#include <iostream>
//using namespace std;
//
//template <typename T>
//int getTheBiggest(T* arr, int size){
//
//    int biggestIndex = 0;
//
//    T element = arr[0];
//
//    for(int i = 1; i < size; i++){
//        if(arr[i] > element){
//            element = arr[i];
//            biggestIndex = i;
//        }
//    }
//
//    return biggestIndex;
//}
//
//int main() {
//
//    int arrInt[] = { 0, 1, 5, 7, 4, 10, 2};
//    double arrDouble[] = {0.5, 2.5, 1.2, 6.9};
//    string arrString[] = {"aota", "dota", "cota"};
//
//
//    int indx1 = getTheBiggest(arrInt, 7);
//    int indx2 = getTheBiggest(arrDouble, 4);
//    int indx3 = getTheBiggest(arrString, 3);
//
//    cout << "int array: " << arrInt[indx1] << endl;
//    cout << "double array: " << arrDouble[indx2] << endl;
//    cout << "string array: " << arrString[indx3] << endl;
//
//    return 0;
//}


// drugie zadanie
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//double f1(double x){
//    return x/4;
//}
//double f2(double x){
//    return -2*x;
//}
//
//using D2D=double(*)(double);
//
//D2D maxfun(D2D funs[],int size, double a, double b, double *pmax) {
//    static const double eps = 1e-4;
//
//
//}
//
//
//int main() {
//    double xmax;
//
//    D2D funs[] = {f1,sin,f2};
//    D2D pf = maxfun(funs,3,0,3,&xmax);
////    cout<<"xmax = "<<xmax<<"; f(xmax) = "
////    <<pf(xmax)<<endl;
//
//    cout << funs[0] << " " << funs[1] << " " << funs[2] << endl;
//}


// 3 zadanie

#include <iostream>
using namespace std;

enum Banks {PKO, BGZ, BRE, BPH};

struct Account {
    Banks   bank;
    int  balance;
} firstAccount{BGZ, 1600}, secAccount{BGZ, 1700},
        thirdAccount{PKO, 1300}, fouthAccount{ PKO, 1700},
        fivAccount{BGZ, 36000}, sixAccount{ BGZ, -3},
        sevAccount{BGZ, 1200}, eightAccount{ BGZ, -100};

struct Person {
    string  name;
    Account account;
} piter{"Piter", firstAccount}, suz{"Suzan", secAccount},
    annie{"Annie", thirdAccount}, marc{"Marc", fouthAccount},
    victoria{"Victoria", fivAccount}, jacob{"Jacob", sixAccount},
    andrew{"Andrew", sevAccount}, karol{"Karol", eightAccount};

struct Couple {
    Person  he;
    Person she;
} petAndSuz{piter, suz}, annieAndMarc{marc, annie},
        vicAndJacob{jacob, victoria}, andrewAndKarol{andrew, karol};

const Couple* bestClient(const Couple* cpls,
                         int size, Banks bank) {

    int biggestMoney = 0;
    int currentCoupleBalance = 0;
    int best = 0;

    bool hasBankAcc = false;

    for(int i = 0; i < size; i++){

        currentCoupleBalance = cpls[i].he.account.balance
                               + cpls[i].she.account.balance;


        if(cpls[i].he.account.bank != bank
                || cpls[i].she.account.bank != bank){
            continue;
        }else{
            hasBankAcc = true;
        }

        if(currentCoupleBalance >= biggestMoney){
            biggestMoney = currentCoupleBalance;
            best = i;
        }
    }

    if(!hasBankAcc){
        return nullptr;
    }

    return &cpls[best];

}

int main() {

    Couple cpls[] = {
            petAndSuz, annieAndMarc, vicAndJacob, andrewAndKarol
    };

    const Couple* p = bestClient(cpls,4,BGZ);
    cout << p->he.name << " and " << p->she.name
         << ": " << p->he.account.balance +
                    p->she.account.balance << endl;
}




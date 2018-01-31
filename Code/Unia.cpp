#include <iostream>

using namespace std;

union unia{
    int uInt;
    long double uLongDouble;
};

int main() {


    unia myUnia;
    myUnia.uInt = 5;

    cout << myUnia.uInt << endl;
    cout << myUnia.uInt << " " << myUnia.uLongDouble << endl;

    myUnia.uLongDouble = 4.5;

    cout << endl;
    cout << myUnia.uLongDouble << endl;
    cout << myUnia.uInt << " " << myUnia.uLongDouble << endl;

}

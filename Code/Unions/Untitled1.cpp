#include <iostream>

using namespace std;

union MyUnion {
	int count;
	double averageAge;
};

int main(){
	MyUnion myUnion;
	myUnion.averageAge = 2.3;
	myUnion.count = 5;
	
	cout << myUnion.count << endl;
	cout << myUnion.averageAge << endl;
	
	myUnion.averageAge = 2.3;
	
	cout << myUnion.count << endl;
	cout << myUnion.averageAge << endl;
	
}

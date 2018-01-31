#include <cstring>
#include <iostream>
#include <conio.h>

using namespace std;

struct Book {
	string title;
	float price;
	int pageCount;
};

int main(){
	Book book;
	book.title = "asd";
	book.price = 23.42f;
	book.pageCount = 234;
	
	cout << "Book: " << book.title << ", price: " << book.price << ", page count: " << book.pageCount;
}

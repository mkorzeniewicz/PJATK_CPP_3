#pragma once
class Person
{
private: 
	int _wiek;
public:
	Person(int wiek) : _wiek(wiek) {};
	void Go();
	~Person();
};


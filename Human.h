#ifndef HUMAN_h
#define HUMAN_h
#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	void setName(string name);
	string getName();
	void setSurname(string surname);
	string getSurname();
	void setAge(int age);
	int getAge();
	void printFullName();
	void setFullName(string name, string surname);
    Human();
	Human(string name, string surname, int age);
	~Human();

private:
	string name;
	string surname;
	int age;
};

#endif // HUMAN_h

#include <iostream>
#include "Human.h"
#include <vector>
string Human::getName()
{
	return this->name;
}

void Human::setName(string name)
{
	this->name = name;
}


string Human::getSurname()
{
	return this->surname;
}

void Human::setSurname(string surname)
{
	this->surname = surname;
}


int Human::getAge()
{
	return this->age;
}

void Human::setAge(int age)
{
    this->age = age;
}

void Human::printFullName()
{
	cout << this->getName() << " " << this->getSurname();
}

void Human::setFullName(string name, string surname)
{
	this->setName(name);
	this->setSurname(surname);
}

Human::Human(){}

Human::Human(string name, string surname, int age)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
}

Human::~Human(){}

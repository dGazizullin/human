#include <iostream>
#include <cstdlib>
#include <vector>
#include "Student.h"

using namespace std;

int main()
{
    //create human Dave Bowman and print his name
	Human *leatherBastard = new Human;
	leatherBastard->setFullName("Dave", "Bowman");
	cout << "Leather bastard's full name is: ";
	leatherBastard->printFullName();

	//create student Dave Bowman
	Student *DaveBowman = new Student(leatherBastard->getName(), leatherBastard->getSurname(), 49, {9.000,10,8,10});
	cout << "\n";
	DaveBowman->printFullName();
	cout << " was a student too.\n";

    cout << "His average mark was "<< DaveBowman->getAvMarks() << ".\n";
	system("pause");
	return 0;
}

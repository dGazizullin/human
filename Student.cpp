#include <iostream>
#include <vector>
#include "Student.h"

Student::Student() : Human::Human(){}

Student::Student(string name, string surname, int age, vector <float> marks) :
Human::Human(name, surname, age)
{
	this->avMarkCalc(marks);
}

float Student::getAvMarks()
{
    return this->averageMark;
}

void Student::setMark(int mark)
{
    this->marks.push_back(mark);

}

void Student::avMarkCalc(vector <float> marks)
{
    float summ = 0;
    float marksNum = 0;
    for(auto it = marks.begin(); it != marks.end(); ++it)
    {
        summ += *it;
        marksNum++;
    }

    this->averageMark = summ/marksNum;
}


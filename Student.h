#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>
#include "Human.h"
using namespace std;

class Student : public Human
{
public:
	float getAvMarks();
	void setMark(int mark);
	void avMarkCalc(vector <float> marks);
	Student();
	Student(string name, string surname, int age, vector <float> marks);
private:
	string name;
	string surname;
	int age;
	float averageMark;
	vector <float> marks;
};

#endif // STUDENT_H

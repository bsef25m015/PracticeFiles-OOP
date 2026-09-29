#include <iostream>
#include "Student.h"

void Student::setRollNo(const char* roll)
{
	if (roll[10] != '\0')	std::cout << "Invalid Roll Number!\n";
	else
	{
		for (int i = 0; i < 11; ++i)
		{
			rollNo[i] = roll[i];
		}
	}
}

void Student::setSemester(int semNum)
{
	if (semNum > 8)		std::cout << "Semester Must be Less than 8.\n";
	else				semester = semNum;
}

void Student::setName(const char* studentName)
{
	int i = 0;
	while (studentName[i] != '\0' && i < 99)
	{
		name[i] = studentName[i];
		++i;
	}
	name[i] = '\0';
}

void Student::setCGPA(float cgpa)
{
	CGPA = cgpa;
}

const char* Student::getRollNo()
{
	return rollNo;
}

int Student::getSemester()
{
	return semester;
}

const char* Student::getName()
{
	return name;
}

float Student::getCGPA()
{
	return CGPA;
}

bool Student::isStudentDropOut()
{
	return (semester == 1 && CGPA < 1.5) || (semester != 1 && CGPA < 1.7);
}

bool Student::isStudentOnProbation()
{
	return (semester == 1 && CGPA >= 1.5 && CGPA < 2) || (semester != 1 && CGPA >= 1.7 && CGPA < 2);
}
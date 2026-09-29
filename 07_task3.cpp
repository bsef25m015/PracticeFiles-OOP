#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	Student a;
	
	char name[] = "Abdullah Baig";
	char rollNo[] = "BSEF25M004";

	a.setName(name);
	a.setRollNo(rollNo);
	a.setCGPA(4);
	a.setSemester(3);

	cout << "Name: " << a.getName();
	cout << "\nRoll Number: " << a.getRollNo();
	cout << "\nCGPA: " << a.getCGPA();
	cout << "\nSemester: " << a.getSemester();

	if (!a.isStudentDropOut())		cout << "\nStudent is Not Drop Out\n";
	if (!a.isStudentOnProbation())	cout << "Student is Not on Probation\n";

	return 0;
}
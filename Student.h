#ifndef STUDENT_H
#define STUDENT_H

class Student
{
private:
    char rollNo[11];
    int semester;
    char name[100];
    float CGPA;
public:
    void setRollNo(const char* roll);
    void setSemester(int semNum);
    void setName(const char* studentName);
    void setCGPA(float cgpa);
    const char* getRollNo();
    int getSemester();
    const char* getName();
    float getCGPA();
    bool isStudentDropOut();
    bool isStudentOnProbation();
};

#endif
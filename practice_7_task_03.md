### Task - 3: Student

Implement a class Student, whose object will be responsible for storing basic student information.

```
class Student
{
    char rollNo[11];    //roll no of student like BSEF14M001
    int semester;       //semester number
    char name[100];     //name of student
    float CGPA;
};

```

Add the following public functions in the Student class:

```
void setRollNo(const char *);
void setSemester( int );
void setName(const char *);
void setCGPA(float);
const char * getRollNo();    //think about it: why not to have a return type char *
int getSemester();
const char * getName();
float getCGPA();

bool isStudentDropOut();     //student dropout if CGPA<1.5 in 1st semester
                             //student dropout if CGPA<1.7 in 2nd and onward semester.

bool isStudentOnProbation(); //student gets probation if CGPA>=1.5 and CGPA<2 in 1st semester
                             //student gets probation if CGPA>=1.7 and CGPA<2 in 2nd and onward semester.

```

**Note:** Make sure that the integral part of rollno must be >=1 and <=999;
you should know what to do with the mutator/accessor
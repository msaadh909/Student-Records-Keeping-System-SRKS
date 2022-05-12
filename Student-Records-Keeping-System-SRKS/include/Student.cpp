#include <iostream>

using namespace std;

class Student
{
private:
    float cgpa = 12.5;

public:
    string name = "saad";
    int id;
    Student(/* args */);
    string GetStudentName();
    float GetStudentCGPA();
    ~Student();
};

Student::Student(/* args */)
{
    cout << "Class Student : OBJ" << endl;
}

string Student::GetStudentName()
{
    return this->name;
}

float Student::GetStudentCGPA()
{
    return this->cgpa;
}

Student::~Student()
{
}

//
//  Student.cpp
//  Student-Records-Keeping-System-SRKS
//
//  Created by Saad Hassan on 5/15/22.
//

#include <iostream>
#include "../model/StudentModel.cpp"

using namespace std;

class Student
{
    StudentModel student_model;

public:
    Student()
    {
        cout << "> Student" << endl;
    }
    // ~Student()
    // {
    //     cout << "this is distructor Student class" << endl;
    // }
    void fetch()
    {
        cout << "fetch()" << endl;
        student_model.get();
    }
    void store()
    {
        student_model.create();
    }
    void GetStudentName()
    {
        cout << "Student name : saad" << endl;
    }
};

//
//  main.cpp
//  Student-Records-Keeping-System-SRKS
//
//  Created by Saad Hassan on 5/11/22.
//

#include <iostream>
#include "./include/index.cpp"
#include "Test.cpp"
#include "Test2.cpp"

int main()
{
    system("cls");

    Student student;
    cout << student.GetStudentCGPA() << endl;
    cout << student.GetStudentName() << endl;
    Courses courses;
    Test();
    Test2();
    return 0;
}

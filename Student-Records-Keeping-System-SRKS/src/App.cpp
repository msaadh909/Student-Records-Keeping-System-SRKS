#include <iostream>
#include <string>
#include "../lib/src/Auth.cpp"
#include "../include/Student.cpp"
// #include "../include/Program.cpp"
// #include "../include/Course.cpp"

using namespace std;

void App()
{
    // Auth();

    int feature;

jump_feature:
    cout << "Please Enter a number" << endl
         << "1.  Logout" << endl
         << "2.  Show all students" << endl
         << "3.  Add new student" << endl
         << "4.  Search student by Roll no." << endl
         << "5.  Show Programs" << endl
         << "6.  Add Program" << endl
         << "7.  Show Course" << endl
         << "8.  Add Course" << endl
         << "Which action you want to do: ";

    cin >> feature;

    if (0 >= feature || feature >= 9)
    {
        goto jump_feature;
    }

    Student student;
    // Program program;
    // Course course;

    switch (feature)
    {
    case 1:
        Auth(false);
        break;
    case 2:
        student.fetch();
        break;
    case 3:
        student.store();
        break;
    case 4:
        cout << "4.  Search student by Roll no." << endl;
        break;
    case 5:
        // program.fetch();
        break;
    case 6:
        // program.store();
        break;
    case 7:
        // course.fetch();
        break;
    case 8:
        // course.store();
        break;
    }
}

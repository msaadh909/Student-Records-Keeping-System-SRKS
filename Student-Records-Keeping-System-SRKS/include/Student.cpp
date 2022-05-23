#include <iostream>
#include "../model/StudentModel.cpp"

using namespace std;

class Student
{
public:
    StudentModel student_model;
    int x;
    Student()
    {
        // cout << "> Student" << endl;
    }
    void fetch()
    {
        cout << "Student::fetch()" << endl;
        cout
            << left
            << setw(6)
            << "S.no."
            << left
            << setw(20)
            << student_model.fillable[0]
            << left
            << setw(20)
            << student_model.fillable[1]
            << left
            << setw(20)
            << student_model.fillable[2]
            << left
            << setw(20)
            << student_model.fillable[3]
            << endl;
        student_model.get();

        cout << "Enter S.no. for more detial: ";
        cin >> x;
        show(x);
    }
    void store()
    {
        cout << "Student::store()" << endl;

        for (int i = 0; i < student_model.no_fill_able; i++)
        {
            cout << "Enter " << student_model.fillable[i] << ": ";
            cin >> student_model.fillable[i];
        }
        student_model.create(student_model.fillable);
    }

    void show(int x)
    {
        int action;
        cout << "Student::show()" << endl;

        // cout << "X: " << x << endl;

    jump_action:
        cout << "Please Enter a number" << endl
             << "1.  Logout" << endl
             << "2.  Show Leaves" << endl
             << "3.  Add Leaves" << endl
             << "4.  Show Progress" << endl
             << "5.  Add Progress" << endl
             << "6.  Show Timetable" << endl
             << "7.  Add Timetable" << endl
             << "8.  Show Fee" << endl
             << "9.  Add Fee" << endl
             << "10. Show Fee" << endl
             << "11. Add Fee" << endl
             << "12. Show Fee" << endl
             << "13. Add Fee" << endl
             << "14. Edit Student" << endl
             << "15. Delete Student" << endl
             << "16. Export Student Detail" << endl
             << "Which action you want to do: ";

        cin >> action;

        if (0 >= action || action >= 17)
        {
            goto jump_action;
        }

        switch (action)
        {
        case 1:
            cout << "1.  log" << endl;
            break;
        case 2:
            cout << "2.  Show Leaves" << endl;
            break;
        case 3:
            cout << "3.  Add Leaves" << endl;
            break;
        case 4:
            cout << "4.  Show Progress" << endl;
            break;
        case 5:
            cout << "5.  Add Progress" << endl;
            break;
        case 6:
            cout << "6.  Show Timetable" << endl;
            break;
        case 7:
            cout << "7.  Add Timetable" << endl;
            break;
        case 8:
            cout << "8.  Show Fee" << endl;
            break;
        case 9:
            cout << "9.  Add Fee" << endl;
            break;
        case 10:
            cout << "10.  Show Fee" << endl;
            break;
        case 11:
            cout << "11. Add Fee" << endl;
            break;
        case 12:
            cout << "12. Show Fee" << endl;
            break;
        case 13:
            cout << "13. Add Fee" << endl;
            break;
        case 14:
            cout << "14. Edit Student" << endl;
            break;
        case 15:
            cout << "15. Delete Student" << endl;
            break;
        case 16:
            cout << "16. Export Student Detail" << endl;
            break;
        }
    }
};

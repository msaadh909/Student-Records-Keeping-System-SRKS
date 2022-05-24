#include <iostream>
#include <iomanip>
#include "../model/StudentModel.cpp"
#include "./Utilities.cpp"

using namespace std;

class Student : public Utilities
{
public:
    StudentModel student_model;
    int x;
    void fetch()
    {
        vector<vector<string>> items;
        items = student_model.get();

        title("Show Students");

        // HEADER
        student_model.fillable.erase(student_model.fillable.begin() + 4);
        student_model.fillable.erase(student_model.fillable.begin() + 4);
        student_model.fillable.erase(student_model.fillable.begin() + 4);
        student_model.fillable.erase(student_model.fillable.begin() + 4);
        student_model.fillable.erase(student_model.fillable.begin() + 4);
        student_model.fillable.erase(student_model.fillable.begin() + 4);
        header(student_model.fillable, student_model.fillable.size());

        // BODY
        for (int i = 0; i < items.size(); i++)
        {
            cout << left << setw(6) << i + 1;
            for (int j = 0; j < student_model.no_fill_able; j++)
                if (j != 4 && j != 5 && j != 6 && j != 7 && j != 8 && j != 9)
                    cout << left << setw(20) << items[i][j];

            cout << endl;
        }

        // cout << "Enter S.no. for more detial: ";
        // cin >> x;
        // show(x);
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

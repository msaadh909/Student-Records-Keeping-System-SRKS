#include <iostream>
#include "../model/CourseModel.cpp"

using namespace std;

class Course
{
public:
    CourseModel course_model;
    void fetch()
    {
        cout
            << left
            << setw(6)
            << "S.no."
            << left
            << setw(20)
            << course_model.fillable[0]
            << left
            << setw(20)
            << course_model.fillable[1]
            << left
            << setw(20)
            << course_model.fillable[2]
            << left
            << setw(20)
            << course_model.fillable[3]
            << left
            << setw(20)
            << course_model.fillable[4]
            << endl;
        course_model.get();
    }
    void store()
    {
        for (int i = 0; i < course_model.no_fill_able; i++)
        {
            cout << "Enter " << course_model.fillable[i] << ": ";
            cin >> course_model.fillable[i];
        }
        course_model.create(course_model.fillable);
    }
};
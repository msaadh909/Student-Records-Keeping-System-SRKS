#include <iostream>
#include <string>
#include <vector>
// #include "Model.cpp"
#include "Model.hpp"

using namespace std;

class StudentModel : virtual public Model
{
protected:
    string table;

private:
    void assignFillable()
    {
        fillable.push_back("ID");
        fillable.push_back("Name");
        fillable.push_back("Program");
        fillable.push_back("Father Name");
        // fillable.push_back("father occupation");
        // fillable.push_back("guardian name");
        // fillable.push_back("guardian occupation");
        // fillable.push_back("date of birth");
        // fillable.push_back("nic");
        // fillable.push_back("nationality");
        // fillable.push_back("gender");
        // fillable.push_back("blood group");
        // fillable.push_back("passport number");
        // fillable.push_back("permanent address");
        // fillable.push_back("permanent city");
        // fillable.push_back("email");
        // fillable.push_back("phone");
    }

public:
    int no_fill_able;
    vector<string> fillable;
    StudentModel()
    {
        cout << "StudentModel()" << endl;

        table = "students";
        setDirFile(table);
        no_fill_able = 4;
        setNoDataFields(no_fill_able);
        assignFillable();
    };
    // ~StudentModel() {
    //     return;
    // };
};

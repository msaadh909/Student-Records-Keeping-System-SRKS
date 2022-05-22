#include <iostream>
#include <string>
#include <vector>
#include "Model.cpp"

using namespace std;

class StudentModel : public Model
{
protected:
    int number_fill_able;
    string table;
    vector<string> fillable;

private:
    void assignFillable()
    {
        fillable.push_back("id");
        fillable.push_back("name");
        fillable.push_back("program");
        fillable.push_back("father name");
        fillable.push_back("father occupation");
        fillable.push_back("guardian name");
        fillable.push_back("guardian occupation");
        fillable.push_back("date of birth");
        fillable.push_back("nic");
        fillable.push_back("nationality");
        fillable.push_back("gender");
        fillable.push_back("blood group");
        fillable.push_back("passport number");
        fillable.push_back("permanent address");
        fillable.push_back("permanent city");
        fillable.push_back("email");
        fillable.push_back("phone");
    }

public:
    StudentModel()
    {
        // cout << "> StudentModel" << endl;
        table = "students";
        setDirFile(table);
        number_fill_able = 17;
        setNoDataFields(number_fill_able);
        assignFillable();
        data_fields = fillable;
        // copy(fillable, fillable + number_fill_able, data_fields);
    };
    // ~StudentModel() {
    //     return;
    // };
};

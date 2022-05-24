#include <iostream>
#include <string>
#include <vector>
#include "./Model.hpp"

using namespace std;

class StudentModel : public Model
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
        fillable.push_back("Date Of Birth");
        fillable.push_back("CNIC");
        fillable.push_back("Nationality");
        fillable.push_back("Gender");
        fillable.push_back("Address");
        fillable.push_back("City");
        fillable.push_back("Email");
        fillable.push_back("Phone");
    }

public:
    int no_fill_able;
    vector<string> fillable;
    StudentModel()
    {
        table = "students";
        setDirFile(table);
        no_fill_able = 12;
        setNoDataFields(no_fill_able);
        assignFillable();
    };
};

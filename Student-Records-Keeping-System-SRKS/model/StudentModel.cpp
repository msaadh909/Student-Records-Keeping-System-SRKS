#include <iostream>
#include <string>
#include <vector>
#include "Model.cpp"

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
        fillable.push_back("Father Occupation");
        fillable.push_back("Guardian Name");
        fillable.push_back("Guardian Occupation");
        fillable.push_back("Date Of Birth");
        fillable.push_back("CNIC");
        fillable.push_back("Nationality");
        fillable.push_back("Gender");
        fillable.push_back("Blood Group");
        fillable.push_back("Passport Number");
        fillable.push_back("Permanent Address");
        fillable.push_back("Permanent City");
        fillable.push_back("Email");
        fillable.push_back("Phone");
    }

public:
    int no_fill_able;
    vector<string> fillable;
    StudentModel()
    {
        cout << "StudentModel()" << endl;

        table = "students";
        setDirFile(table);
        no_fill_able = 17;
        setNoDataFields(no_fill_able);
        assignFillable();
    };
};

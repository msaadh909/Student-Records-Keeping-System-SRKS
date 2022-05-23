#include <iostream>
#include <string>
#include <vector>
#include "Model.cpp"

using namespace std;

class ProgramModel : virtual public Model
{
protected:
    string table;

private:
    void assignFillable()
    {
        fillable.push_back("Title");
        fillable.push_back("Years");
        fillable.push_back("Semester");
        fillable.push_back("Credit Hrs");
        fillable.push_back("Type");
    }

public:
    int no_fill_able;
    vector<string> fillable;
    ProgramModel()
    {
        table = "programs";
        setDirFile(table);
        no_fill_able = 5;
        setNoDataFields(no_fill_able);
        assignFillable();
    };
};


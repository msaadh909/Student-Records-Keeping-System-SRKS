#include <iostream>
#include <string>
#include <vector>
#include "./Model.hpp"

using namespace std;

class LeavesModel : virtual public Model
{
protected:
    string table;

private:
    void assignFillable()
    {
        fillable.push_back("Student_ID");
        fillable.push_back("Course");
        fillable.push_back("Date");
    }

public:
    int no_fill_able;
    vector<string> fillable;
    LeavesModel()
    {
        table = "leaves";
        setDirFile(table);
        no_fill_able = 3;
        setNoDataFields(no_fill_able);
        assignFillable();
    };
};

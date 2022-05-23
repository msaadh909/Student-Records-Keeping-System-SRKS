#include <iostream>
#include <string>
#include <vector>
// #include "Model.cpp"
#include "Model.hpp"

using namespace std;

class CourseModel : virtual public Model
{
protected:
    string table;

private:
    void assignFillable()
    {
        fillable.push_back("Title");
        fillable.push_back("Code");
        fillable.push_back("Credit Hrs");
        fillable.push_back("Semester");
        fillable.push_back("Area");
    }

public:
    int no_fill_able;
    vector<string> fillable;
    CourseModel()
    {
        table = "courses";
        setDirFile(table);
        no_fill_able = 5;
        setNoDataFields(no_fill_able);
        assignFillable();
    };
};


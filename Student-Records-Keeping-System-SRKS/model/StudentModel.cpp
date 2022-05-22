#include <iostream>
#include <string>
#include "Model.cpp"

using namespace std;

class StudentModel : public Model
{
protected:
    int number_fill_able;
    string table;

private:
    /* data */
public:
    StudentModel()
    {
        // cout << "> StudentModel" << endl;
        table = "students";
        setDirFile(table);
        number_fill_able = 17;
        string fillable[17] = {
            "id",
            "name",
            "program",
            "father name",
            "father occupation",
            "guardian name",
            "guardian occupation",
            "date of birth",
            "nic",
            "nationality",
            "gender",
            "blood group",
            "passport number",
            "permanent address",
            "permanent city",
            "email",
            "phone",
        };
        setNoDataFields(number_fill_able);
        copy(fillable, fillable + number_fill_able, data_fields);
    };
    // ~StudentModel() {
    //     return;
    // };
};

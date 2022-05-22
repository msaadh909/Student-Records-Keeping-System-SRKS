#include <iostream>
#include "../model/ProgramModel.cpp"

using namespace std;

class Program
{
public:
    ProgramModel program_model;
    void fetch()
    {
        cout
            << left
            << setw(6)
            << "S.no."
            << left
            << setw(20)
            << program_model.fillable[0]
            << left
            << setw(20)
            << program_model.fillable[1]
            << left
            << setw(20)
            << program_model.fillable[2]
            << left
            << setw(20)
            << program_model.fillable[3]
            << left
            << setw(20)
            << program_model.fillable[4]
            << endl;
        program_model.get();
    }
    void store()
    {
        for (int i = 0; i < program_model.no_fill_able; i++)
        {
            cout << "Enter " << program_model.fillable[i] << ": ";
            cin >> program_model.fillable[i];
        }
        program_model.create(program_model.fillable);
    }
};
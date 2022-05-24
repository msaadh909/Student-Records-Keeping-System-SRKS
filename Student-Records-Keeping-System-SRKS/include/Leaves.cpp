#include <iostream>
#include "../model/LeavesModel.cpp"

using namespace std;

class Leaves
{
public:
    LeavesModel leaves_model;
    void fetch()
    {
        cout
            << left
            << setw(6)
            << "S.no."
            << left
            << setw(20)
            << leaves_model.fillable[0]
            << left
            << setw(20)
            << leaves_model.fillable[1]
            << left
            << setw(20)
            << leaves_model.fillable[2]
            << left
            << setw(20)
            << leaves_model.fillable[3]
            << left
            << setw(20)
            << leaves_model.fillable[4]
            << endl;
        leaves_model.get();
    }
    void store()
    {
        for (int i = 0; i < leaves_model.no_fill_able; i++)
        {
            cout << "Enter " << leaves_model.fillable[i] << ": ";
            cin >> leaves_model.fillable[i];
        }
        leaves_model.create(leaves_model.fillable);
    }
};
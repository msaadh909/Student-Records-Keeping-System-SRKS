#ifndef UTILITIES_CPP
#define UTILITIES_CPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Utilities
{
public:
    void title(string text)
    {
        int x = 20;
        int loopTime = text.size() + (x * 2) - 2;
        for (int i = 0; i < loopTime; i++)
            cout << "=";

        cout << endl
             << "==========="
             << setw(x)
             << text
             << setw(x)
             << "==========="
             << endl;

        for (int i = 0; i < loopTime; i++)
            cout << "=";

        cout << endl;
    }

    void header(vector<string> head, int no_head)
    {
        cout
            << left
            << setw(6)
            << "S.no.";
        for (int i = 0; i < no_head; i++)
        {
            cout << left << setw(20) << head[i];
        }
        cout << endl;
    }
};

#endif
#include "Model.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

class Model
{
protected:
    string dif_file;
    int no_data_fields;

    void setDirFile(string table)
    {
        dif_file = "database/" + table + ".csv";
    }

    void setNoDataFields(int no_fill_able)
    {
        no_data_fields = no_fill_able;
    }

private:
    /* data */
public:
    void count()
    {
        cout << 200 << endl;
    }
    void get()
    {
        // cout << "Model::get()" << endl;

        // string data;

        // File pointer
        fstream fin;

        // Open an existing file
        fin.open(dif_file, ios::in);

        // Read the Data from the file
        // as String Vector
        vector<string> row;
        string line, word;
        int i = 1;

        // read an entire row and
        // store it in a string variable 'line'
        while (getline(fin, line))
        {
            row.clear();

            // used for breaking words
            stringstream s(line);

            // read every column data of a row and
            // store it in a string variable, 'word'
            while (getline(s, word, ' '))
            {
                // add all the column data
                // of a row to a vector
                row.push_back(word);
            }

            cout
                << left
                << setw(6)
                << i
                << left
                << setw(20)
                << row[0]
                << left
                << setw(20)
                << row[1]
                << left
                << setw(20)
                << row[2]
                << left
                << setw(20)
                << row[3]
                << endl;

            i++;
        }

        // Close the file
        fin.close();
    }
    void create(vector<string> fillable)
    {
        cout << "Model::create()" << endl;

        // file pointer
        fstream fout;

        // opens an existing file or creates a new file.
        fout.open(dif_file, ios::out | ios::app);

        for (int i = 0; i < fillable.size(); i++)
        {
            fout << fillable[i] << " ";
        }

        fout << "\n";
        fout.close();
    }
};

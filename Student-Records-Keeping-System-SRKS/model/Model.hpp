
#ifndef MODEL_HPP
#define MODEL_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

class Model
{
protected:
    string dif_file;
    int no_data_fields;

    void setDirFile(string table)
    {
        dif_file = "database/" + table + ".txt";
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
    vector<vector<string>> get()
    {
        // File pointer
        fstream fin;

        // Open an existing file
        fin.open(dif_file, ios::in);

        // Read the Data from the file
        // as String Vector
        vector<vector<string>> matrix;
        vector<string> row;
        string line, word;

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
            matrix.push_back(row);
        }

        // Close the file
        fin.close();

        return matrix;
    }
    void create(vector<string> fillable)
    {
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

#endif

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Model
{
protected:
    string dif_file;
    int no_data_fields;
    string data_fields[0], data[0];

    void setDirFile(string table)
    {
        dif_file = "database/" + table + ".csv";
    }

    void setNoDataFields(int number_fill_able)
    {
        no_data_fields = number_fill_able;
    }

private:
    /* data */
public:
    Model()
    {
        // cout << "> Model" << endl;
        string data_fields[no_data_fields];
        string data[no_data_fields];
    }
    void count()
    {
        cout << 200 << endl;
    }
    void create()
    {
        // file pointer
        fstream fout;

        // opens an existing file or creates a new file.
        fout.open(dif_file, ios::out | ios::app);

        for (int i = 0; i < no_data_fields; i++)
        {
            cout << "Enter " << data_fields[i] << ": ";
            cin >> data[i];
        }

        // Insert the data to file
        for (int i = 0; i < no_data_fields; i++)
        {
            fout << data[i] << ", ";
        }

        fout << "\n";
    }
};

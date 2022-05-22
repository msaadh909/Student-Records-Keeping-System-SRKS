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
    vector<string> data_fields;
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
    void get()
    {
        cout << "Model::get()" << endl;
        // Create a text string, which is used to output the text file
        string myText;

        // Read from the text file
        ifstream MyReadFile(dif_file);

        // Use a while loop together with the getline() function to read the file line by line
        while (getline(MyReadFile, myText))
        {
            // Output the text from the file
            cout << myText;
        }

        // Close the file
        MyReadFile.close();
    }
    void create()
    {
        cout << "Model::create()" << endl;

        if (data_fields.empty() == false)
        {
            // file pointer
            fstream fout;

            // opens an existing file or creates a new file.
            fout.open(dif_file, ios::out | ios::app);

            // for (auto field = data_fields.begin(); field != data_fields.end(); field++)
            // {
            //     cout << *field << " ";
            //     cout << "Enter " << *field << ": ";
            //     cin >> data[i];
            //     fout << data[i] << ",";
            // }

            for (int i = 0; i < data_fields.size(); i++)
            {
                cout << "Enter " << data_fields[i] << ": ";
                cin >> data[i];
                fout << data[i] << ",";
            }

            fout << "\n";
        }
    }
};

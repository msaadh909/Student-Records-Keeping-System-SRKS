#ifndef Model_hpp
#define Model_hpp

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

class Model
{
protected:
    string dif_file;
    int no_data_fields;
    void setDirFile(string table);
    void setNoDataFields(int no_fill_able);

private:
    /* data */
public:
    void count();
    void get();
    void create(vector<string> fillable);
};

#endif /* Model_hpp */

#include <iostream>
#include "../include/welcome.cpp"
#include "../include/login.cpp"

using namespace std;

void Auth();
void Auth(bool logout);

void Auth()
{
    welcomeMessage();
    login();
}

void Auth(bool logout)
{
    string x;
    cout << "Are you sure? you want to logout." << endl
         << "Enter y for 'Yes' & n for 'No': ";
    cin >> x;
    if (!logout && x == "y")
    {
        Auth();
    }
}

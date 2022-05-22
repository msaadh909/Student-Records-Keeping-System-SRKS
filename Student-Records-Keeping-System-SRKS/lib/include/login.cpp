using namespace std;

void login()
{
    string username, password;
    string iUsername, iPassword;

    username = "admin";
    password = "12345";

    cout << "================" << endl;
    cout << "== User Login ==" << endl;
    cout << "================" << endl
         << endl
         << endl;
    cout << "Enter Username: ";
    cin >> iUsername;
    cout << "Enter password: ";
    cin >> iPassword;

    if (username == iUsername && password == iPassword)
    {
        cout << "Login successfully" << endl;
    }
    else
    {
        cout << "Login Failed!" << endl;
        login();
    }
}

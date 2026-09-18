// 08 - Login check
//
// Reads a username and password and checks them against hard-coded values.
//
// Concepts: std::string, comparing strings with ==, &&

#include <iostream>
using namespace std;

int main() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    if (username == "admin" && password == "1234") {  // both must match to log in
        cout << "Login successful" << endl;
    }
    else {
        cout << "Invalid username or password" << endl;
    }
    return 0;
}

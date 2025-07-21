#include<iostream>  // this are predefined # is inclusive preprocessor directives
#include<string>
using namespace std;  // namespace is in built methode that is used for saving header of cin cout cerr

int main() {
    string firstName;
    string lastName;
    cout << "Enter Fisrt name:\n" << endl;
    getline(cin,firstName);

    cout << "Enter Last name:\n" << endl;
    cin >>lastName;



    cout << firstName <<lastName <<endl;
    return 0;
}
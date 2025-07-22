#include <iostream>
#include <string>

using namespace std;

int main(){
    string response;


    //do while
    do
    {
        cout << "Enter coice (yes/no): " << endl;
        cin >> response;
    } while (response != "no" || response != "No");

    

    return 0;
}
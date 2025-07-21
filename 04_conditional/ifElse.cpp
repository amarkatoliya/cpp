#include <iostream>
#include <string>

using namespace std;

int main(){
    bool isOpen;
    double userTime;

    cout << "Enter your time: ";
    cin >> userTime;

    if(userTime >= 8 && userTime <= 18){ //8am to 6pm
        isOpen = true;
    } else {
        isOpen = false;
    }

    cout << " your shop is:\n " << isOpen;
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(){
    int choice;
    double price;

    cout << "select your choice: ";
    cout << "1. Green tea";
    cout << "2. Masala tea";
    cout << "3. Normal tea";
    cout << "4. Black tea";
    cout << "Enter your choice:\n ";

    cin >> choice;

    switch(choice) {
        case 1 :
            price = 2.0;
            cout << "you selected green tea & " << price <<endl;
            break;

        case 2 :
            price = 3.0;
            cout << "you selected masala tea & " << price <<endl;
            break;

        case 3 :
            price = 4.0;
            cout << "you selected normal tea & " << price <<endl;
            break;
            
        default :
        cout << "Invalid choice";
        break;
    }

    return 0;
}
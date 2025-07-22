#include <iostream>
#include <string>

using namespace std;

int main(){
    int cups;

    cout << "Enter your order: ";
    cin >> cups;

    // while
    while (cups > 0)
    {
        cout << "serving a cup of tea\n" <<cups << " remain" << endl;
        cups--;
    }

    cout << "ALl done" << endl;
    

    return 0;
}
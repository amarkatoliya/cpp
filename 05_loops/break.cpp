#include <iostream>
#include <string>

using namespace std;

int main(){
    string response;
    
    while(true) {
        cout << "Do younwant more tea (type n to stop)";
        cin >> response;

        if(response == "n") {
            // exit loop
            break;
        }
        cout << "loop end";
    }
    cout << "NO more tea";

    return 0;
}
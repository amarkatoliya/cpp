#include <iostream>
#include <string>

using namespace std;

int main(){
    // list or array-- continuos memery alocation
    string teaTypes[3] = {"one tea","two tea","three tea"};

    for(int i=0; i<=2; i++) {
        cout << "Making  " << teaTypes[i] << "..." << endl;
            if(teaTypes[i] == "two tea") {
                cout << "skipping  " << teaTypes[i];
                continue;
            }
    }

    return 0;
}
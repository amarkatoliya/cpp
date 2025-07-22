#include <iostream>
#include <string>

using namespace std;

int main(){
    string teaTypes[3] = {"one tea","two tea","three tea"};


    //nested for loop
    for(int i=0; i<3; i++) {
        cout << "Making" << teaTypes[i] << "..." << endl;
        for(int j=1; j< 4; j++) {
            cout << "Making" << j << "cup of" << teaTypes[i] << endl;
        }
    }
    
    return 0;
}
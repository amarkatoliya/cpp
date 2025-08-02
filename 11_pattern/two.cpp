#include<iostream>  
#include<string>  

using namespace std;

int main() {

    int n = 3;
    int num = 1;

    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<n;j++) {
    //         cout << num << " ";
    //         num = num + 1;
    //     }
    //     cout << endl;
    // }
    // out-----------
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // cout << "-------------------------------";


    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<n;j++) {

    //         if(num == 9) {   //here if 9 then printed 1
    //             cout << "1";
    //             continue;
    //         }
    //         cout << num << " ";
    //         num = num + 1;
    //     }
    //     cout << endl;
    // }
    // out-----------
    // 1 2 3
    // 4 5 6
    // 7 8 1
    // cout << "-------------------------------";

    char ch = 'A';

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
// A B C 
// D E F 
// G H I 


    return 0; 
}

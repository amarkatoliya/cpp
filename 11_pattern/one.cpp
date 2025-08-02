#include<iostream>  
#include<string>  

using namespace std;

int main() {

    int n = 4;

    for(int i = 0; i < n; i++) {              
        for(int j = 0; j < n; j++) {
            cout << j+1 ;
        }
        cout << endl;
    }
//------ out
// 1234
// 1234
// 1234
// 1234
    cout << "--------------------------" << endl;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << j+1 ;
        }
        cout << endl;
    }
    // ----out 
    //1
    //12
    //123
    //1234
    cout << "--------------------------" << endl;

    for(int i=0;i<n;i++) {
        char ch = 'A';
        for(int j=0;j<n;j++) {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    // ----out 
    //ABCD
    //ABCD
    //ABCD
    //ABCD
    cout << "--------------------------" << endl;


    for(int i=0;i<n;i++) {
        char ch = 'A';
        for(int j=i;j<n;j++) {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    // ----out 
    //ABCD
    //ABC
    //AB
    //A
    cout << "--------------------------" << endl;


    for(int i=0;i<n;i++) {
        char ch = 'A';
        for(int j=0;j<=i;j++) {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    // ----out 
    //A
    //AB
    //ABC
    //ABCD
    cout << "--------------------------" << endl;


    return 0;
}

#include<iostream>  
#include<string>  

using namespace std;

int main() {

    int n =4;

    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {   //print spaces in line
            cout << " ";
        }
        for(int j=0;j<n-i;j++) {
            cout << i+1;
        }
        cout << endl;
    }
    cout << "----------------------" << endl;
// 1111
//  222
//   33
//    4

    for(int i=0;i<n;i++) {
        char ch = 'A';
        //spaces
        for(int j=0;j<i;j++) {
            cout << " ";
        }
        //inner loop for single line
        for(int j=0;j<n-i;j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    cout << "----------------------" << endl;
// ABCD
//  ABC
//   AB
//    A


for(int i=0;i<n;i++) {
    //spaces
    for(int j=0;j<i;j++) {
        cout << " ";
    }
    //inner loop for single line
    char c = 'A'+i;
    for(int j=0;j<n-i;j++) {
            cout << c;
        }
        // c++;
        cout << endl;
    }
    cout << "----------------------" << endl;
// AAAA
//  BBB
//   CC
//    D


    for(int i=0;i<n;i++) {
        //spaces
        for(int j=0;j<n-i-1;j++) {
            cout << " ";
        }
        for(int j=0;j<=i;j++) {
            cout << j+1;
        }
        for(int j=i;j>0;j--) {
            cout << j;
        }
        cout << endl;
    }


    return 0;
}
#include <iostream>
#include <string>
#include<cctype>

using namespace std;

// num = 200   ABCD

string reverse(string str) {

    int s = 0;
    int e = str.length()-1;
    int count = 0;
    if(!isdigit(str[0])) {   // check for the is number
        cout << "0";
        return "";
    }

    if(str[0] == '-') {
        while(s < e) {
        if(str[e] == '0' && count == 0) {
            str[e] = ' ';
            e--;
        }else {
            count++;
            swap(str[s+1],str[e]);
            s++;
            e--;
        }
    }
    return str;
    }


    // method 1

    // while(s < e) {
    //     swap(str[s],str[e]);   // reverse str
    //     s++;
    //     e--;
    // }

    // while(str[count]) {
    //    if( str[count] == '0') {
    //     str[count] = ' ';
    //     count++;
    //    }else {
    //     return str;
    //    }
    // }

    while(s < e) {
        if(str[e] == '0' && count == 0) {
            str[e] = ' ';
            e--;
        }else {
            count++;
            swap(str[s],str[e]);
            s++;
            e--;
        }
    }

    return str;
}

int main()
{
    string args;
    cout << "Enter your num:";
    cin >> args;

    cout << reverse(args) << endl;
    return 0;
}

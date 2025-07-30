#include<iostream>
#include<string>

using namespace std;

string function(string str) {
    string res = "";

    for(char i:str) {
        if(i == ' ') {
            res+= " ";
        }else {
            res += to_string((int)i);
        }
    }
    return res;
}

int main() {
    cout << function("Hello World") << endl;
    return 0;
}
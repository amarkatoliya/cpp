#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

string reverseWords(string s) {
    int n = s.size();
    string ans = "";
    reverse(s.begin(),s.end());  // first time rev so all word are corr position

    
    for(int i=0;i<n;i++) {
        string word = "";   //word for single word in s
        while(i<n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        reverse(word.begin(),word.end());

        if(word.size() > 0) {
            ans += " " + word;
        }
    }

    return ans.substr(1);

};

int main() {
    string str = "hi i am boy";
    cout << reverseWords(str) << endl;
    return 0;
}
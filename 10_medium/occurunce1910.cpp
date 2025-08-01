#include<iostream>
#include<string>

using namespace std;


class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = part.size();

        while(s.size() > 0 && s.find(part) < s.size()) {
            s.erase(s.find(part),n);
        }
        return s;
    }
};

int main() {
    Solution s;
    string str = "cmdxy";
    string part = "mdxy";
    cout << s.removeOccurrences(str,part) << endl;
    return 0;
}
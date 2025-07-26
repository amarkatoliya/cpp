#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int binToDeci(string binary) {
    int deci = 0;

    for(char bit:binary) {
        deci = deci *2 + (bit - '0');
    }
    return deci;
}
};

int main () {
    Solution sol;

    cout << sol.binToDeci("101") << endl; 

    return 0;
}
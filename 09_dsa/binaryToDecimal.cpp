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

    int deciToBin(string decimal) {
        int bin = 0;

        for(char bit:decimal) {
            bin = bin *10 + (bit - '0');
        }
        return bin;
    }
};

int main () {
    Solution sol;

    cout << sol.binToDeci("101") << endl; 
    cout << sol.deciToBin("8") << endl; 
    return 0;
}
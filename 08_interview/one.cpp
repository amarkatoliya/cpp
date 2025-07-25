#include<stdio.h>
#include<climits>
#include <iostream>

using namespace  std;

int minOpsToPowerOfTwo(int n) {
    int var0 = n; //our num
    int minStep = INT_MAX;

    for(int i=0; i<n; i++) {
        int power = 1<<i;  // 2^i

        int filterStep = abs(var0 - power);
        if(filterStep < minStep){
            minStep = filterStep;
        }
    }
    return minStep;
}

int main() {
    int n;
    cout << "Enter your num" << endl;
    cin >> n;
    cout << minOpsToPowerOfTwo(n) << endl; // Output: 2

    return 0;
}

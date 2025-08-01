#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool isprime(int x) {
    if(x == 0 || x == 1) {
        return false;
    }
    for(int i = 2; i*i < x; i++) {
        if(x % i == 0) {
            return true;
        }
    }
};

bool function(vector<int> arr) {
    int sum = 0;
    int n = arr.size();

    for(int val:arr) {
        sum += val;
    }

    if(sum <=1 ) {
      return false;  
    }

    while(sum > 2) {
        if(isprime(sum)) {
            return true;
        }
        sum -= n;
    }
    return false;
}


int main() {
    vector<int> arr = {1};
    bool result = function(arr);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
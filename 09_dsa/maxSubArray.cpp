#include <iostream>
#include <string>
#include <climits>
#include <vector>
// #include<cctype>

using namespace std;


// this is brute force methode optimal sol is kadane algo


int main() {
    int n =7;
    int arr[] = {1,2,3,4,5,6,7};
    int maxSum = INT_MIN;
    int currentSum = 0;

    // methode 2:-----------------------
    // its called as kadane's low
    for(int i=0;i<n;i++) {
        currentSum += arr[i];
        maxSum = max(maxSum,currentSum);
        if(currentSum < 0) {
            currentSum = 0;
        }
    }



//  methode 1:------------------------------
    // for(int st=0;st<n;st++) {
    //     int currSum = 0;
    //     for(int end=st;end<n;end++) {
    //         currSum += arr[end];   // all sum of subarray
    //         maxSum = max(currSum,maxSum);
    //         // for(int i=st;i<=end;i++) {
    //         //     // cout <<arr[i];
    //         // }
    //         // cout << " ";
    //     }
    //     // cout << endl;
    // }

    cout << "max sum of subarray is:" << maxSum << endl;
    return 0;
}
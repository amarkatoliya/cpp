#include<iostream>  
#include<vector>  

using namespace std;


// brute force ----------------------------------

// vector<int> pairSum(vector<int> nums,int target) {
//     vector<int> ans;
//     for(int i=0; i<nums.size();i++) {
//         for(int j=i+1; j<nums.size(); j++) {
//             if(nums[i]+nums[j] == target) {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }



// optimal solution ------------------------------- 
vector<int> pairSum(vector<int> nums,int target) {   //O(n)
    int n = nums.size();
    int i=0;
    int j = n-1;
    vector<int> ans;

    while(i<j) {
        int sumOfPair = nums[i]+nums[j];
        if(sumOfPair>target ) {
            j--;
        } else if(sumOfPair < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;            
        }
        
    }
    return ans;
}


int main() {
    int target = 10;
    vector<int> arr = {2,3,4,5,6,7};  //sorted

    vector<int> output = pairSum(arr,target);
   
    cout << "first index:" << output[0] << endl;
    cout << "second index:" << output[1] << endl;
    return 0;
}
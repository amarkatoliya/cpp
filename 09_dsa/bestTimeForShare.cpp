#include<iostream>
#include<vector>

using namespace std;

int fun(vector<int> nums) {
    int bestBuy = nums[0];
    int maxProfit = 0;

    for(int i=0; i<nums.size();i++) {
        if(nums[i] > maxProfit) {
            maxProfit = max(maxProfit,nums[i]-bestBuy);
        }
        bestBuy = min(bestBuy,nums[i]);
    }
    if(maxProfit < 0) {
        return 0;
    }
    return maxProfit;
}

int main() {
    vector <int> prices = {7,1,5,3,6,4,8};
    vector <int> prices1 = {5,4,3,2,1};

    cout << fun(prices) << endl;
    cout << fun(prices1);

    return 0;
}
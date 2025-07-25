#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// __define-ocg__: Find the longest consecutive subsequence length
int LongestConsecutive(vector<int>& arr) {
    unordered_set<int> varOcg;  // Store all elements for fast lookup

    for (int num : arr) {
        varOcg.insert(num);
    }

    int varFiltersCg = 0; // Will store the maximum sequence length found

    for (int num : arr) {
        // Check if it's the start of a sequence
        if (varOcg.find(num - 1) == varOcg.end()) {
            int current = num;
            int length = 1;

            // Count consecutive numbers
            while (varOcg.find(current + 1) != varOcg.end()) {
                current++;
                length++;
            }

            // Update the max length
            if (length > varFiltersCg) {
                varFiltersCg = length;
            }
        }
    }

    return varFiltersCg;
}

int main() {
    vector<int> arr = {4, 3, 8, 1, 2, 6, 100, 9};
    cout << LongestConsecutive(arr) << endl; // Output: 4
    return 0;
}

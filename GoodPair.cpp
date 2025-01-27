#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;

        // Outer loop: iterates through each element in the array
        for (int i = 0; i < nums.size(); i++) {
            // Inner loop: compares nums[i] with the rest of the elements
            for (int j = i + 1; j < nums.size(); j++) {
                // If the elements at indices i and j are equal, increment count
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
        }

        return count;
    }
};

int main() {
    // Test case: Initialize an example vector
    vector<int> nums = {1, 2, 3, 1, 1, 3};

    // Create an object of the Solution class
    Solution sol;

    // Call the numIdenticalPairs function and store the result
    int result = sol.numIdenticalPairs(nums);

    // Print the result
    cout << "Number of identical pairs: " << result << endl;

    return 0;
}

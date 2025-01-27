#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;              // Initialize sum to 0
        vector<int> arr;          // This will store the result (running sum)

        // Loop through each element in the input array `nums`
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];   // Add current element to the sum
            arr.push_back(sum);    // Store the cumulative sum in the result array
        }

        return arr;               // Return the result array with the running sums
    }
};

int main() {
    // Test case: Initialize an example vector
    vector<int> nums = {1, 2, 3, 4};

    // Create an object of the Solution class
    Solution sol;

    // Call the runningSum function and store the result
    vector<int> result = sol.runningSum(nums);

    // Print the result
    cout << "Running sum: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";  // Print each element in the result
    }

    return 0;
}

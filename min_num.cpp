#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr; // Result array to store pairs of numbers in required order.
        
        while (nums.size() > 0) { // Continue until the `nums` vector becomes empty.

            // Find the smallest element in the `nums` vector.
            auto min1 = min_element(nums.begin(), nums.end());
            int a = *min1; // Store the smallest element.
            nums.erase(min1); // Remove the smallest element from the `nums`.

            if (nums.size() > 0) { // Check if the `nums` vector still has elements.
                // Find the new smallest element (second smallest in the original list).
                auto min2 = min_element(nums.begin(), nums.end());
                int b = *min2; // Store the second smallest element.
                nums.erase(min2); // Remove the second smallest element from the `nums`.

                // Push the elements into the result array in the required order.
                arr.push_back(b);
                arr.push_back(a);
            } else {
                // If only one element is left, just push it to the result array.
                arr.push_back(a);
            }
        }

        return arr; // Return the result array.
    }
};

int main() {
    Solution solution;

    // Test input vector.
    vector<int> nums = {4, 1, 7, 3, 2, 6};
    
    // Call the function and get the result.
    vector<int> result = solution.numberGame(nums);
    
    // Print the result.
    cout << "Result: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

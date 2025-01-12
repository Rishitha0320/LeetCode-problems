#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {
        // If there are less than 3 sides, it's not possible to form a triangle
        if (nums.size() < 3) {
            return "none";
        }

        // Sort the array to make it easier to check triangle inequality
        sort(nums.begin(), nums.end());

        // Iterate through the array to check for possible triangles
        for (int i = 0; i <= nums.size() - 3; i++) {
            int a = nums[i];     // Side 1
            int b = nums[i + 1]; // Side 2
            int c = nums[i + 2]; // Side 3

            // Check triangle inequality: a + b > c
            if ((a + b) > c) {
                if (a == b && b == c) {
                    return "equilateral"; // All sides are equal
                } else if (a == b || b == c || c == a) {
                    return "isosceles"; // Any two sides are equal
                } else {
                    return "scalene"; // All sides are different
                }
            }
        }

        // If no valid triangle is found, return "none"
        return "none";
    }
};

int main() {
    // Example test case
    vector<int> nums = {3, 5, 5, 9, 12};

    Solution solution; // Create an instance of the Solution class
    string result = solution.triangleType(nums); // Call the function

    // Output the result
    cout << "Triangle type: " << result << endl;

    return 0;
}

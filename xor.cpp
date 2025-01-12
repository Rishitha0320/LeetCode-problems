#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums(n);
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = start + 2 * i; // Calculate each element in the array
            res = res ^ num;        // XOR with the result
        }
        return res;
    }
};

int main() {
    // Test cases
    int n = 5;       // Number of elements in the array
    int start = 0;   // Starting number

    Solution solution;                   // Create an object of the Solution class
    int result = solution.xorOperation(n, start); // Call the xorOperation function

    // Print the result
    cout << "Result of XOR operation: " << result << endl;

    return 0;
}

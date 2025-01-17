#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        // Base cases for n = 1, 2, or 3
        if (n <= 3) {
            return n; // If n = 1, return 1; If n = 2, return 2; If n = 3, return 3
        }

        int a = 2; // Number of ways to climb 2 steps
        int b = 3; // Number of ways to climb 3 steps
        int sum = 0; // To store the result for each step

        // Loop to calculate the number of ways for steps >= 4
        for (int i = 4; i <= n; i++) {
            sum = a + b; // Sum of ways for (i-2) and (i-1)
            a = b;       // Update a to the previous value of b
            b = sum;     // Update b to the current sum
        }

        return sum; // Return the total number of ways for n steps
    }
};

int main() {
    Solution solution;

    // Test the climbStairs function
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;

    int result = solution.climbStairs(n);
    cout << "Number of distinct ways to climb " << n << " steps: " << result << endl;

    return 0;
}

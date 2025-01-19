#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();  // Get the size of the vector

        // Traverse the digits array from the last element
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {  // If the digit is less than 9, just increment it
                digits[i]++;
                return digits;    // Return the updated vector
            }
            digits[i] = 0;  // If the digit is 9, set it to 0 and continue
        }

        // If all digits were 9, we need to add an additional digit
        digits.insert(digits.begin(), 1);  // Insert 1 at the beginning
        return digits;
    }
};

int main() {
    Solution solution;
    vector<int> digits = {9, 9, 9};  // Example input array

    vector<int> result = solution.plusOne(digits);  // Call the plusOne function

    cout << "Result: ";
    for (int num : result) {  // Print the resulting vector
        cout << num;
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq_val;

        for (int i : nums) {
            freq_val[i]++;
        }

        for (auto it : freq_val) {
            if (it.second > 1) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 2}; // Example input

    if (sol.containsDuplicate(nums)) {
        cout << "Contains duplicate" << endl;
    } else {
        cout << "No duplicate found" << endl;
    }

    return 0;
}

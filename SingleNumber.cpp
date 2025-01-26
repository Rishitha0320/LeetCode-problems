#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> count;
        
        // Counting frequency of each element
        for(int i : nums) {
            count[i]++; // Increase count of element i
        }
        
        // Checking for the element with count 1
        for(const auto& pair : count) {
            if(pair.second == 1) {
                return pair.first; // Return the element which appears once
            }
        }
        
        return -1; // In case no element appears once (which shouldn't happen for valid input)
    }
};

int main() {
    Solution solution;
    
    vector<int> nums = {4, 1, 2, 1, 2};  // Example input
    int result = solution.singleNumber(nums);
    
    cout << "The element that appears only once is: " << result << endl;
    
    return 0;
}

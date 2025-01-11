#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>result;
      for( int no:nums){ //number in nums array
            int squ=no*no; //sq=16 //1 //0 //9 //100
            result.push_back(squ);//[16,1,0,9,100] ->[0,1,9,16,100]
   }
   sort(result.begin(),result.end());
    return result;

    }
};

int main() {
    // Test Input
    vector<int> nums = {-4, -1, 0, 3, 10};

    // Create an instance of the Solution class
    Solution sol;

    // Call the sortedSquares function
    vector<int> result = sol.sortedSquares(nums);

    // Print the result
    cout << "Sorted squares: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        vector<int>arr;
        sort(nums.begin(),nums.end());//sorted array :nums=>(1,2,2,3,5)
        for(int i=0;i<nums.size();i++){

             if(nums[i]==target){ //1==t //2==2 //2==2
                  arr.push_back(i); //[1,2]

             }
            //  else{
            //     return arr; 
            //  }
        }
        return arr;
    }
};
int main() {
    // Example test case
    vector<int> nums = {1, 2, 2, 3, 5};
    int target = 2;
    
    Solution solution;  // Creating an object of Solution class
    vector<int> result = solution.targetIndices(nums, target);  // Calling the method
    
    // Printing the result
    cout << "Indices where target " << target << " is found: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";  // Print each index
    }
    cout << endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0;int sum2=0;
        for(int i=0;i<nums.size();i++){ //i=0
           sum1=sum1+nums[i]; //0+1=1 
        
   while(nums[i]!=0){ //1!=0 //15 //1

           int mod=nums[i]%10;//mod=1 //5 //1
           sum2=sum2+mod;//0+1=1  //1+5=6 //6+1=7
           nums[i]=nums[i]/10;   //==  1/10=0 //1 //0

   }
        }
        
       return sum1-sum2;

    }
};
int main() {
    // Example test case
    vector<int> nums = {1, 15, 6, 3};
    
    
    Solution s;  // Creating an object of Solution class
    int result = s.differenceOfSum(nums);  // Calling the method
    
    // Printing the result
      cout<<"The absolute difference between the element sum and digit sum is "<<result;
  
    
    return 0;
}  // for (int i = 0; i < result.size(); i++) {
    //     cout << result[i] << " ";  // Print each index
    // }
    // cout << endl;
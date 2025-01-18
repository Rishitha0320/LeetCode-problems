
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        
    int l=0;
    int r=nums.size()-1;//l=0;r=3(0,1,2,3)
    
   while(l<=r){
    int mid=l+(r-l)/2;//mid=1 //mid=2+(3-2)=>2+1=>3/2=>1
        if(nums[mid]==t){ //t=5 1) 1==5//false 
             return mid;
        }
        else if(nums[mid]<t){ //1<5 
              l=mid+1;  //l=1+1=2//l=2 
        }
        else{
             r=mid-1;
        }

   }

return l;

    }
};
/*
l=0,r=3;
nums = [1,3,5,6] ;
mid=1
0<=3
1)t=5 ,
mid=2+(3-2)/2=2+(1)/2===>1
nums[mid]==t ,return mid   //1==`5[f]
nums[mid]<t  l=mid+1  // l=2 ,
nums[mid]>t  r=mid-1 // 
return l; //


*/
int main() {
    // Example test case
    vector<int> nums = {1,3,5,6};
    int target1 = 5;
    int target2 = 2;
    int target3 = 7;
    
    Solution solution;  // Creating an object of Solution class
  cout<<  solution.searchInsert(nums, target1)<<"\n";  // Calling the method
  cout<<  solution.searchInsert(nums, target2)<<"\n";  // Calling the method
  cout<<  solution.searchInsert(nums, target3);  // Calling the method
    
    // Printing the result
    // cout << "Indices where target " << target << " is found: ";
   
    
    return 0;
}
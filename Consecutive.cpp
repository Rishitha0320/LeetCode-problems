
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3){ //1<3//2<3 //3<3false

             return false;
        }

      for(int i=0;i<=arr.size()-3;i++){
    
         int a=arr[i]; //7 // 1<=0 //false ends
          int  b=arr[i+1];//8 //
           int  c=arr[i+2];//9

        
    if((a%2==1 && b%2==1) && c%2==1) {
          return true;
    } 

      }

return false;
        
    }
};

int main(){
    Solution s;
    vector<int>arr={7,7,7};
     bool result=s.threeConsecutiveOdds(arr);
     cout<<(result?"true":"false");

}
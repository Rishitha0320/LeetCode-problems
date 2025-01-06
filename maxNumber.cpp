#include<iostream>
using namespace std;


class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
          int x=num+2*t;
          //4+2(1)=6 //3+2(2)=7
           
          return x;


    }
};

int main(){
    Solution s;
    int num;
    int t;
    cout<<"enter num and t";
    cin>>num>>t;
    int res=s.theMaximumAchievableX(num,t);
    cout<<"result is"<<res;
}
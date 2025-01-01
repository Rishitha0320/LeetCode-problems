#include<iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;
             int sum=0;
        while(n!=0){ //n=4421
            
            int mod=n%10;//1 //2 //4 //4
            pro=pro*mod;//1*1=1 //1*2=2 //2*4=8//8*4=32
             sum=sum+mod;//0+1=1//0+2=2//2+4=6//6+4=10
             n=n/10;//442 //44//4//0
        }
        // cout<<pro<<" "<<sum;

        int res=pro-sum;
        // cout<<res;
        return res;
    
    }
};

int main(){
    Solution s;
    int n;
    cout<<"enter num";
    cin>>n;
    int res=s.subtractProductAndSum(n);
    cout<<"result is"<<res;
}


#include<iostream>
using namespace std;

class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i%3==0 || i%5==0 || i%7==0){
            sum=sum+i;
            }
        }
        return sum;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"enter num";
    cin>>n;
    int res=s.sumOfMultiples(n);
    cout<<"result is"<<res;
}
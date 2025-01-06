#include<iostream>
using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum1=0;int sum2=0;
        for(int i=1;i<=n;i++){
            if(i%m!=0){ //1%6!=0 //2 //3 //4//5
                 sum1=sum1+i; //0+1=1 //1+2=3 /3+3=6 //6+4=10 //10+5=15 
            }
            else{
                sum2=sum2+i; //sum2=0
            }

        }
        return sum1-sum2;
    }
};
int main(){
    Solution s;
    int n;
    int m;
    cout<<"enter n and m";
    cin>>n>>m;
    int res=s.differenceOfSums(n,m);
    cout<<"result is"<<res;
}
#include<iostream>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        
      int count=0;int ori=num;
        // if(num%10==0){ //7%10
        //     if(num%num==0){
        //         return ;
        //     }
        // }
     while(num>0){ 

         int mod=num%10;//8 //4 //2 //1
         //121==>121%10=1; //12%10=2
          if(  ori%mod==0){ //1248%8==0 //1248%4==0 //1248%2==0 1248%1==0
          //121%1==0 // 121%2
                 count++; //count=1 //2 //3 //4
          } 
           num=num/10; //124 //12 //1 //0
           

     }

   return count;
    }
};

int main(){
    Solution s;
    int num;
    // int t;
    cout<<"enter num ";
    cin>>num;
    int res=s.countDigits(num);
    cout<<"result is"<<res;
}
#include<iostream>
using namespace std;

// class Solution {
// public:
//     int addDigits(int num) {
      
        
//        while(num >=10){ //38%10!=0//
//           int sum=0;
//        while(num>0){ //(num!=0)bcz we need to add number 3 to 8(8+3=11) to get SUM

//          int mod=num%10; //8 //3 -- //1 //1
//          sum=sum+mod;//0+8 //8+3=11 --//0+1 //1+1=2
//          num=num/10; //3  //0 --1 //0
//         //  num=sum; //num=8//reassign we dont want num=8 to be output
//        }
//           num=sum; // num=11//sum=11; //from inner loop sum=11 -->add this num=11 in outer loop
//           //num=2 //exit outer loop print num
//        }
        
//           return num;
//     }
// };
class Solution {
public:
    int addDigits(int num) {
    
    return num==0 ?0:(num-1)%9+1;
    
    }
};
int main(){
    Solution s;
    int n;
    cout<<"enter num";
    cin>>n;
    int res=s.addDigits(n);
    cout<<"result is"<<res;
}

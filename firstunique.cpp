#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int>charcount;//char in string ,count of each char so int

        for(char ch:s){
            charcount[ch]++; //count every character in string //
           // charcount(s)=3 //charcount of s ijn str is 3
     
        }
     int i=0;
       while(i<s.length()){
         if(charcount[s[i]]==1){
            return i;
         }
         i++;
       }
    return -1;

    }

};

int main(){

 Solution s;

  string str;
  cout<<"enter string";
  cin>>str;
  int res=s.firstUniqChar(str);
  cout<<res;


}
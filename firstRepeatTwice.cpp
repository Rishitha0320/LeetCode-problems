#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    char repeatedCharacter(string s) {
           
        unordered_map<char,int>charcount;//char in string ,count of each char so int

        for(char ch:s){ //str=swiss
            charcount[ch]++; //count every character in string //
           // charcount(s)=1  //initially charcount(s)=1 
            // charcount(w)=1
            // charcount(i)=1
      
         if(charcount[ch]==2){ //now check if s==2 //no s=1 ie,,,charcount(s)=1
              //w=1 //i=1 //s=2
            return ch;//return s
         
        
       
    // return 0;
         }
    }
    return '0';
        }
};

int main(){

 Solution s;

  string str;
  cout<<"enter string";
  cin>>str;
  char res=s.repeatedCharacter(str);
  cout<<res;


}


    
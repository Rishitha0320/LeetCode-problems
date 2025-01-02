#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {

        transform(s.begin(),s.end(),s.begin(),::tolower);
        return s;

    }
};

int main(){
 Solution s;
  string str;
  cout<<"enter string";
  cin>>str;
  string res=s.toLowerCase(str);
  cout<<res;


}
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string str) {
        
    unordered_map<char, int>charcount;
   for(int i=0;i<str.length();i++){
    char ch=tolower(str[i]);
            if(ch!=' ') {
             charcount[ch]=1;
}
           
}  
if(charcount.size()==26) {
     return true;
}

  return false;

// return charcount.size() == 26;

    }
};

int main(){

   Solution s;
   string input;
   cout<<"Enter a string: ";
   getline(cin,input);
       if (s.checkIfPangram(input)) {
        cout << "The string is a pangram (contains all 26 English alphabets)." << endl;
    } else {
        cout << "The string is NOT a pangram." << endl;
    }


}


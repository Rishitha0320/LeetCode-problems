#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int max_words=0;
        for(const auto& sentence:sentences){

            int space_count=count(sentence.begin(),sentence.end(),' ')+1;
                  max_words =max(space_count,max_words);

        }

      return max_words;


    }
};

int main(){

vector<string>stringu={
    "hi i m Rishitha",//3
    "who r u?",//2
    "i hope u r doing gud"//5 
};

Solution s;
int res=s.mostWordsFound(stringu);

cout<<res<<"max words";


}

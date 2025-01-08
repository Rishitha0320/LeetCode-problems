#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> arr;//array created to return the index values 
        int count=0;

   
   for(int i=0;i<words.size();i++){ 
    //word traverse  in str (*LEET(words[i] )
    //words[i]
   // words[0]=='leet')*)
   //traverse word
           for(int j=0;j<words[i].size();j++){ //character traverse 
           //here traverse through leet (4 is size)
                 if(words[i][j]==x){ //words[i]--> words in the array (leet)
                //  (code)
                 //[j]  means character in tat word--> l , e , e ,t
                       arr.push_back(i);
                       break;
                    //  return ;
                 }
           }

    }
    return arr;
    }
};
int main() {
    // Create an instance of Solution
    Solution solution;

    // Test data: Vector of words and the character to search for
    vector<string> words = {"apple", "banana", "cherry", "date"};
    char x = 'a';

    // Call the function to find words containing 'a'
    vector<int> result = solution.findWordsContaining(words, x);

    // Output the result
    cout << "Words containing '" << x << "' are at indices: ";
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

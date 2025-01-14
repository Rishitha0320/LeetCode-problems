#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;int max_element=0;
        for(int i=0;i<accounts.size();i++){//[1,5] -->i=0
            sum=0;
            for(int j=0;j<accounts[i].size();j++){ //1,5 accessing -->[1,5]i=0 
                //i=0,j=0 element 1 //i=0 ,j=1
                  sum=sum+accounts[i][j];//0+1=1//1+5=6
                 
               }
            //    sums_arr.push_back(sum);//store sum in each iteration
            max_element =max(max_element,sum);

        }
         
        //  auto max=max_element(sums_arr.begin(),sums_arr.end());
         return max_element;

    }
    
};

int main() {
    // Create an instance of Solution
    Solution solution;

    // Test data: Vector of words and the character to search for
    vector<vector<int>> accounts ={{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
    

    // Call the function to find words containing 'a'
    int result = solution.maximumWealth(accounts);

    // Output the result
    cout << "cus wealth '" << result;
   

    return 0;
}


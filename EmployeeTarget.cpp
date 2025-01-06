#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
           for(int i:hours){
            if(i >=target){
                count++; //
            }

           }
return count;


    }
};

int main(){
    Solution s;
    int n,target;
    
     cout << "Enter the number of employees: ";
     cin>>n;
    vector<int>hours(n);
    // int t;

        cout << "Enter the hours worked by each employee:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> hours[i]; // Store each input in the vector
    }
    cout << "Enter the target number of hours: ";
    cin >> target;
   
    int res=s.numberOfEmployeesWhoMetTarget(hours,target);
    cout<<"result is"<<res;
}
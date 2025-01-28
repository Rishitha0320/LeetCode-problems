#include <iostream>
#include <vector>
#include <algorithm> // For the swap() function

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0;                  // Left pointer
        int r = s.size() - 1;       // Right pointer
        
        while (l < r) {
            swap(s[l], s[r]);       // Swap the characters at l and r
            l++;                    // Move left pointer to the right
            r--;                    // Move right pointer to the left
        }
    }
};

int main() {
    Solution solution;
    
    // Example 1: Reverse "hello"
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    solution.reverseString(s1);
    cout << "Reversed string: ";
    for (char c : s1) {
        cout << c;
    }
    cout << endl; // Output: "olleh"

    // Example 2: Reverse "Hannah"
    vector<char> s2 = {'H', 'a', 'n', 'n', 'a', 'h'};
    solution.reverseString(s2);
    cout << "Reversed string: ";
    for (char c : s2) {
        cout << c;
    }
    cout << endl; // Output: "hannaH"

    return 0;
}

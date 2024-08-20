//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int longestCommonSubstr(string str1, string str2) {
        int maxLen = 0;  // 'max' is renamed to 'maxLen' to avoid conflict with the function 'max'.
        for(int i = 0; i < str1.length(); i++) {
            for(int j = 1; j <= str1.length() - i; j++) {  // Corrected to use 'str1.length() - i'.
                string subStr = str1.substr(i, j);
                if(str2.find(subStr) != string::npos) {  // 'str2.find()' to search in 'str2'.
                    if(j > maxLen) {
                        maxLen = j;
                    }
                } else {
                    break;  // Stop further checks if the current substring is not found.
                }
            }
        }
        return maxLen;  // Return the length of the longest common substring found.
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends
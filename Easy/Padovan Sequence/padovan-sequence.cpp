//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   int mod = 1e9 + 7 ;
    int padovanSequence(int n) {
        // code here.
        long long t[n] ;
        t[0] = 1 ;
        t[1] = 1 ;
        t[2] = 1 ;
        for(int i = 3;i <= n ;i++){
            t[i] = (t[i-2] + t[i-3])% mod ;
        }
        return t[n] ;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.padovanSequence(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
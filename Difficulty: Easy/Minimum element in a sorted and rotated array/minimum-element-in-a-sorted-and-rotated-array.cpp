//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMin(int arr[], int n) {
        vector<int>vec(arr,arr+n);
        sort(vec.begin(),vec.end());
        return vec[0];
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.findMin(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
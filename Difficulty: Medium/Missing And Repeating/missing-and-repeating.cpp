//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution {
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        unordered_map<int, int> cap;
        vector<int> container(2); 
        for (int i = 0; i < n; i++) {
            cap[arr[i]]++;
        }

        
        for (int i = 1; i <= n; i++) {
            if (cap[i] == 0) {
                container[1] = i;  
            } else if (cap[i] > 1) {
                container[0] = i;  
            }
        }

        return container;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
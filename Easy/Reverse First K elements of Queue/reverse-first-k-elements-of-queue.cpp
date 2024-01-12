//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        //1 2 3 4 5
        vector<int> v;
        for (int i = 0; i < k && !q.empty(); i++){
            v.push_back(q.front());
            q.pop();
        }
        queue<int> newQ;
        for (int i = v.size() - 1; i >= 0; i--){
            newQ.push(v[i]);
        }
        while(!q.empty()){
            newQ.push(q.front());
            q.pop();
        }
        return newQ;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends
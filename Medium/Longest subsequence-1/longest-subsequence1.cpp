//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
 private:
    int findingSubSeq(int indx, int prev, vector<int> &a, int n) {
        if(indx >= n)
            return 0;
        
        int take = 0;
        if(prev == -1 || abs(a[indx]-a[prev]) == 1)
            take = 1 + findingSubSeq(indx+1, indx, a, n);
        
        int notTake = findingSubSeq(indx+1, prev, a, n);
        
        return max(take, notTake);
    }
    
  public:
    int longestSubseq(int n, vector<int> &a) {
        // code here
        int indx = 0, prev = -1;
        return findingSubSeq(indx, prev, a, n);
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> a(n);
        Array::input(a, n);

        Solution obj;
        int res = obj.longestSubseq(n, a);

        cout << res << endl;
    }
}

// } Driver Code Ends
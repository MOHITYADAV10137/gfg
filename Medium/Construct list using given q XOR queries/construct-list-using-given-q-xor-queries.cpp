//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};

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
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        vector<int> ans;
        vector<pair<vector<int>, int>> store;
        bool makenew = false;
        store.push_back({{}, 0});
        store.back().first.push_back(0);
        for(int i = 0; i < q; i++){
            if(queries[i][0] == 0){
                if(makenew){
                    store.push_back({{}, 0});
                    makenew = false;
                }
                store.back().first.push_back(queries[i][1]);
            }
            else{
                store.back().second ^= queries[i][1];
                makenew = true;
            }
        }
        int xorry = 0;
        for(int i = store.size()-1; i >= 0; i--){
            xorry ^= store[i].second;
            for(int v : store[i].first){
                ans.push_back(v^xorry);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int q;
        scanf("%d", &q);

        vector<vector<int>> queries(q, vector<int>(2));
        Matrix::input(queries, q, 2);

        Solution obj;
        vector<int> res = obj.constructList(q, queries);

        Array::print(res);
    }
}

// } Driver Code Ends
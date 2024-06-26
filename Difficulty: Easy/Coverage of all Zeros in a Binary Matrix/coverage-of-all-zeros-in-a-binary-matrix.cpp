//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int solve(vector<vector<int>>& mat, int x, int y, int r, int c) {
        int cnt = 0;
        if(x-1 >= 0 && mat[x-1][y] == 0)
            cnt++;
        if(x+1 < r && mat[x+1][y] == 0)
            cnt++;
        if(y-1 >= 0 && mat[x][y-1] == 0)
            cnt++;
        if(y+1 < c && mat[x][y+1] == 0)
            cnt++;

        return cnt;
    }

    int findCoverage(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int ans = 0;

        for(int i = 0;i < n; i++) {
            for(int j = 0;j < m; j++) {
                if(matrix[i][j] == 1)
                    ans += solve(matrix, i, j, n, m);
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   bool solve(int n,int x,int y,vector<bool>&dp){
      //base case
      //Hum directly jaha jeetshkte hain
      if(n==1||n==x||n==y){
          return dp[n]=true;
      }
      if(dp[n]!=false){
          return dp[n];
      }
      
      //Man liya ki opponent hi jetega;
      bool p =true,q=true,r=true;
      
      //opponent k liye 3no tarike
      if(n>=x){
          p=solve(n-x,x,y,dp);
      }
      if(n>=y){
          q=solve(n-y,x,y,dp);
      }
      if(n>=1){
          r=solve(n-1,x,y,dp);
      }
      
      //agr opponent ek bhi case mai hara tho matlab humjete 
      //tho inital p,q,r ki value(joki true thi) usse check kiya
      return dp[n]=(!p||!q||!r);
  }
    int findWinner(int n, int x, int y) {
        // code here
        vector<bool>dp(n+1,false);
        return solve(n,x,y,dp);
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        Solution obj;
        int res = obj.findWinner(n, x, y);

        cout << res << endl;
    }
}

// } Driver Code Ends
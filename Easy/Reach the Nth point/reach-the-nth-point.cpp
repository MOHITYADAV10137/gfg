//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	int mod = 1e9+7;
	int nthPoint(int n){
		int dp[] ={1,1};
		 for(int i = n-2 ; i>=0 ; i--){ 
		    dp[i&1]=(dp[(i+1)&1]%mod+dp[(i+2)&1]%mod)%mod;
		 }
		 return dp[0];
	}
};
 

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
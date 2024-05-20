//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	 long long int PowMod(long long int x,long long int n,long long int M)
        {
          x=x%M;
          if(n==0)return 1;
          if(n%2==0){
              return PowMod(x*x,n/2,M);
          }
          else{
              return (x*PowMod(x,n-1,M))%M;
          }
        }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
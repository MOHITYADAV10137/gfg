//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	   int ans;
	   int a=2;
	   int b=3;
	  
	   if(N==1)
	  {
	       return 4;
	   }
	   if(N==2)
	   {
	       return 9;
	   }
	     long long int mode =1e9 + 7  ;

	   for(int i=3;i<=N;i++)
	   {
	      ans= (b+a+mode)%mode;
	      a=b;
	      b=ans;
	     }
	      long long total = ((ans%mode)*(ans%mode)) % mode;
	  return total;

	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
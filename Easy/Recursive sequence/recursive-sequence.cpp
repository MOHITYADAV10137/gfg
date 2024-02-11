//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int mod = 1e9+7;
    long long sequence(int N){
        // code her
        int M=1;
        long long int ans=0;
        for(int i=1;i<=N;i++){
            int j=i;
            long long temp=1;
            while(j){
                temp = (temp * M) % mod;
                M++;
                j--;
            }
            ans = (ans + temp) % mod;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends
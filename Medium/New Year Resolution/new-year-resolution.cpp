//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
    
    int f(int ind, int sum, int n, int coins[]){
        if(ind>=n){
            if(sum>0 && (sum%20==0 || sum%24==0 || sum==2024)){
                return 1;
            }
            
            return 0;
        }
        
        return (f(ind+1, sum+coins[ind], n, coins) || f(ind+1, sum, n, coins));
        
    }
    
    int isPossible(int N , int coins[]) 
    {
        return f(0,0,N,coins);
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends
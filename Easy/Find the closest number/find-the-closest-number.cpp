//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        vector<pair<int,int>> store ;
        int mn = INT_MAX ;
        for(int i=0;i<n;i++){
            store.push_back({abs(arr[i]-k) , arr[i]}) ;
            mn = min(mn , abs(arr[i]-k)) ;
        }
        // sort(store.begin() , store.end()) ;
        int ans = 0 ;
        for(int i=0;i<store.size();i++)
            if(store[i].first == mn)
                ans = max(ans , store[i].second) ;
        return ans ;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends
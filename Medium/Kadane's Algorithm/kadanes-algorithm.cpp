//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:

 long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long csum=0;
        long long msum=INT_MIN;
        for(int i=0;i<n;i++){
             csum += arr[i];
        if(csum > msum)  msum = csum;
        if(csum < 0) csum=0;
        }
        return msum;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends
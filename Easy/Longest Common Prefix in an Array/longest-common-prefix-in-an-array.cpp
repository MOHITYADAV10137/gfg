//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
       
        sort(arr,arr+n);
        string str=arr[0];
        string str2=arr[n-1];
        string str3;
        int m=min(str.size(),str2.size());
        for(int i=0;i<m;i++){
            if(str[i]==str2[i]){
                str3+=str[i];
            }
            else{
                break;
            }
        }
        if(str3.size()==0){
            return "-1";
        }
        return str3;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
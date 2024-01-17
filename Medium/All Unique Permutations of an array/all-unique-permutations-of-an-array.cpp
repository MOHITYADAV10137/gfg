//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  set<vector<int>>st;
  void perm(vector<int>temp,int l,int h){
      if(l==h){
          st.insert(temp);
      }
      else{
          for(int i=l;i<=h;i++){
              swap(temp[l],temp[i]);
              perm(temp,l+1,h);
              swap(temp[l],temp[i]);
          }
      }
  }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
    perm(arr,0,n-1);
        vector<vector<int>>ans;
       ans.insert(ans.begin(),st.begin(),st.end());
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
   vector<vector<int>> kTop(vector<int>& a, int n, int k) {
        vector<vector<int>> ans;
        vector<int> v,mp(101,0);
        int z;
        for(int i=0;i<n;i++){
            if(a[i]==0) continue;
            z=a[i];mp[z]++;
            for(int j=0;j<v.size();j++){
                if(a[i]==v[j]){
                    v[j]=z;
                    z=-1;
                    break;
                }
                if(mp[v[j]]>mp[z]) continue;
                if(mp[v[j]]<mp[z]) swap(v[j],z);
                else{
                    if(z<v[j]) swap(v[j],z);
                }
            }
            if(z!=-1&&v.size()<k) v.push_back (z);
            ans.push_back (v);
        }
        return ans;
    }


};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> a(N);
        Array::input(a,N);
        
        Solution obj;
        vector<vector<int>> res = obj.kTop(a, N, K);
        
        for(auto it:res)
            Array::print(it);
        
    }
}

// } Driver Code Ends
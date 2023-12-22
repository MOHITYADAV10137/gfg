//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
     static bool myCompare(pair<int,pair<int,int>>vec1,pair<int,pair<int,int>>vec2)
    {
        if(vec1.first<vec2.first)
        {
            return true;
        }
        else if(vec1.first>vec2.first)
        {
            return false;
        }
        else 
        {
            return vec1.second.second < vec2.second.second;
        }
    }
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<pair<int,pair<int,int>>>vec;
        int n=S.size();
        for(int i=0;i<n;i++)
        {
            vec.push_back({F[i],{S[i],i+1}});
        }
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            return myCompare(a, b);
        });
        vector<int>ans;
        ans.push_back(vec[0].second.second);
        int end=vec[0].first;
        for(int i=1;i<n;i++)
        {
            if(vec[i].second.first>end)
            {
                ans.push_back(vec[i].second.second);
                end=vec[i].first;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
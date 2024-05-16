//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
int ans =0;
    int dfs(vector<int>adj[],int num,int parent){
        if(adj[num].size()==0){
            return 1;
        }
        int count = 0;
        for(auto x : adj[num]){
            if(parent!=x)
            count = count + dfs(adj,x,num);
        }
        if((count+1)%2 == 0){
            ans++;
        }
        return count+1;
    }
    int minimumEdgeRemove(int n, vector<vector<int>>edges){
        vector<int>adj[n+1];
        for(auto x:edges){
           int u = x[0];
           int v = x[1];
           adj[v].push_back(u);
           adj[u].push_back(v);
        }
        dfs(adj,1,-1);
      
        return ans == 0 ? ans: ans-1;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>edges;
		for(int i = 0; i < n-1; i++){
			int x, y;
			cin >> x >> y;
			edges.push_back({x,y});
		}
		Solution obj;
		int ans = obj.minimumEdgeRemove(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}

// } Driver Code Ends
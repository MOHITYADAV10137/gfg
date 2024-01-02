//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
 
void rearrange(int arr[], int n) {
    // code here
    vector<int> pos;
    vector<int> neg;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            pos.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }
    }
    
    int n1=pos.size();
    int n2=neg.size();
    
    int i=0;
    bool res=true;
    
    while(i<n){
        if((i<n1 && i<n2) && res==true && pos.size()!=0){
            ans.push_back(pos[i]);
            res=false;
        }
        if((i<n1 && i<n2) && res==false && neg.size()!=0){
            ans.push_back(neg[i]);
            res=true;
        }
        if(n1>n2 && (i>=n2 && i<n1) && (res==true || res==false)){
            ans.push_back(pos[i]);
        }
        if(n1<n2 && (i>=n1 && i<n2) && (res==true || res==false)){
            ans.push_back(neg[i]);
        }
        
        i++;
    }
    
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
    
   }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
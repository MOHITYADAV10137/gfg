//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
int print2largest(int arr[], int n) {
    sort(arr,arr+n);
    int max1=arr[0];
    int max2=arr[0];
    
      for(int i=0 ; i<n ; i++){
        if(arr[i]>max1)
         max1=arr[i];
      }
      for(int j=0 ; j<n ; j++){
       if(arr[j]>max2 && arr[j]!=max1)
         max2=arr[j];
      }
     if(max2<max1)
     return max2;
  return -1;
  }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
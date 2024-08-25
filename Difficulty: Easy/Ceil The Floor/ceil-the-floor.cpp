//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
       int floorValue =INT_MIN;
       int ceilValue =INT_MAX;
       vector<int>ans;
       
       
       for(int i=0;i<arr.size();i++){
          if( arr[i]<=x && arr[i]>floorValue){
              floorValue=arr[i];
          }
           if(arr[i]>=x && arr[i]<ceilValue){
               ceilValue=arr[i];
            }  
       }
       if(floorValue==INT_MIN)floorValue =-1;
       if(ceilValue==INT_MAX)ceilValue =-1;
       
       
       ans.push_back(floorValue);
       ans.push_back(ceilValue);
       return ans ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution{
public:
vector<int> constructLowerArray(vector<int>arr) {
    // code here
   vector<int> ans;
    int n= arr.size();
    vector<int> temp;
    
        for(int i=0;i<n;i++){
            temp.push_back(arr[i]);
        }
        
        sort(temp.begin(),temp.end());
        
        for(int i=0;i<n;i++){
            //using binary search for finding the index of ith element of original array
            int index=lower_bound(temp.begin(),temp.end(),arr[i])-temp.begin();
            ans.push_back(index);
            //removing the element, so that the right-side for any ith element doesn't exist
            temp.erase(temp.begin()+index);
        }
        return ans;
 
}
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
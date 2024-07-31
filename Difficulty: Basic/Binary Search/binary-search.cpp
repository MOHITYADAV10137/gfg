//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        
        while (s <= e) {
            int mid = s + (e - s) / 2;  // Corrected mid calculation
            
            if (arr[mid] == k) {
                return mid;
            }
            if (arr[mid] < k) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        
        return -1;  // Return -1 if the element is not found
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int res = ob.binarysearch(arr, k);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends
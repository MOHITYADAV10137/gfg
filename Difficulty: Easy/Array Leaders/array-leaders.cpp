//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    // Function to find the leaders in the array.
  public:
     vector<int> leaders(int n, int arr[]) {
        vector<int> leader;
        int max_right = arr[n-1];
        leader.push_back(max_right); 

        for(int i = n-2; i >= 0; i--) {
            if (arr[i] >= max_right) {
                max_right = arr[i];
                leader.push_back(max_right);
            }
        }
        reverse(leader.begin(), leader.end());
        return leader;
    }
};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t; // testcases
    while (t--) {
        long long n;
        cin >> n; // total size of array

        int arr[n];

        // inserting elements in the array
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        // calling leaders() function
        vector<int> v = obj.leaders(n, arr);

        // printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it << " ";
        }

        cout << endl;
    }
}

// } Driver Code Ends
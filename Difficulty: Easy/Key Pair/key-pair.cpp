//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    // Function to check if array has 2 elements
    // whose sum is equal to the given value
    bool hasArrayTwoCandidates(vector<int>& arr, int x) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int i = 0;
        int j = n - 1; // Adjusted to point to the last element
        
        while (i < j) {
            int sum = arr[i] + arr[j];
            
            if (sum == x) {
                return true; // If the sum is found, return true
            }
            else if (sum < x) {
                i++; // Move the left pointer to increase the sum
            }
            else {
                j--; // Move the right pointer to decrease the sum
            }
        }
        
        return false; // If no pair is found, return false
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--) {
        int x;
        cin >> x;
        cin.ignore(); // To discard any leftover newline characters

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, x);
        cout << (ans ? "true" : "false") << endl;
    }

    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    // Returns the count of buildings that can see sunlight
    int countBuildings(vector<int>& height) {
        if (height.empty()) return 0; // Edge case: no buildings

        int count = 1; // First building can always see sunlight
        int maxHeight = height[0]; // Keep track of the tallest building

        // Loop through buildings starting from the second one
        for (int i = 1; i < height.size(); i++) {
            if (height[i] > maxHeight) {
                count++; // This building can see sunlight
                maxHeight = height[i]; // Update the max height
            }
        }

        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> height;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            height.push_back(number);
        }
        Solution ob;
        int ans = ob.countBuildings(height);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
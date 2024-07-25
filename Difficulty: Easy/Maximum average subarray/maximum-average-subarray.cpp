//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {   
public:
    int findMaxAverage(int arr[], int n, int k) {
        int i = 0;
        int j = k - 1;
        int sum = 0;
        int maxValue = INT_MIN;
        int maxIndex = 0;

        // Calculate the initial sum of the first 'k' elements
        for (int y = i; y <= j; y++) {
            sum += arr[y];
        }
        maxValue = sum;

        // Use sliding window technique
        for (j = k; j < n; j++) {
            sum = sum + arr[j] - arr[i];
            i++;
            if (sum > maxValue) {
                maxValue = sum;
                maxIndex = i;
            }
        }

        return maxIndex;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
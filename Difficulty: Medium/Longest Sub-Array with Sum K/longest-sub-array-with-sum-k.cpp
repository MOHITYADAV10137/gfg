//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int lenOfLongSubarr(int A[], int N, int K) 
    { 
        unordered_map<int, int> sumMap; // Map to store (sum, index)
        int sum = 0; // Variable to store the cumulative sum
        int maxLen = 0; // Variable to store the maximum length of subarray

        for (int i = 0; i < N; i++) {
            sum += A[i]; // Add current element to the cumulative sum

            // If sum equals K, update maxLen
            if (sum == K) {
                maxLen = i + 1;
            }

            // If sum - K is found in the map, it means there is a subarray with sum K
            if (sumMap.find(sum - K) != sumMap.end()) {
                maxLen = max(maxLen, i - sumMap[sum - K]);
            }

            // Store sum and index in the map if sum is not already present
            if (sumMap.find(sum) == sumMap.end()) {
                sumMap[sum] = i;
            }
        }

        return maxLen; // Return the length of the longest subarray with sum K
    }
};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
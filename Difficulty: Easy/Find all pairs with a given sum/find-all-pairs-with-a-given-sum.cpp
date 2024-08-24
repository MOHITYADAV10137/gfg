//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    std::vector<std::pair<int, int>> allPairs(int x, const std::vector<int> &arr1, const std::vector<int> &arr2) {
        std::vector<std::pair<int, int>> result;
        std::vector<std::pair<int, int>> allPairs;
        
        // Generate all possible pairs
        for (int i = 0; i < arr1.size(); ++i) {
            for (int j = 0; j < arr2.size(); ++j) {
                if (arr1[i] + arr2[j] == x) {
                    allPairs.push_back({arr1[i], arr2[j]});
                }
            }
        }

        // Sort and remove duplicates
        std::sort(allPairs.begin(), allPairs.end());
        auto last = std::unique(allPairs.begin(), allPairs.end());
        allPairs.erase(last, allPairs.end());

        return allPairs;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr1;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }
        vector<int> arr2;
        string input2;
        getline(cin, input2); // Read the entire line for the array elements
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            arr2.push_back(number2);
        }

        Solution ob;
        vector<pair<int, int>> vp = ob.allPairs(x, arr1, arr2);
        int sz = vp.size();
        if (sz == 0)
            cout << -1 << endl;
        else {
            for (int i = 0; i < sz; i++) {
                if (i == 0)
                    cout << vp[i].first << " " << vp[i].second;
                else
                    cout << ", " << vp[i].first << " " << vp[i].second;
            }
            cout << endl;
        }
    }

    return 0;
}
// } Driver Code Ends
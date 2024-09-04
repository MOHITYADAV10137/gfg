//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void sortIt(vector<long long>& arr) {
       int i = 0;
       vector<long long> container;   // Even numbers
       vector<long long> container2;  // Odd numbers
       
       // Separating even and odd numbers
       while (i < arr.size()) {
           if (arr[i] % 2 == 0) {
               container.push_back(arr[i]); 
           } else {
               container2.push_back(arr[i]);
           }
           i++;
       }
       
       // Sorting the even numbers
       sort(container.begin(), container.end());
       
       // Sorting the odd numbers
       sort(container2.begin(), container2.end(), greater<long long>());
       
       // Merging the two sorted vectors (even numbers first, then odd numbers)
       arr.clear();
       arr.insert(arr.end(), container2.begin(), container2.end());
       arr.insert(arr.end(), container.begin(), container.end());
    }
};



//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        long long number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.sortIt(arr);

        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        unordered_map<int ,int>count;
        for(int i=0;i<n;i++)
        {
            count[a[i]]++;
        }
        int i=0;
        while(count[0]--)
        {
            a[i++]=0;
        }
        while(count[1]--)
        {
            a[i++]=1;
        }
        while(count[2]--)
        {
            a[i++]=2;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends
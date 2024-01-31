//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n==1) return 1;
    
        long long sum1=0; long long sum2=0; int s=0,e=n-1;
        while(s<e){
            if(sum1<sum2){
                sum1+=a[s++];
            }
            if(sum2<sum1){
                sum2+=a[e--];
            }
            if(sum1==sum2){
                sum1+=a[s++];
                sum2+=a[e--];
            }
        }
        if(sum1==sum2) return s;
        return -1;
    }

};


//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
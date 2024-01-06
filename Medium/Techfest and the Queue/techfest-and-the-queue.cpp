//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include <cmath>

class Solution {
public:
    int sumOfPowers(int a, int b) 
    {
        int sum = 0;
        for (int i = a; i <= b; ++i)
        {
            int p = 2;
            int j = i;
            while (sqrt(j) >= p) 
            {
                if (j % p == 0) 
                {
                    sum++;
                    j /= p;
                } else 
                {
                    p++;
                }
            }
            if (j != 1) 
            {
                sum++;
            }
        }
        return sum;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
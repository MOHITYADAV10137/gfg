//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        if(s.length() == 0) return -1;
        //Your code here
        int sign = (s[0] == '-' ? -1:1); 
        int ans = 0;
        if(sign > 0) ans = s[0] - '0';
        for(int i=1; i<s.length(); i++){
            int temp = s[i] - '0';
            if(temp >= 0 && temp <= 9)
                ans = ans * 10 + temp;
            else
                return -1;
        }
        return ans * sign;
    }
};

 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends
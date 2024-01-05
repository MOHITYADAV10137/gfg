//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int findIndex(string str) {
        // Your code goes here   
        int o=0,c=0;
        
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==')')
            c++;
        }
        
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(')
            o++;
            
            else
            c--;
            
            if(o==c)
            return i+1;
        }
        return 0;
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
		cout<<ob.findIndex(s)<<endl;
	}
}
// } Driver Code Ends
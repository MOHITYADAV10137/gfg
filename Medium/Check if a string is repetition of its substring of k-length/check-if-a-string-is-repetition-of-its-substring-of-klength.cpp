//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int kSubstrConcat (int n, string& s, int k)
    {
        if(n%k!=0) return 0;
        size_t size(0);
        map<string, int> mp;
        string temp = "";
        for(int i=0; i<n; i++){
            size++;
            temp += s[i];
            if(size == k) {
                mp[temp]++;
                size=0;
                temp=""; 
            }
        }
        // for k=2 and n even
        // first test case --- all are same like 'ababab'
        // second test case --- if there are two unique elements one or both of them should have a count of one
        // like  'ababcdab' here just 'cd' is different
        // third test case
        // if a string has two unique elements like"abcdabcd" having appearances both 2 we should discard it
        
        if(mp.size()==1) return 1;
        int c(0);
        for(auto x: mp){
            if(x.second==1) c++;
        }
        if(c==1 || c==2) return 1;
        return 0;
    }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		int k; cin >> k;
        Solution  ob;
		cout << ob.kSubstrConcat (n, s, k) << endl;
	}
}
// } Driver Code Ends
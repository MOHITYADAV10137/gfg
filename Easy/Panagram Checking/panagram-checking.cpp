//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  private:
    const int ALPHABETS = 26;
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        int alphabets = 0;
        for(char ch : s){
            ch = tolower(ch);
            if(isalpha(ch)){
                alphabets|=(1<<(ch-'a'));
            }
        }
        return alphabets == (1<<ALPHABETS) - 1;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends
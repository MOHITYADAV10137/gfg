//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    
    bool matchFound(string w,int i,string p,int j){
        bool flag=false;
        while((i<w.length())&&(j<p.length())){
            //iterate both pointers if entry matches or a ? is present in wild string
            if((w[i]==p[j])||(w[i]=='?')){
                i++;
                j++;
            }
            //if * is present then we need to search for possible values it can take
            else if(w[i]=='*'){
                //if we are at last of string then return true
                if(i==w.length()-1) return true;
                int ct=0;
                //count ? in consecutive string of * and ?
                while((w[i]=='?')||(w[i]=='*')){
                    if(w[i]=='?') ct++;
                    i++;
                }
                //skip that much characters in pattern string
                j+=ct;
                while(j<p.length()){
                    //recursively find the possible values of * and if its possible then update flag
                    if(p[j]==w[i]) flag = flag||matchFound(w,i,p,j);
                    j++;
                }
                //after this whole return flag
                return flag;
            }
            else{
                //if characters does not match then return false
                //this also acts as a base condition for our recursive code
                return false;
            }
        }
        //both pointers should be at last simultaneously
        //except the case when there is * at last of wild string
        if((j<p.length())||(i<w.length())) return false;
        
        //return true at last.
        return true;
    }
    
    
    
    bool match(string wild, string pattern)
    {   //check whether there are more charcters in wild string than pattern
        int ct=0;
        for(int i=0;i<wild.length();i++){
            if(wild[i]!='*') ct++;
        }
        //if yes then return false
        if(ct>pattern.length()) return false;
        
        //finally return the ans returned by above recursive function
        return matchFound(wild,0,pattern,0);
    }
};

 

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends
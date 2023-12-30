//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GfG
{
    public static void main (String[] args)
    {
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            String arr[] = new String[n];
            
            for(int i = 0; i < n; i++)
                arr[i] = sc.next();
            
            Solution obj = new Solution();    
            String result[] = obj.winner(arr, n);
            System.out.println(result[0] + " " + result[1]);
            
           
        }
        
    }
}

// } Driver Code Ends


//User function Template for Java


class Solution
{
    //Function to return the name of candidate that received maximum votes.
    public static String[] winner(String arr[], int n)
    {
        // add your code

        Map<String , Integer> map = new HashMap<>();
        
        int max = 0 ;
        for(int i = 0;i<n;i++){
            map.put(arr[i],map.getOrDefault(arr[i],0)+1);
            max = Math.max(max, map.get(arr[i]));
        }
   
        
        String[] temp = new String [2];
        temp[1] = "ab";
        for(int i =0 ;i<n;i++){
            if(map.get(arr[i])==max && temp[1].equals("ab")){
                temp[0] = arr[i];
                temp[1] = max+"";
            } else if(map.get(arr[i])==max && temp[0].compareTo(arr[i])>0 ){
                temp[0]= arr[i];
            }
        }
        return temp;
        
    }
}




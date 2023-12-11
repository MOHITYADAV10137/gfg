//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());
            String St[] = read.readLine().split(" ");
            int[] A = new int[N];
            
            for(int i=0 ; i<N ; i++)
                A[i] = Integer.parseInt(St[i]);

            Solution ob = new Solution();
            System.out.println(ob.mean(N,A));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    static int mean(int N , int[] A) {
       int sum =0;
       for (int i=0;i<N;i++)
       sum =sum+A[i];
       {
         
           return sum/N;
       }
    }
};
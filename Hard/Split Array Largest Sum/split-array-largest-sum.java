//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            
            String St[] = read.readLine().split(" ");
            
            int N = Integer.parseInt(St[0]);
            int K = Integer.parseInt(St[1]);
            
            String S[] = read.readLine().split(" ");
            
            int[] arr = new int[N];
            
            for(int i=0 ; i<N ; i++)
                arr[i] = Integer.parseInt(S[i]);

            Solution ob = new Solution();
            System.out.println(ob.splitArray(arr,N,K));
        }
    }
}
// } Driver Code Ends


class Solution {
    static int splitArray(int[] arr , int N, int K) {
        // code here
        int l =0, h = 0;
        int min = Integer.MAX_VALUE;
        for(int i = 0; i < N; i++){
            l = Math.max(l, arr[i]);
            h += arr[i];
        }
        while(l <= h){
            int m = l + (h - l)/ 2;
            if(required(arr, m, K)){
                min = Math.min(min, m);
                h = m - 1;
            }
            else{
                l = m + 1;
            }
        }
        return min;
    }
    private static boolean required(int[] arr, int m, int K){
        int chunks = 0;
        int i = 0;
        while(i < arr.length){
            int val = 0;
            while(i < arr.length && arr[i] + val <= m){
                val += arr[i];
                i++;
            }
            chunks++;
        }
        return chunks <= K;
    }
};
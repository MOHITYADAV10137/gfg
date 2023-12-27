//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            int n = Integer.parseInt(br.readLine().trim());
            
            String input_line[] = br.readLine().trim().split("\\s+");
            int[][] matrix = new int[n][n];
            for(int i=0; i<n; i++) {
                for (int j = 0; j < n; ++j) {
                    matrix[i][j] = Integer.parseInt(input_line[i * n + j]); 
                }
            }
            Solution obj = new Solution();
            int[] ans = obj.antiDiagonalPattern(matrix);
            for(int i = 0; i < ans.length; i++)
                System.out.print(ans[i] + " ");
            System.out.println();
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    public int[] antiDiagonalPattern(int[][] matrix)
    {
        // Code here
        int[][] arr = new int[matrix.length][matrix.length];
        int [] res = new int[matrix.length*matrix.length];
        int k = 0;
        for(int i=0;i<arr.length;i++){
            for(int j = 0; j<arr[i].length;j++){
                arr[i][j] = -1;
            }
        }
        Queue<int []> q = new LinkedList<>();
        q.add(new int[]{0,0});
        while(!q.isEmpty()){
            int[]U = q.poll();
            int i = U[0];
            int j = U[1];
            
            if(i<matrix.length &&j < matrix.length && i >= 0 &&  j >= 0 && arr[i][j] == -1){
                q.add(new int[]{i,j+1});
                q.add(new int[]{i+1,j});
                arr[i][j] = 1;
                res[k] = matrix[i][j];
                k++;
            }
        }
        return res;
    }
}
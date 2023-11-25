//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String[] str = br.readLine().trim().split(" ");
            int[] array = new int[n - 1];
            for (int i = 0; i < n - 1; i++) {
                array[i] = Integer.parseInt(str[i]);
            }
            Solution sln = new Solution();
            System.out.println(sln.missingNumber(array, n));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    int missingNumber(int array[], int n) {
    
               int expectedSum = (n * (n + 1)) / 2;

        int actualSum = 0;
        for (int num : array) {
            actualSum += num;
        }

        int missingNumber = expectedSum - actualSum;

        return missingNumber;
    }

    public static void main(String[] args) {
        Solution solution = new Solution(); 

        
        int N1 = 5;
        int[] arr1 = {1, 2, 3, 5};
        System.out.println(solution.missingNumber(arr1, N1)); 

        int N2 = 10;
        int[] arr2 = {6, 1, 2, 8, 3, 4, 7, 10, 5};
        System.out.println(solution.missingNumber(arr2, N2)); 
    }
}
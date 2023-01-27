// QUESTION URL: https://www.hackerrank.com/challenges/java-loops/problem
// STATUS: Accepted

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int result = a;
            int value = 1;                          
            for (int j = 1; j <= n; j++){
                result = result + value * b;
                value *= 2;
                System.out.print(result + " ");
            }
            System.out.println("");
        }
        
        
    }
}

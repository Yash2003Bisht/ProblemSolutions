// QUESTION URL: https://www.hackerrank.com/challenges/java-loops-i/problem
// STATUS: Accepted

import java.util.Scanner;

public class Solution{
    public static void main(String[] args){
        int n = new Scanner(System.in).nextInt();
        for (int i = 1; i <= 10; i++){
            System.out.printf("%d x %d = %d\n", n, i, n*i);
        }
    }
}

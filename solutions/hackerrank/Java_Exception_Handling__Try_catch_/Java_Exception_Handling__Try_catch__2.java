// QUESTION URL: https://www.hackerrank.com/challenges/java-exception-handling-try-catch/problem
// STATUS: Wrong Answer

import java.util.Scanner;

public class Solution{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println(a / b);
        } catch (Exception e){
            System.out.println(e);
        }
    }
}

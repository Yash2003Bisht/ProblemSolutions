// QUESTION URL: https://www.hackerrank.com/challenges/java-exception-handling-try-catch/problem
// STATUS: Accepted

import java.util.Scanner;
import java.util.InputMismatchException;

public class Solution{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try{
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println(a / b);
        } catch (InputMismatchException error){
            System.out.println("java.util.InputMismatchException");
        } catch (Exception error){
            System.out.println(error);
        }
    }
}

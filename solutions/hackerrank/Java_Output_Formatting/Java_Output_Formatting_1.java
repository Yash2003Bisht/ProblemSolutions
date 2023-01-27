// QUESTION URL: https://www.hackerrank.com/challenges/java-output-formatting/problem
// STATUS: Accepted

import java.util.Scanner;

public class chck{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("================================");
        for (int i=0; i<3; i++){
            String s1 = sc.next();
            String x = sc.next();
            if (x.length() <= 3){
                x = "0".repeat(3 - x.length()) + x;
            }
            System.out.printf("%-14s %s\n", s1, x);
        }
        System.out.println("================================");
    }
}

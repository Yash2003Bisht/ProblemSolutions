// QUESTION URL: https://www.hackerrank.com/challenges/java-interface/problem
// STATUS: Accepted

import java.util.Scanner;
import java.lang.Math;

public class Solution{
    public static void main(String[] args){
        MyCalculator myCalculator = new MyCalculator();
        Scanner sc = new Scanner(System.in);
        System.out.println(myCalculator.divisor_sum(sc.nextInt()));
    }
}

interface AdvancedArithmetic{
    int divisor_sum(int n);
}

class MyCalculator implements AdvancedArithmetic{
    public int divisor_sum(int n){
        int result = 0;
        for(int i = 1; i <= n; i++){
            if( n%i == 0){
                result += i;
            }
        }
        System.out.println("I implemented: AdvancedArithmetic");
        return result;
    }
}

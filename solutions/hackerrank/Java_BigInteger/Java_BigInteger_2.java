// QUESTION URL: https://www.hackerrank.com/challenges/java-biginteger/problem
// STATUS: Runtime Error

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        BigInteger a = BigInteger.valueOf(sc.nextLong());
        BigInteger b = BigInteger.valueOf(sc.nextLong());
        System.out.println(a.add(b));
        System.out.println(a.multiply(b));
    }
}

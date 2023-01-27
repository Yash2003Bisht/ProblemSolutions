// QUESTION URL: https://www.hackerrank.com/challenges/java-string-reverse/problem
// STATUS: Accepted

import java.io.*;
import java.util.*;

public class Solution {
    
    public static void main(String[] args) {
        String s = new Scanner(System.in).next();
        String reverse_s = new StringBuilder(s).reverse().toString();
        if (s.equals(reverse_s)){
            System.out.println("Yes");
        } else{
            System.out.println("No");
        }
    }
}

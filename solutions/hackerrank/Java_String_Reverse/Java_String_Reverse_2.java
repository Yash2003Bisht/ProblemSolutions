// QUESTION URL: https://www.hackerrank.com/challenges/java-string-reverse/problem
// STATUS: Accepted

import java.io.*;
import java.util.*;

public class Solution {
    public static String reverse(String s){
        String new_s = "";
        for (int i = s.length() - 1; i >= 0; i--){
            new_s += s.charAt(i);
        }
        return new_s;
    }
    public static void main(String[] args) {
        String s = new Scanner(System.in).next();
        String reverse_s = reverse(s);
        if (s.equals(reverse_s)){
            System.out.println("Yes");
        } else{
            System.out.println("No");
        }
    }
}

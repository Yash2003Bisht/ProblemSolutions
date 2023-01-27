// QUESTION URL: https://www.hackerrank.com/challenges/java-int-to-string/problem
// STATUS: Accepted

import java.util.*;

public class Solution {

    public static void main(String[] args) {
        String s = new Scanner(System.in).nextLine();
        try{
            int v = Integer.parseInt(s);
            System.out.println("Good job");
        } catch(Exception e){
            System.out.println("Wrong answer");
        }
    }
}

// QUESTION URL: https://www.hackerrank.com/challenges/java-stdin-and-stdout-1/problem
// STATUS: Accepted

import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        for (int i = 0; i < 3; i++){
            int a = scan.nextInt();
            System.out.println(a);
        }
        // Complete this line
        scan.close();
    }
}

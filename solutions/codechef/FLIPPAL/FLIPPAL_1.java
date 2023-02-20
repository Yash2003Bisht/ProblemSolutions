// DATE: 14/10/2022, 06:55:03
// PROBLEM NAME: Palindrome Flipping
// PROBLEM URL: https://www.codechef.com/problems/FLIPPAL
// PROBLEM DIFFICULTY RATTING: 1173
// STATUS: accepted
// TIME: 0.51
// MEMORY: 91.3M

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            int one = 0;
            int zero = 0;

            for (int j = 0; j < n; j++) {
                if (s.charAt(j) == '0')
                    zero++;
                else
                    one++;
            }

            if (zero % 2 == 0 || one % 2 == 0)
                System.out.println("YES");
            else
                System.out.println("NO");

        }
    }
}



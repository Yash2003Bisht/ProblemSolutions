// QUESTION URL: https://www.codechef.com/problems/FLIPPAL
// STATUS: accepted

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            int one = 0;
            int zero = 0;

            for (int j = 0; j < n; j++) {
                if (s.charAt(j) == '0') {
                    zero++;
                } else {
                    one++;
                }
            }

            if (zero % 2 == 0 || one % 2 == 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }

        }
    }
}



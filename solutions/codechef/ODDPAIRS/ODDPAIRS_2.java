// QUESTION URL: https://www.codechef.com/problems/ODDPAIRS
// STATUS: accepted
// TIME: 0.10
// MEMORY: 54.8M

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class CodeChef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (long i = 0; i < t; i++){
            long n = sc.nextInt();
            System.out.println(2*((n+1)/2)*(n/2));
        }
    }
}



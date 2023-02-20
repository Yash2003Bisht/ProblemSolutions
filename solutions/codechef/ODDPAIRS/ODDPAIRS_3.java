// DATE: 25/08/2022, 05:58:22
// PROBLEM NAME: Odd Pairs
// PROBLEM URL: https://www.codechef.com/problems/ODDPAIRS
// PROBLEM DIFFICULTY RATTING: 1044
// STATUS: wrong answer
// TIME: 0.08
// MEMORY: 53.7M

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for (int i = 0; i < t; i++){
		    int n = sc.nextInt();
		    System.out.println(2*((n+1)/2)*(n/2));
		}
	}
}



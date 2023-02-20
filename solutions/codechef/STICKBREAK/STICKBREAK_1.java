// DATE: 12/12/2022, 06:12:58
// PROBLEM NAME: Stick Break
// PROBLEM URL: https://www.codechef.com/problems/STICKBREAK
// PROBLEM DIFFICULTY RATTING: 1123
// STATUS: accepted
// TIME: 0.43
// MEMORY: 77.6M

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
		int t, k, l;
		t = sc.nextInt();
		
		while(t-->0){
		    l = sc.nextInt();
		    k = sc.nextInt();
		    
		    if (l%k == 0){
		        System.out.println(0);
		    } else{
		        System.out.println(1);
		    }
		}
		
	}
}



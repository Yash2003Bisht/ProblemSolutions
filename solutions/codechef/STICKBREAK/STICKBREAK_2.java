// DATE: 12/12/2022, 06:11:37
// PROBLEM NAME: Stick Break
// PROBLEM URL: https://www.codechef.com/problems/STICKBREAK
// PROBLEM DIFFICULTY RATTING: 1123
// STATUS: wrong answer
// TIME: 0.08
// MEMORY: 53.9M

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
		    
		    if (k%l == 0){
		        System.out.println(0);
		    } else{
		        System.out.println(1);
		    }
		}
		
	}
}



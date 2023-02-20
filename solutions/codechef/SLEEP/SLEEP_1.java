// DATE: 24/09/2022, 06:08:46
// PROBLEM NAME: Sleep deprivation
// PROBLEM URL: https://www.codechef.com/problems/SLEEP
// PROBLEM DIFFICULTY RATTING: 348
// STATUS: accepted
// TIME: 0.08
// MEMORY: 53.8M

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
		//sc.nextLine();
		for (int i=0; i<t; i++){
		    int x = sc.nextInt();
		    //sc.nextLine();
		    if (x < 7){
		        System.out.println("YES");
		    } else{
		        System.out.println("NO");
		    }
		}
	}
}



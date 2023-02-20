// DATE: 22/07/2022, 06:45:06
// PROBLEM NAME: True and False Paper
// PROBLEM URL: https://www.codechef.com/problems/TFPAPER
// PROBLEM DIFFICULTY RATTING: 398
// STATUS: accepted
// TIME: 0.25
// MEMORY: 52.1M

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
	    int T = sc.nextInt();
	    sc.nextLine();
	    for(int i = 0; i < T; i++){
	        int[] n_k = Arrays.stream(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
	        System.out.println(n_k[0] - n_k[1]);
	    }
	}
}



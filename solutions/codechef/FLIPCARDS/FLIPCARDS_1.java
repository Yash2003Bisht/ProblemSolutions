// DATE: 24/09/2022, 07:01:37
// PROBLEM NAME: Flip the cards
// PROBLEM URL: https://www.codechef.com/problems/FLIPCARDS
// PROBLEM DIFFICULTY RATTING: 641
// STATUS: accepted
// TIME: 0.27
// MEMORY: 66.3M

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
		sc.nextLine();
		for (int i=0; i<t; i++){
		    int[] data = Arrays.stream(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		    int x = data[0] - data[1];
		    System.out.println(Math.min(x, data[1]));
		}
	}
}



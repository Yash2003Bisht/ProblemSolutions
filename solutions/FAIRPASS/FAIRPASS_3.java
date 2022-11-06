// QUESTION URL: https://www.codechef.com/problems/FAIRPASS
// STATUS: wrong answer

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
		int[] NK = Arrays.stream(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
		if(NK[1] >= NK[0]+1){
		    System.out.println("Yes");
		} else{
		    System.out.println("No");
		}
	}
}



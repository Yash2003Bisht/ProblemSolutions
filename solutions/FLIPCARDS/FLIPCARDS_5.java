// QUESTION URL: https://www.codechef.com/problems/FLIPCARDS

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
		    if (data[0]==data[1] || (data[0]==0 || data[1]==0)){
		        System.out.println(0);
		    } else if (data[0] > data[1]){
		        System.out.println(data[1]);
		    } else{
		        System.out.println(data[0]);
		    }
		}
	}
}



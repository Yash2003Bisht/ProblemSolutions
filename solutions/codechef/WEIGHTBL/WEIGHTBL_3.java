// QUESTION URL: https://www.codechef.com/problems/WEIGHTBL
// STATUS: accepted
// TIME: 0.82
// MEMORY: 125.3M

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
        for (int i = 0; i < t; i++){
            int[] array = Arrays.stream(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            if (array[1]-array[0] >= array[2]*array[4] && array[1]-array[0] <= array[3]*array[4]){
                System.out.println(1);
            }else{
                System.out.println(0);
            }
        }
	}
}



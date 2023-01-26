// QUESTION URL: https://www.codechef.com/problems/CHSERVE
// STATUS: accepted
// TIME: 0.85
// MEMORY: 128.4M

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
		
		while (t-->0){
		    int p1 = sc.nextInt();
		    int p2 = sc.nextInt();
		    int k = sc.nextInt();
		    
		    if ( ( (p1+p2)/k ) % 2 == 0 ){
		        System.out.println("CHEF");
		    } else{
		        System.out.println("COOK");
		    }
		    
		    
		}
	}
}



// QUESTION URL: https://www.codechef.com/problems/COVID_19
// STATUS: accepted

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t-- > 0){
		    int n = sc.nextInt();
		    int m = sc.nextInt();

		    System.out.println(((n%2) + (n/2)) * ((m%2) + (m/2)));
		}
	}
}



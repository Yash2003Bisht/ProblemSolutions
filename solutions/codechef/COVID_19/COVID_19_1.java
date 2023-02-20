// DATE: 03/11/2022, 06:37:42
// PROBLEM NAME: Covid and Theatre Tickets
// PROBLEM URL: https://www.codechef.com/problems/COVID_19
// PROBLEM DIFFICULTY RATTING: 1077
// STATUS: accepted
// TIME: 0.10
// MEMORY: 54.2M

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



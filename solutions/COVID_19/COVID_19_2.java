// QUESTION URL: https://www.codechef.com/problems/COVID_19

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
		    
		    int total_rows = (n%2) + (n/2);
		    int total_seats_each_row = (m%2) + (m/2);
		    
		    System.out.println(total_rows * total_seats_each_row);
		}
	}
}



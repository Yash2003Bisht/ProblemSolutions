// DATE: 25/07/2022, 04:32:13
// PROBLEM NAME: Age Limit
// PROBLEM URL: https://www.codechef.com/problems/AGELIMIT
// PROBLEM DIFFICULTY RATTING: 245
// STATUS: accepted
// TIME: 0.23
// MEMORY: 47.1M

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int t = sc.nextInt();
	    sc.nextLine();
	    for (int i = 0; i < t; i++){
	        int[] data = Arrays.stream(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
	        if(data[2] >= data[0] && data[2] < data[1]){
	            System.out.println("YES");
	        } else{
	            System.out.println("NO");
	        }
	    }
	}
}



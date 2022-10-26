// QUESTION URL: https://www.codechef.com/problems/AGELIMIT

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



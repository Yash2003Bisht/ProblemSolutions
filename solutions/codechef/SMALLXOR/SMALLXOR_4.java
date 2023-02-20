// DATE: 13/08/2022, 07:22:27
// PROBLEM NAME: XOR with smallest element
// PROBLEM URL: https://www.codechef.com/problems/SMALLXOR
// PROBLEM DIFFICULTY RATTING: 1635
// STATUS: accepted
// TIME: 0.81
// MEMORY: 128.3M

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();
        int t = sc.nextInt();
        while (t > 0){
            int n = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();
            int[] array = new int[n];
            for (int i = 0; i < n; i++){
                priorityQueue.add(sc.nextInt());
            }
            while (y > 0){
                int minimum = priorityQueue.peek();
                if ((minimum ^ x) > minimum){
                    priorityQueue.remove();
                    priorityQueue.add(minimum^x);
                    y--;
                } else{
                    if ((y & 1) == 0){
                        break;
                    } else{
                        priorityQueue.remove();
                        priorityQueue.add(minimum^x);
                        break;
                    }
                }
            }
            int q = 0;
            while(!priorityQueue.isEmpty()){
                array[q++] = priorityQueue.remove();
            }
            for(int i: array){
                System.out.print(i + " ");
            }
            System.out.println();
            t--;
        }

	}
}



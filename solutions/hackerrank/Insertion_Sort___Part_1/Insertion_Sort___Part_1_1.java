// QUESTION URL: https://www.hackerrank.com/challenges/insertionsort1/problem
// STATUS: Accepted

import java.util.Arrays;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        int[] array = Arrays.stream(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int index = n-2;
        int element = array[n-1];

        while (index >= 0 && element < array[index]){
            array[index + 1] = array[index];
            index--;
            printInsertion(array);
        }
        array[index + 1] = element;
        printInsertion(array);
    }
    public static void printInsertion(int[] arr){
        for (int i: arr){
            System.out.print(i);
            System.out.print(" ");
        }
        System.out.println();
    }
}

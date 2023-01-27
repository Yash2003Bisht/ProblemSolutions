// QUESTION URL: https://www.hackerrank.com/challenges/java-negative-subarray/problem
// STATUS: Accepted

import java.util.Arrays;
import java.util.Scanner;

public class Solution {

    public static int sum(int[] array){
        int total = 0;
        for (int j : array) {
            total += j;
        }
        return total;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        int[] array = Arrays.stream(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int result = 0;

        for (int i = 0; i < array.length; i++){
            for (int j = i; j < array.length; j++){
                int[] subArray = Arrays.copyOfRange(array, i, j+1);
                if (sum(subArray) < 0){
                    result++;
                }
            }
        }

        System.out.println(result);



    }
}

// DATE: 20/07/2022, 07:22:21
// PROBLEM NAME: Add Two Numbers
// PROBLEM URL: https://www.codechef.com/problems/FLOW001
// PROBLEM DIFFICULTY RATTING: 242
// STATUS: accepted
// TIME: 0.25
// MEMORY: 47.9M

import java.util.Scanner;
import java.util.Arrays;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < T; i++){
            int[] add = Arrays.stream(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            System.out.println(add[0] + add[1]);
        }

    }
}


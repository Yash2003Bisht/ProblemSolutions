// QUESTION URL: https://www.hackerrank.com/challenges/java-arraylist/problem
// STATUS: Accepted

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        // Reading input for array's
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        ArrayList<int[]> array = new ArrayList<>();
        for (int i = 0; i < n; i++){
            int[] sub_array = Arrays.stream(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            sub_array = Arrays.copyOfRange(sub_array, 1, sub_array.length);
            array.add(sub_array);
        }

        // Reading input for quires
        int q = sc.nextInt();
        ArrayList<int[]> quires =  new ArrayList<>();
        sc.nextLine();

        for (int i = 0; i < q; i++){
            int[] sub_quires = Arrays.stream(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            quires.add(sub_quires);
        }

        for (int[] query: quires){
            try{
                System.out.println(array.get(query[0]-1)[query[1]-1]);
            } catch (IndexOutOfBoundsException error){
                System.out.println("ERROR!");
            }
        }

    }
}

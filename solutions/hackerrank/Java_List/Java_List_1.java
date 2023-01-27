// QUESTION URL: https://www.hackerrank.com/challenges/java-list/problem
// STATUS: Accepted

import java.util.Arrays;
import java.util.List;
import java.util.Objects;
import java.util.Scanner;

public class chck {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int lst_length = sc.nextInt();
        sc.nextLine();
        List<Integer> lst = new java.util.ArrayList<Integer>();
        int[] elements = Arrays.stream(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        for (int i = 0; i < lst_length; i++){
            lst.add(elements[i]);
        }

        int q = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < q; i++){
            String query = sc.nextLine();
            int[] query_lst = Arrays.stream(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();

            if (Objects.equals(query, "Insert")) {
                lst.add(query_lst[0], query_lst[1]);
            }else{
                lst.remove(query_lst[0]);
            }
        }

        for (int i: lst){
            System.out.print(i + " ");
        }

    }
}

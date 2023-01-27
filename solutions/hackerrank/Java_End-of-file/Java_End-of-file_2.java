// QUESTION URL: https://www.hackerrank.com/challenges/java-end-of-file/problem
// STATUS: Accepted

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        int counter = 0;
        Scanner sc = new Scanner(System.in);
        while (true){
            boolean hasNext = sc.hasNext();
            if (hasNext) {
                counter++;
                String data = sc.nextLine();
                System.out.println(counter + " " + data);
            } else{
                break;
            }
        }
    }
}

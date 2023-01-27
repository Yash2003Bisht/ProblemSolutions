// QUESTION URL: https://www.hackerrank.com/challenges/java-datatypes/problem
// STATUS: Wrong Answer

import java.io.*;
import java.util.*;

public class chck {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();
        for (int i = 0; i < count; i++){
            try{
                long value = sc.nextLong();
                System.out.println(value + " can be fitted in:");
                if(value>=-128 && value<=127)System.out.println("* byte");
                if(value>=-32768 && value<=32767)System.out.println("* short");
                if(value>=-2147483648 && value<=2147483647)System.out.println("* int");
                if(value>= -9223372036854775807L) System.out.println("* long");

            }catch (Exception e){
                System.out.println(sc.next() + " can't be fitted anywhere.");
            }
        }
    }
}

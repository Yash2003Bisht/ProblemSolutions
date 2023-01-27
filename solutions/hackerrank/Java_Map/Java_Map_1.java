// QUESTION URL: https://www.hackerrank.com/challenges/phone-book/problem
// STATUS: Accepted

//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh)
    {
        Scanner in = new Scanner(System.in);
        Map<String, Integer> data = new HashMap<>();
        int n=in.nextInt();
        in.nextLine();
        for(int i=0;i<n;i++)
        {
            String name=in.nextLine();
            int phone=in.nextInt();
            data.put(name, phone);
            in.nextLine();
        }
        while(in.hasNext())
            try {
                {
                    String s = in.nextLine();
                    int details = data.get(s);
                    System.out.println(s+"="+details);
                }
            } catch (Exception error){
                System.out.println("Not found");
            }
    }
}




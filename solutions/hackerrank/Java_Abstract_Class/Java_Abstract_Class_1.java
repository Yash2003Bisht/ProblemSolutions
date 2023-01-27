// QUESTION URL: https://www.hackerrank.com/challenges/java-abstract-class/problem
// STATUS: Accepted

import java.util.Scanner;

public class Solution{
    public static void main(String[] args){
        SetBookTitle setBookTitle = new SetBookTitle();
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        setBookTitle.setTitle(s);
        System.out.println(setBookTitle.getTitle());
    }
}

abstract class Book{
    String title;
    abstract void setTitle(String s);

    String getTitle(){
        return title;
    }

}

class SetBookTitle extends Book{
    void setTitle(String s){
        title = "The title is: " + s;
    }
}

// QUESTION URL: https://www.hackerrank.com/challenges/java-inheritance-1/problem
// STATUS: Accepted

public class Solution{
    public static void main(String[] args){
        Bird myBird = new Bird();
        myBird.walk();
        myBird.fly();
        myBird.sing();
    }
}

class Animal1{
    void walk(){
        System.out.println("I am walking");
    }
}

class Bird extends Animal1{

    void fly(){
        System.out.println("I am flying");
    }

    void sing(){
        System.out.println("I am singing");
    }

}

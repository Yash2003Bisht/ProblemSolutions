// QUESTION URL: https://www.hackerrank.com/challenges/java-inheritance-2/problem
// STATUS: Accepted

public class Solution{
    public static void main(String[] args){
        Adder adder = new Adder();
        adder.greeting();
        System.out.print(adder.add(40, 2) + " " + adder.add(10, 3) + " " + adder.add(10, 10));
    }
}

class Arithmetic{

    int add(int a, int b){
        return a + b;
    }

}

class Adder extends Arithmetic{

    void greeting(){
        System.out.println("My superclass is: Arithmetic");
    }

}

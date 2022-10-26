// QUESTION URL: https://www.codechef.com/problems/SMALLXOR

import java.util.PriorityQueue;
import java.util.Scanner;

class Codechef {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();
        int t = sc.nextInt();
        while (t > 0){
            int n = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();
            int[] array = new int[n];
            for (int i = 0; i < n; i++){
                priorityQueue.add(sc.nextInt());
            }
            while (y > 0){
                int minimum = priorityQueue.peek();
                int value = minimum ^ x;
                if ((value) > minimum){
                    priorityQueue.remove();
                    priorityQueue.add(value);
                    y--;
                } else{
                    if ((y & 1) != 0) {
                        priorityQueue.remove();
                        priorityQueue.add(minimum ^ x);
                    }
                    break;
                }
            }
            int q = 0;
            while(!priorityQueue.isEmpty()){
                array[q++] = priorityQueue.remove();
            }
            for(int i: array){
                System.out.print(i + " ");
            }
            System.out.println(" ");
            t--;
        }
    }
}



// DATE: 06/02/2024, 04:02:11
// PROBLEM NAME: Grade The Steel
// PROBLEM URL: https://www.codechef.com/problems/FLOW014
// PROBLEM DIFFICULTY RATTING: 838
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t, a, c, condition1, condition2, condition3;
    float b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%f%d", &a, &b, &c);

        condition1 = a > 50 ? 1 : 0;
        condition2 = b < 0.7 ? 1 : 0;
        condition3 = c > 5600 ? 1 : 0;
        
        if (condition1 && condition2 && condition3)
            printf("10\n");
        else if (condition1 && condition2)
            printf("9\n");
        else if (condition2 && condition3)
            printf("8\n");
        else if (condition1 && condition3)
            printf("7\n");
        else if (condition1 || condition2 || condition3)
            printf("6\n");
        else
            printf("5\n");

    }
    
}




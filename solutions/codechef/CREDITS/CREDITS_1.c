// DATE: 24/01/2024, 08:58:59
// PROBLEM NAME: Complete the credits
// PROBLEM URL: https://www.codechef.com/problems/CREDITS
// PROBLEM DIFFICULTY RATTING: 809
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);

        if (x < 35)
            printf("Underload\n");
        else if (x > 65)
            printf("Overload\n");
        else
            printf("Normal\n");

    }
    
}




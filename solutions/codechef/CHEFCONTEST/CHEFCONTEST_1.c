// DATE: 09/02/2024, 06:55:16
// PROBLEM NAME: Chef and Contest
// PROBLEM URL: https://www.codechef.com/problems/CHEFCONTEST
// PROBLEM DIFFICULTY RATTING: 872
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, x, y, p, q;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &x, &y, &p, &q);
        x  = x + p*10;
        y = y + q*10;
        
        if (x > y){
            printf("Chefina\n");
        } else if (x < y){
            printf("Chef\n");
        } else {
            printf("Draw\n");
        }
        

    }
    
}




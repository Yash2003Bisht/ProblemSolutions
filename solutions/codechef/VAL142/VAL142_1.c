// DATE: 08/02/2024, 09:38:33
// PROBLEM NAME: Valentine Gifts
// PROBLEM URL: https://www.codechef.com/problems/VAL142
// PROBLEM DIFFICULTY RATTING: 729
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);

        if (x >= 127)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
}




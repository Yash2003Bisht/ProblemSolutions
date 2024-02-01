// DATE: 01/02/2024, 06:13:26
// PROBLEM NAME: Judged
// PROBLEM URL: https://www.codechef.com/problems/ADVITIYA2
// PROBLEM DIFFICULTY RATTING: 453
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, r1, r2, r3, r4, r5;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d%d", &r1, &r2, &r3, &r4, &r5);
        
        if ((r1+r2+r3+r4+r5) >= 4)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
}




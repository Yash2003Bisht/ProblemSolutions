// DATE: 07/02/2024, 05:45:48
// PROBLEM NAME: Devendra and Water Sports
// PROBLEM URL: https://www.codechef.com/problems/DEVSPORTS
// PROBLEM DIFFICULTY RATTING: 859
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, z, y, a, b, c, rem;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d%d", &z, &y, &a, &b, &c);
        rem = z - y;

        if (rem >= a+b+c)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
}




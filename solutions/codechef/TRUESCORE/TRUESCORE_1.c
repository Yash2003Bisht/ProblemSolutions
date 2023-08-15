// DATE: 15/08/2023, 01:57:45
// PROBLEM NAME: Is the Score Consistent
// PROBLEM URL: https://www.codechef.com/problems/TRUESCORE
// PROBLEM DIFFICULTY RATTING: 572
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, a, b, c, d;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d\n%d%d", &a, &b, &c, &d);
        
        if (c >= a && d >= b)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");

    }
    
	return 0;
}




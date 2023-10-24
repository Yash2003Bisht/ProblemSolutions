// DATE: 24/10/2023, 02:34:15
// PROBLEM NAME: Trade Surplus
// PROBLEM URL: https://www.codechef.com/problems/SURPLUS
// PROBLEM DIFFICULTY RATTING: 695
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, a1, a2, b1, b2, net_export;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &a1, &a2, &b1, &b2);
        net_export = (a1 - a2) + (b1 - b2);

        if (net_export < 0)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}




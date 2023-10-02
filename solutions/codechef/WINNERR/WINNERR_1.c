// DATE: 02/10/2023, 01:03:14
// PROBLEM NAME: Determine the Winner
// PROBLEM URL: https://www.codechef.com/problems/WINNERR
// PROBLEM DIFFICULTY RATTING: 626
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define max(a, b)(a>b?a:b)

int main(void) {
    int t, pa, pb, qa, qb, max_p, max_q;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &pa, &pb, &qa, &qb);
        max_p = max(pa, pb), max_q = max(qa, qb);

        if (max_p > max_q)
            printf("Q\n");
        else if (max_p < max_q)
            printf("P\n");
        else
            printf("TIE\n");

    }
    
	return 0;
}




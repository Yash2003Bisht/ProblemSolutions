// DATE: 23/08/2023, 09:30:56
// PROBLEM NAME: Sum Queries
// PROBLEM URL: https://www.codechef.com/problems/RRSUM
// PROBLEM DIFFICULTY RATTING: 1438
// STATUS: accepted
// TIME: 0.03
// MEMORY: 1.5M

#include <stdio.h>
#define lld long long int

int main(void) {
    lld n, m, q, start, end, count, mid;
    scanf("%lld%lld", &n, &m);

    start = n+2, end = n+(n*2);
    mid = start + n -1;

    for (int i=0; i<m; i++){
        scanf("%lld", &q);
    
        if (q >= start && q <= mid)
            count = q - start + 1;
        else if (q > mid && q <= end)
            count = end - q + 1;
        else
            count = -1;
        
        if (count == -1)
            printf("0\n");
        else
            printf("%lld\n", count);
        
    }

	return 0;
}


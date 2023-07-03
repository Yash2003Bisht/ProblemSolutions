// DATE: 01/07/2023, 07:31:30
// PROBLEM NAME: Remove Multiples
// PROBLEM URL: https://www.codechef.com/problems/REMOVEMUL
// PROBLEM DIFFICULTY RATTING: 1315
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    long long int t, n, m, i, q, total;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld%lld", &n, &m);
        total = 0;

        for (i=0; i<m; i++){
            scanf("%lld", &q);
            total += q;
        }

        printf("%lld\n", n*(n+1)/2 - total);

    }
    
	return 0;
}




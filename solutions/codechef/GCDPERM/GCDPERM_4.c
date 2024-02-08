// DATE: 27/01/2024, 09:03:22
// PROBLEM NAME: Subset GCD
// PROBLEM URL: https://www.codechef.com/problems/GCDPERM
// PROBLEM DIFFICULTY RATTING: 1362
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
	int t, n, k, mid;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d%d", &n, &k);
        mid = n/k;

        for (int i=1; i<=k; i++)
            printf("%d ", mid*i);

        printf("\n");

	}
	
}



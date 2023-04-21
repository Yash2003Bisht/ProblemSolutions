// DATE: 21/04/2023, 07:21:46
// PROBLEM NAME: Splitting Candies
// PROBLEM URL: https://www.codechef.com/problems/SPCANDY
// PROBLEM DIFFICULTY RATTING: 1314
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    unsigned long long n, k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%llu%llu", &n, &k);

        if (k > 0)
            printf("%llu %llu\n", n/k, n%k);
        else
            printf("0 %llu\n", n);

    }
    
	return 0;
}




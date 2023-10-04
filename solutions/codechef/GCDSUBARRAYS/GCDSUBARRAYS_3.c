// DATE: 03/10/2023, 07:53:49
// PROBLEM NAME: Gcd of Subarrays
// PROBLEM URL: https://www.codechef.com/problems/GCDSUBARRAYS
// PROBLEM DIFFICULTY RATTING: 1498
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t, n, min_sum_gcd;
    long long int k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%lld", &n, &k);
        min_sum_gcd = n + ((n*(n-1)) / 2);

        if (k < min_sum_gcd)
            printf("-1");
        else{
            long long int start = k - (min_sum_gcd - 1);
            printf("%lld ", start);

            for (int i=0; i<n-1; i++)
                printf("1 ");

        }

        printf("\n");

    }
    
	return 0;
}




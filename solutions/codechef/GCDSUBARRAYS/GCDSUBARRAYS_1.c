// DATE: 03/10/2023, 07:56:26
// PROBLEM NAME: Gcd of Subarrays
// PROBLEM URL: https://www.codechef.com/problems/GCDSUBARRAYS
// PROBLEM DIFFICULTY RATTING: 1498
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#define lld long long int

int main(void) {
    int t, n, min_sum_gcd;
    lld k;
    scanf("%d", &t);

    while(t--){
        scanf("%d%lld", &n, &k);
        min_sum_gcd = n + ((n*(n-1)) / 2);

        if (k < min_sum_gcd)
            printf("-1");
        else{
            lld start = k - (min_sum_gcd - 1);
            int temp = n-1;
            printf("%lld ", start);

            for (int i=0; i<temp; i++)
                printf("1 ");

        }

        printf("\n");

    }

	return 0;
}



// DATE: 21/10/2023, 09:10:37
// PROBLEM NAME: Chef Odd
// PROBLEM URL: https://www.codechef.com/problems/CHEFODD
// PROBLEM DIFFICULTY RATTING: 1486
// STATUS: accepted
// TIME: 0.03
// MEMORY: 1.6M

#include <stdio.h>
#define lld long long int

int main(void) {
    int t;
    lld n, k, total;
    scanf("%d", &t);

    while(t--){
        scanf("%lld%lld", &n, &k);
        total = n/2 + n%2;

        if (k*2 > n || (total-k)%2 != 0)
            printf("NO\n");
        else
            printf("YES\n");

    }

	return 0;
}



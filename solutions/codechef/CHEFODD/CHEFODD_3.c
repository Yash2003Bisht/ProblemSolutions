// DATE: 21/10/2023, 08:36:56
// PROBLEM NAME: Chef Odd
// PROBLEM URL: https://www.codechef.com/problems/CHEFODD
// PROBLEM DIFFICULTY RATTING: 1486
// STATUS: wrong answer
// TIME: 0.01
// MEMORY: 1.7M

#include <stdio.h>
#define lld long long int

int main(void) {
    int t;
    lld n, k, total;
    scanf("%d", &t);

    while(t--){
        scanf("%lld%lld", &n, &k);
        total = k*2;

        if (total > n || (n - total)%2 != 0)
            printf("NO\n");
        else
            printf("YES\n");

    }

	return 0;
}



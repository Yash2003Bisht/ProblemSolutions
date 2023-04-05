// DATE: 05/04/2023, 07:24:53
// PROBLEM NAME: Greedy puppy
// PROBLEM URL: https://www.codechef.com/problems/GDOG
// PROBLEM DIFFICULTY RATTING: 1306
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>
#define max(a, b)(a>b ? a:b)

int main(void) {
    int t, n, k, max_coin;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &k);
        max_coin = 0;

        for (int i=1; i<=k; i++)
            max_coin = max(max_coin, n%i);

        printf("%d\n", max_coin);
        
    }

	return 0;
}



// DATE: 12/04/2023, 08:37:37
// PROBLEM NAME: Button Pairs
// PROBLEM URL: https://www.codechef.com/problems/UWCOI20B
// PROBLEM DIFFICULTY RATTING: 1309
// STATUS: accepted
// TIME: 0.06
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, odd, a;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        odd = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);

            if (a%2 != 0)
                odd++;

        }

        printf("%lld\n", odd*(n-odd));

    }

	return 0;
}




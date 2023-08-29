// DATE: 29/08/2023, 08:57:59
// PROBLEM NAME: Make Array Odd
// PROBLEM URL: https://www.codechef.com/problems/MAKEARRAYODD
// PROBLEM DIFFICULTY RATTING: 1445
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n, x, a, even, odd;

    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        even = 0, odd = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);

            if (a%2 == 0)
                even++;
            else
                odd++;

        }

        if (x%2 != 0)
            printf("%d\n", even/2 + even%2);
        else{
            if (odd == 0)
                printf("-1\n");
            else
                printf("%d\n", even);
        }

    }
    
	return 0;
}




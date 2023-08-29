// DATE: 29/08/2023, 09:00:25
// PROBLEM NAME: Make Array Odd
// PROBLEM URL: https://www.codechef.com/problems/MAKEARRAYODD
// PROBLEM DIFFICULTY RATTING: 1445
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.7M

#include <stdio.h>
#define lld long long int

int main(void) {
    int t, n, count;
    lld x, a;

    scanf("%d", &t);
    
    while(t--){
        scanf("%d%lld", &n, &x);
        count = 0;

        for (int i=0; i<n; i++){
            scanf("%lld", &a);

            if (a%2 == 0)
                count++;

        }
        
        if (x%2 == 0 && count == n)
            printf("-1\n");
        else{
            if (x%2 == 0)
                printf("%d\n", count);
            else
                printf("%d\n", count/2 + count%2);
        }
        
    }
    
	return 0;
}



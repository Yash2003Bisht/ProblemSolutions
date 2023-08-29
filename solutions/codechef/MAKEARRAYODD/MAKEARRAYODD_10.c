// DATE: 29/08/2023, 08:36:42
// PROBLEM NAME: Make Array Odd
// PROBLEM URL: https://www.codechef.com/problems/MAKEARRAYODD
// PROBLEM DIFFICULTY RATTING: 1445
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.6M

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
        
        if ((x%2 == 0 && (count > x || count == n)) || (x%2 != 0 && count/2 + count%2 > x))
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




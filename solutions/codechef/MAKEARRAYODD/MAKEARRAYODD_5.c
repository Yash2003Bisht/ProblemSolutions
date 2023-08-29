// DATE: 29/08/2023, 08:48:26
// PROBLEM NAME: Make Array Odd
// PROBLEM URL: https://www.codechef.com/problems/MAKEARRAYODD
// PROBLEM DIFFICULTY RATTING: 1445
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.7M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, x, a, count, half_count;

    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        count = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);

            if (a%2 == 0)
                count++;

        }

        half_count = ceil( (float) count/2);
        if ((x%2 == 0 && (count > x || count == n)) || (x%2 != 0 && half_count > x))
            printf("-1\n");
        else{
            if (x%2 == 0)
                printf("%d\n", count);
            else
                printf("%d\n", half_count);
        }
        
    }
    
	return 0;
}




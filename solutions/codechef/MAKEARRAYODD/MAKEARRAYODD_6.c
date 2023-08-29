// DATE: 29/08/2023, 08:45:43
// PROBLEM NAME: Make Array Odd
// PROBLEM URL: https://www.codechef.com/problems/MAKEARRAYODD
// PROBLEM DIFFICULTY RATTING: 1445
// STATUS: wrong answer
// TIME: 0.01
// MEMORY: 1.6M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, x, a, count;

    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        count = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);

            if (a%2 == 0)
                count++;

        }
        
        if ((x%2 == 0 && (count > x || count == n)) || (x%2 != 0 && ceil(count/2) > x))
            printf("-1\n");
        else{
            if (x%2 == 0)
                printf("%d\n", count);
            else
                printf("%d\n", ceil(count/2));
        }
        
    }
    
	return 0;
}




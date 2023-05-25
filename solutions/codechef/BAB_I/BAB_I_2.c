// DATE: 25/05/2023, 08:10:53
// PROBLEM NAME: Chef And Babla
// PROBLEM URL: https://www.codechef.com/problems/BAB_I
// PROBLEM DIFFICULTY RATTING: 1346
// STATUS: wrong answer
// TIME: 0.02
// MEMORY: 5.1M

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    int t, n, a, min_value;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        min_value = INT_MAX;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (abs(a) < min_value)
                min_value = a;
        }

        printf("%d\n", min_value - 1);

    }
    
	return 0;
}




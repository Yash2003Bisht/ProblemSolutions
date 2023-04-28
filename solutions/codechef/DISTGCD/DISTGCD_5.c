// DATE: 28/04/2023, 07:28:20
// PROBLEM NAME: Possible GCD
// PROBLEM URL: https://www.codechef.com/problems/DISTGCD
// PROBLEM DIFFICULTY RATTING: 1297
// STATUS: accepted
// TIME: 0.11
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int t, a, b, diff, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        diff = abs(a-b), count = 0;
        
        if (diff == 0)
            diff = a;
        
        for (int i=1; i<=sqrt(diff); i++){
            if (diff%i == 0)
                count += diff/i == i ? 1 : 2;
        }
        
        printf("%d\n", count);
        
    }
    
	return 0;
}




// DATE: 31/07/2023, 08:44:15
// PROBLEM NAME: Chef and Candies
// PROBLEM URL: https://www.codechef.com/problems/CHEFCAND
// PROBLEM DIFFICULTY RATTING: 570
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, x, remaining, result;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        remaining = n-x;
        
        if (remaining > 0){
            result = ceil((double) remaining/4);
            printf("%d\n", result);
        }
        else
            printf("0\n");
        
    }
    
	return 0;
}




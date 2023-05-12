// DATE: 12/05/2023, 05:56:28
// PROBLEM NAME: Parliament
// PROBLEM URL: https://www.codechef.com/problems/PARLIAMENT
// PROBLEM DIFFICULTY RATTING: 419
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        
        if (x >= ceil((float)n/2))
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}




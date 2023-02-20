// DATE: 24/10/2022, 03:05:01
// PROBLEM NAME: Reach on Time
// PROBLEM URL: https://www.codechef.com/problems/TIMELY
// PROBLEM DIFFICULTY RATTING: 279
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        
        scanf("%d", &n);
        
        if (n >= 30)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
	return 0;
}




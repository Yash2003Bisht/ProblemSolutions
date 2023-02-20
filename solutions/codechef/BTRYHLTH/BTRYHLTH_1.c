// DATE: 10/02/2023, 07:29:48
// PROBLEM NAME: Battery Health
// PROBLEM URL: https://www.codechef.com/problems/BTRYHLTH
// PROBLEM DIFFICULTY RATTING: 296
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        
        if (x >= 80) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}




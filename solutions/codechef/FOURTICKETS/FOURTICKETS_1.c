// DATE: 08/05/2023, 05:24:38
// PROBLEM NAME: Four Tickets
// PROBLEM URL: https://www.codechef.com/problems/FOURTICKETS
// PROBLEM DIFFICULTY RATTING: 302
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        
        if (x*4 > 1000)
            printf("NO\n");
        else
            printf("YES\n");
        
    }
    
	return 0;
}




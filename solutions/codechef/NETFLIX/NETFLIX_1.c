// DATE: 05/04/2023, 07:06:06
// PROBLEM NAME: Netflix
// PROBLEM URL: https://www.codechef.com/problems/NETFLIX
// PROBLEM DIFFICULTY RATTING: 493
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, b, c, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &a, &b, &c, &x);
        
        if (a+b >= x || a+c >= x || b+c >= x)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}




// DATE: 25/02/2023, 06:49:47
// PROBLEM NAME: Good Turn
// PROBLEM URL: https://www.codechef.com/problems/GDTURN
// PROBLEM DIFFICULTY RATTING: 238
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);

        if (x+y > 6) printf("YES\n");
        else printf("NO\n");
    }
    
	return 0;
}




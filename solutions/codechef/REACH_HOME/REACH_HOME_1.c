// DATE: 31/03/2023, 09:23:11
// PROBLEM NAME: Reach Home
// PROBLEM URL: https://www.codechef.com/problems/REACH_HOME
// PROBLEM DIFFICULTY RATTING: 395
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        
        if (x*5 >= y)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}




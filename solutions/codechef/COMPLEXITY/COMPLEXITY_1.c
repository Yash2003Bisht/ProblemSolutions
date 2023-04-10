// DATE: 10/04/2023, 09:18:41
// PROBLEM NAME: Time Complexity
// PROBLEM URL: https://www.codechef.com/problems/COMPLEXITY
// PROBLEM DIFFICULTY RATTING: 364
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        
        if (x>y)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}




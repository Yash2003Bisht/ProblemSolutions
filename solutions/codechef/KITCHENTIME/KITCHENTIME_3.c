// DATE: 05/02/2023, 09:11:18
// PROBLEM NAME: Kitchen Timings
// PROBLEM URL: https://www.codechef.com/problems/KITCHENTIME
// PROBLEM DIFFICULTY RATTING: 273
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        printf("%d\n", y-x);
        
    }
    
	return 0;
}




// DATE: 28/08/2023, 09:03:47
// PROBLEM NAME: Chef and Bird farm
// PROBLEM URL: https://www.codechef.com/problems/BIRDFARM
// PROBLEM DIFFICULTY RATTING: 591
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x, &y, &z);
        
        if (z%x == 0 && z%y == 0)
            printf("ANY\n");
        else if (z%x == 0)
            printf("CHICKEN\n");
        else if (z%y == 0)
            printf("DUCK\n");
        else
            printf("NONE\n");
        
    }
    
	return 0;
}




// DATE: 07/03/2023, 01:30:23
// PROBLEM NAME: IPL and RCB
// PROBLEM URL: https://www.codechef.com/problems/CLIPLX
// PROBLEM DIFFICULTY RATTING: 1167
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        
        if (x <= y)
            printf("0\n");
        else
            printf("%d\n", x-y);

    }
    
	return 0;
}



